#include "orbbec/orbbec_camera.hpp"
#include <opencv2/opencv.hpp>

namespace xterra_perception_api
{
    OrbbecCamera::OrbbecCamera(std::shared_ptr<ob::Device> device,
                               const CameraConfig &config, rclcpp::Logger logger,
                               std::shared_ptr<ImageOverlayUtils> overlay_utils)
        : device_(device), logger_(logger), overlay_utils_(overlay_utils), orbbec_config_(config)
    {
        if (!device_)
        {
            RCLCPP_ERROR(logger_, "Device pointer is null");
            return;
        }

        try
        {
            pipeline_ = std::make_shared<ob::Pipeline>(device_);
            point_cloud_filter_ = std::make_shared<ob::PointCloudFilter>();
            initializeDepthFilters();
            is_initialized_ = true;
            enable_depth_filtering_ = false;
            pcl_point_cloud_ = std::make_shared<pcl::PointCloud<pcl::PointXYZRGB>>();
            pcl_point_cloud_->is_dense = false;
            RCLCPP_INFO(logger_, "[%s] OrbbecCamera initialized (SN: %s)",
                        orbbec_config_.name().c_str(),
                        orbbec_config_.serial_number().c_str());
        }
        catch (const ob::Error &e)
        {
            RCLCPP_ERROR(logger_, "[%s] Failed to initialize pipeline: %s",
                         orbbec_config_.name().c_str(), e.getMessage());
            is_initialized_ = false;
        }
    }

    OrbbecCamera::~OrbbecCamera()
    {
        try
        {
            stop();
            point_cloud_filter_.reset();
            pcl_point_cloud_.reset();
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(logger_, "[%s] Error during shutdown: %s",
                         orbbec_config_.name().c_str(), e.what());
        }
    }

    void OrbbecCamera::initializeDepthFilters()
    {
        try
        {
            decimation_filter_ = std::make_shared<ob::DecimationFilter>();
            decimation_filter_->setScaleValue(decimation_scale_); // 2 = 2x2 downsampling

            noise_removal_filter_ = std::make_shared<ob::NoiseRemovalFilter>();

            OBNoiseRemovalFilterParams noise_params;
            noise_params.disp_diff = 256; // Recommended by Orbbec
            noise_params.max_size = 80;   // Max noise cluster size
            noise_removal_filter_->setFilterParams(noise_params);

            spatial_filter_ = std::make_shared<ob::SpatialAdvancedFilter>();

            OBSpatialAdvancedFilterParams spatial_params;
            spatial_params.alpha = 0.6f;    // Smoothing strength (0.5-0.7 recommended)
            spatial_params.disp_diff = 160; // Edge preservation threshold
            spatial_params.magnitude = 3;   // Filter iterations (2-4 recommended)
            spatial_params.radius = 3;      // Filter kernel radius (2-3 recommended)
            spatial_filter_->setFilterParams(spatial_params);

            // 4. TEMPORAL FILTER (CRITICAL for reducing oscillation)
            temporal_filter_ = std::make_shared<ob::TemporalFilter>();

            enable_depth_filtering_ = true;
        }
        catch (const ob::Error &e)
        {
            RCLCPP_ERROR(logger_, "[%s] Failed to initialize depth filters: %s",
                         orbbec_config_.name().c_str(), e.getMessage());
            enable_depth_filtering_ = false;
        }
    }

    void OrbbecCamera::setPointCloudGeneration(bool enable)
    {
        generate_point_cloud_.store(enable, std::memory_order_release);
    }

    std::shared_ptr<pcl::PointCloud<pcl::PointXYZRGB>> OrbbecCamera::getPointCloud() const
    {
        std::lock_guard<std::mutex> lock(point_cloud_mutex_);
        return pcl_point_cloud_; // Returns shared_ptr (zero-copy)
    }

    bool OrbbecCamera::start(ColorFrameCallback color_cb, DepthFrameCallback depth_cb)
    {
        if (!is_initialized_)
        {
            RCLCPP_ERROR(logger_, "[%s] Camera not initialized",
                         orbbec_config_.name().c_str());
            return false;
        }

        if (!color_cb && !depth_cb)
        {
            RCLCPP_ERROR(logger_, "[%s] At least one callback must be provided",
                         orbbec_config_.name().c_str());
            return false;
        }

        // Track which streams are being started
        bool color_was_streaming = is_color_streaming_.load(std::memory_order_acquire);
        bool depth_was_streaming = is_depth_streaming_.load(std::memory_order_acquire);
        bool was_any_streaming = color_was_streaming || depth_was_streaming;

        if (was_any_streaming)
        {
            RCLCPP_INFO(logger_, "[%s] Already streaming, updating callbacks",
                        orbbec_config_.name().c_str());

            // Update only the desired callbacks
            {
                std::lock_guard<std::mutex> lock(callback_mutex_);
                if (color_cb)
                {
                    color_callback_ = color_cb;
                    is_color_streaming_.store(true, std::memory_order_release);
                }
                if (depth_cb)
                {
                    depth_callback_ = depth_cb;
                    is_depth_streaming_.store(true, std::memory_order_release);
                }
            }

            return true;
        }

        // Store callbacks before starting pipeline
        {
            std::lock_guard<std::mutex> lock(callback_mutex_);
            if (color_cb)
            {
                color_callback_ = color_cb;
                is_color_streaming_.store(true, std::memory_order_release);
            }
            if (depth_cb)
            {
                depth_callback_ = depth_cb;
                is_depth_streaming_.store(true, std::memory_order_release);
            }
        }

        // Create config without holding any user-space locks
        std::shared_ptr<ob::Config> ob_config;
        {
            std::lock_guard<std::mutex> lock(device_mutex_);
            ob_config = createStreamConfig();
            if (!ob_config)
            {
                RCLCPP_ERROR(logger_, "[%s] Failed to create stream config",
                             orbbec_config_.name().c_str());

                std::lock_guard<std::mutex> cb_lock(callback_mutex_);
                color_callback_ = nullptr;
                depth_callback_ = nullptr;
                is_color_streaming_.store(false, std::memory_order_release);
                is_depth_streaming_.store(false, std::memory_order_release);
                return false;
            }
        }

        // Start pipeline WITHOUT holding any locks
        try
        {
            pipeline_->start(ob_config,
                             [this](std::shared_ptr<ob::FrameSet> frameSet)
                             {
                                 this->onFrameReceived(frameSet);
                             });

            RCLCPP_INFO(logger_, "[%s] Streaming started",
                        orbbec_config_.name().c_str());
            // return true;
        }
        catch (const ob::Error &e)
        {
            RCLCPP_ERROR(logger_, "[%s] Failed to start streaming: %s",
                         orbbec_config_.name().c_str(), e.getMessage());

            std::lock_guard<std::mutex> lock(callback_mutex_);
            color_callback_ = nullptr;
            depth_callback_ = nullptr;
            is_color_streaming_.store(false, std::memory_order_release);
            is_depth_streaming_.store(false, std::memory_order_release);
            return false;
        }

        try
        {
            auto camera_param = pipeline_->getCameraParam();
            point_cloud_filter_->setCameraParam(camera_param);
            point_cloud_filter_->setCreatePointFormat(OB_FORMAT_POINT);
            auto depth_intrinsic = camera_param.depthIntrinsic;
            RCLCPP_INFO(logger_, "[%s] Depth camera intrinsics: fx=%.2f, fy=%.2f, cx=%.2f, cy=%.2f",
                        orbbec_config_.name().c_str(), depth_intrinsic.fx, depth_intrinsic.fy,
                        depth_intrinsic.cx, depth_intrinsic.cy);
        }
        catch (const ob::Error &e)
        {
            RCLCPP_WARN(logger_, "[%s] Failed to create point cloud filter: %s",
                        orbbec_config_.name().c_str(), e.getMessage());
            RCLCPP_WARN(logger_, "[%s] Continuing without point cloud support",
                        orbbec_config_.name().c_str());

            // Set filter to nullptr to indicate it's not available
            point_cloud_filter_.reset();
            return false;
        }
        return true;
    }

    // NEW: Stop only color stream
    bool OrbbecCamera::stopColorStream()
    {
        bool was_streaming = is_color_streaming_.exchange(false, std::memory_order_acq_rel);
        if (!was_streaming)
        {
            RCLCPP_INFO(logger_, "[%s] Color stream already stopped",
                        orbbec_config_.name().c_str());
            return false;
        }

        // Check if depth stream is still active
        bool depth_still_active = is_depth_streaming_.load(std::memory_order_acquire);

        try
        {
            // Clear color callback
            {
                std::lock_guard<std::mutex> lock(callback_mutex_);
                color_callback_ = nullptr;
            }

            // If depth is not active, stop the entire pipeline
            if (!depth_still_active)
            {
                if (pipeline_)
                {
                    pipeline_->stop();
                }
                RCLCPP_INFO(logger_, "[%s] Color stream stopped (pipeline stopped - no active streams)",
                            orbbec_config_.name().c_str());
            }
            else
            {
                RCLCPP_INFO(logger_, "[%s] Color stream stopped (depth still active)",
                            orbbec_config_.name().c_str());
            }

            return true;
        }
        catch (const ob::Error &e)
        {
            RCLCPP_ERROR(logger_, "[%s] Error stopping color stream: %s",
                         orbbec_config_.name().c_str(), e.getMessage());
            is_color_streaming_.store(true, std::memory_order_release); // Restore state on error
            return false;
        }
    }

    // NEW: Stop only depth stream
    bool OrbbecCamera::stopDepthStream()
    {
        bool was_streaming = is_depth_streaming_.exchange(false, std::memory_order_acq_rel);
        if (!was_streaming)
        {
            RCLCPP_INFO(logger_, "[%s] Depth stream already stopped",
                        orbbec_config_.name().c_str());
            return false;
        }

        // Check if color stream is still active
        bool color_still_active = is_color_streaming_.load(std::memory_order_acquire);

        try
        {
            // Clear depth callback
            {
                std::lock_guard<std::mutex> lock(callback_mutex_);
                depth_callback_ = nullptr;
            }

            // If color is not active, stop the entire pipeline
            if (!color_still_active)
            {
                if (pipeline_)
                {
                    pipeline_->stop();
                }
                RCLCPP_INFO(logger_, "[%s] Depth stream stopped (pipeline stopped - no active streams)",
                            orbbec_config_.name().c_str());
            }
            else
            {
                RCLCPP_INFO(logger_, "[%s] Depth stream stopped (color still active)",
                            orbbec_config_.name().c_str());
            }

            return true;
        }
        catch (const ob::Error &e)
        {
            RCLCPP_ERROR(logger_, "[%s] Error stopping depth stream: %s",
                         orbbec_config_.name().c_str(), e.getMessage());
            is_depth_streaming_.store(true, std::memory_order_release); // Restore state on error
            return false;
        }
    }

    // Modified: Stop both streams
    void OrbbecCamera::stop()
    {
        bool color_was_streaming = is_color_streaming_.exchange(false, std::memory_order_acq_rel);
        bool depth_was_streaming = is_depth_streaming_.exchange(false, std::memory_order_acq_rel);

        bool was_any_streaming = color_was_streaming || depth_was_streaming;
        if (!was_any_streaming)
        {
            return;
        }

        try
        {
            // Stop pipeline WITHOUT holding locks
            if (pipeline_)
            {
                pipeline_->stop();
            }

            // Clear all callbacks after pipeline is stopped
            {
                std::lock_guard<std::mutex> lock(callback_mutex_);
                color_callback_ = nullptr;
                depth_callback_ = nullptr;
            }

            RCLCPP_INFO(logger_, "[%s] Streaming stopped",
                        orbbec_config_.name().c_str());
        }
        catch (const ob::Error &e)
        {
            RCLCPP_ERROR(logger_, "[%s] Error stopping stream: %s",
                         orbbec_config_.name().c_str(), e.getMessage());
        }
    }

    std::shared_ptr<ob::DepthFrame> OrbbecCamera::applyDepthFilters(
        std::shared_ptr<ob::DepthFrame> depth_frame)
    {
        if (!enable_depth_filtering_ || !depth_frame)
        {
            return depth_frame;
        }

        try
        {
            std::shared_ptr<ob::Frame> filtered_frame = depth_frame;

            // CRITICAL ORDER (as per Orbbec documentation):
            if (decimation_filter_)
                filtered_frame = decimation_filter_->process(filtered_frame);

            if (noise_removal_filter_)
                filtered_frame = noise_removal_filter_->process(filtered_frame);

            if (spatial_filter_)
                filtered_frame = spatial_filter_->process(filtered_frame);

            if (temporal_filter_)
                filtered_frame = temporal_filter_->process(filtered_frame);

            return filtered_frame->as<ob::DepthFrame>();
        }
        catch (const ob::Error &e)
        {
            RCLCPP_WARN_THROTTLE(logger_, *rclcpp::Clock::make_shared(), 1000,
                                 "[%s] Error applying filters: %s",
                                 orbbec_config_.name().c_str(), e.getMessage());
            return depth_frame;
        }
    }

    // Modified: onFrameReceived - only invoke active callbacks
    void OrbbecCamera::onFrameReceived(std::shared_ptr<ob::FrameSet> frameSet)
    {
        if (!frameSet)
        {
            std::cout << "no frameset" << std::endl;
            return;
        }

        auto colorFrame = frameSet->colorFrame();
        auto depthFrame = frameSet->depthFrame();

        std::shared_ptr<ob::DepthFrame> filtered_depth_frame = depthFrame;
        if (depthFrame && is_depth_streaming_.load(std::memory_order_acquire))
            filtered_depth_frame = applyDepthFilters(depthFrame);

        // Copy callbacks and check if streams are active
        ColorFrameCallback color_cb;
        DepthFrameCallback depth_cb;
        bool color_active = is_color_streaming_.load(std::memory_order_acquire);
        bool depth_active = is_depth_streaming_.load(std::memory_order_acquire);

        {
            std::lock_guard<std::mutex> lock(callback_mutex_);
            color_cb = (color_active) ? color_callback_ : nullptr;
            depth_cb = (depth_active) ? depth_callback_ : nullptr;
        }

        // Invoke callbacks WITHOUT holding any locks
        if (colorFrame && color_cb && color_active)
        {
            auto color_cv_frame = convertColorFrame(colorFrame);
            color_cb(color_cv_frame);
        }

        // Depth frame handling with optional point cloud
        // bool depth_active = is_depth_streaming_.load(std::memory_order_acquire);
        if (filtered_depth_frame && depth_cb && depth_active)
        {
            cv::Mat depth_cv_frame;
            std::optional<std::shared_ptr<pcl::PointCloud<pcl::PointXYZRGB>>> opt_cloud;
            if (generate_point_cloud_.load(std::memory_order_acquire))
            {
                if (point_cloud_filter_)
                {
                    try
                    {
                        auto ob_point_cloud_frame = point_cloud_filter_->process(filtered_depth_frame);
                        if (ob_point_cloud_frame)
                        {
                            updatePCLPointCloud(ob_point_cloud_frame);
                            opt_cloud = getPointCloud(); // mutex protected}
                        }
                    }
                    catch (const ob::Error &e)
                    {
                        opt_cloud = std::nullopt;
                    }
                }
            }
            else
            {
                opt_cloud = std::nullopt;
                depth_cv_frame = convertDepthFrame(filtered_depth_frame);
            }
            depth_cb(depth_cv_frame, opt_cloud);
        }
    }

    void OrbbecCamera::updateResolution(int color_width, int color_height,
                                        int depth_width, int depth_height)
    {
        bool was_streaming = is_streaming_.load(std::memory_order_acquire);

        // Store callbacks before stopping
        ColorFrameCallback saved_color_cb;
        DepthFrameCallback saved_depth_cb;

        if (was_streaming)
        {
            {
                std::lock_guard<std::mutex> lock(callback_mutex_);
                saved_color_cb = color_callback_;
                saved_depth_cb = depth_callback_;
            }

            // Stop without holding locks
            stop();
        }

        try
        {
            // Update config with lock
            {
                std::lock_guard<std::mutex> lock(device_mutex_);

                orbbec_config_.base_config.color_config.width = color_width;
                orbbec_config_.base_config.color_config.height = color_height;
                orbbec_config_.base_config.depth_config.width = depth_width;
                orbbec_config_.base_config.depth_config.height = depth_height;

                orbbec_config_.color_stream = OrbbecStreamConfig(
                    orbbec_config_.base_config.color_config, false);
                orbbec_config_.depth_stream = OrbbecStreamConfig(
                    orbbec_config_.base_config.depth_config, true);
            }

            RCLCPP_INFO(logger_, "[%s] Resolution updated to Color: %dx%d, Depth: %dx%d",
                        orbbec_config_.name().c_str(),
                        color_width, color_height, depth_width, depth_height);

            // Restart with saved callbacks
            if (was_streaming && (saved_color_cb || saved_depth_cb))
            {
                start(saved_color_cb, saved_depth_cb);
            }
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(logger_, "[%s] Error updating resolution: %s",
                         orbbec_config_.name().c_str(), e.what());
        }
    }

    void OrbbecCamera::updateFPS(int fps)
    {
        bool was_streaming = is_streaming_.load(std::memory_order_acquire);

        // Store callbacks before stopping
        ColorFrameCallback saved_color_cb;
        DepthFrameCallback saved_depth_cb;

        if (was_streaming)
        {
            {
                std::lock_guard<std::mutex> lock(callback_mutex_);
                saved_color_cb = color_callback_;
                saved_depth_cb = depth_callback_;
            }

            // Stop without holding locks
            stop();
        }

        try
        {
            // Update config with lock
            {
                std::lock_guard<std::mutex> lock(device_mutex_);

                orbbec_config_.base_config.color_config.fps = fps;
                orbbec_config_.base_config.depth_config.fps = fps;

                orbbec_config_.color_stream = OrbbecStreamConfig(
                    orbbec_config_.base_config.color_config, false);
                orbbec_config_.depth_stream = OrbbecStreamConfig(
                    orbbec_config_.base_config.depth_config, true);
            }

            RCLCPP_INFO(logger_, "[%s] FPS updated to %d",
                        orbbec_config_.name().c_str(), fps);

            // Restart with saved callbacks
            if (was_streaming && (saved_color_cb || saved_depth_cb))
            {
                start(saved_color_cb, saved_depth_cb);
            }
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(logger_, "[%s] Error updating FPS: %s",
                         orbbec_config_.name().c_str(), e.what());
        }
    }

    std::shared_ptr<ob::Config> OrbbecCamera::createStreamConfig()
    {
        // Called while holding device_mutex_ from caller
        auto config = std::make_shared<ob::Config>();

        if (orbbec_config_.color_stream.enabled())
        {
            auto colorProfile = getVideoStreamProfile(
                OB_SENSOR_COLOR,
                orbbec_config_.color_stream.width(),
                orbbec_config_.color_stream.height(),
                orbbec_config_.color_stream.native_format,
                orbbec_config_.color_stream.fps());

            if (colorProfile)
            {
                config->enableStream(colorProfile);
            }
            else
            {
                RCLCPP_WARN(logger_, "[%s] Color profile unavailable",
                            orbbec_config_.name().c_str());
            }
        }

        if (orbbec_config_.depth_stream.enabled())
        {
            auto depthProfile = getVideoStreamProfile(
                OB_SENSOR_DEPTH,
                orbbec_config_.depth_stream.width(),
                orbbec_config_.depth_stream.height(),
                orbbec_config_.depth_stream.native_format,
                orbbec_config_.depth_stream.fps());

            if (depthProfile)
            {
                config->enableStream(depthProfile);
            }
            else
            {
                RCLCPP_WARN(logger_, "[%s] Depth profile unavailable",
                            orbbec_config_.name().c_str());
            }
        }

//	config->setAlignMode(ALIGN_D2C_HW_MODE);

        return config;
    }

    std::shared_ptr<ob::VideoStreamProfile> OrbbecCamera::getVideoStreamProfile(OBSensorType sensor_type, int width,
                                                                                int height, OBFormat format, int fps)
    {
        // Called while holding device_mutex_ from createStreamConfig
        auto profiles = pipeline_->getStreamProfileList(sensor_type);
        if (!profiles || profiles->count() == 0)
        {
            RCLCPP_WARN(logger_, "[%s] No profiles available for sensor type",
                        orbbec_config_.name().c_str());
            return nullptr;
        }

        auto profile = profiles->getVideoStreamProfile(width, height, format, fps);
        if (!profile)
        {
            RCLCPP_WARN(logger_, "[%s] Requested profile not available: %dx%d@%dfps",
                        orbbec_config_.name().c_str(), width, height, fps);
        }
        return profile;
    }

    cv::Mat OrbbecCamera::convertColorFrame(std::shared_ptr<ob::Frame> frame)
    {
	if(frame->format()!=OB_FORMAT_MJPG)
	{
	 std::cout<<"Wrong Format Error"<<std::endl;
	}

	cv::Mat rawBuffer(1, frame->dataSize(), CV_8UC1, frame->data());
	cv::Mat bgrFrame = cv::imdecode(rawBuffer, cv::IMREAD_COLOR);

	if(bgrFrame.empty())
	{
	 std::cout<<"decoding FAILED"<<std::endl;
	}
	
//        auto video_frame = frame->as<ob::VideoFrame>();
//
//        int width = video_frame->width();
//        int height = video_frame->height();
//        void *data = video_frame->data();
//
//        if (color_frame_buffer_.empty() ||
//            color_frame_buffer_.size() != cv::Size(width, height))
//        {
//            color_frame_buffer_.create(height, width, CV_8UC3);
//        }
//
//        size_t bytes = width * height * 3;
//        std::memcpy(color_frame_buffer_.data, data, bytes);


        // if (overlay_utils_)
        // {
        //     color_frame_buffer_ = overlay_utils_->addTextOverlay(
        //         color_frame_buffer_, orbbec_config_.name(), "color");
        // }
	return bgrFrame;
       // return color_frame_buffer_;
    }

    cv::Mat OrbbecCamera::convertDepthFrame(std::shared_ptr<ob::Frame> frame)
    {

        auto video_frame = frame->as<ob::VideoFrame>();

        int width = video_frame->width();
        int height = video_frame->height();
        uint16_t *depth_data = reinterpret_cast<uint16_t *>(video_frame->data());
        size_t pixel_count = width * height;

        // Pre-allocate buffers once (member variables)
        if (depth_8bit_buffer_.empty() ||
            depth_8bit_buffer_.size() != cv::Size(width, height))
        {
            depth_8bit_buffer_.create(height, width, CV_8UC1);
            depth_colored_buffer_.create(height, width, CV_8UC3);
        }

        // Find min/max depth values (skip zeros)
        uint16_t min_depth = UINT16_MAX;
        uint16_t max_depth = 0;

        for (size_t i = 0; i < pixel_count; ++i)
        {
            if (depth_data[i] > 0)
            {
                min_depth = std::min(min_depth, depth_data[i]);
                max_depth = std::max(max_depth, depth_data[i]);
            }
        }

        // Normalize depth to 8-bit range
        uint8_t *normalized_data = depth_8bit_buffer_.data;
        uint16_t range = max_depth - min_depth;

        if (range > 0)
        {
            for (size_t i = 0; i < pixel_count; ++i)
            {
                uint16_t depth = depth_data[i];
                if (depth == 0)
                    normalized_data[i] = 0; // Invalid depth
                else
                    normalized_data[i] = static_cast<uint8_t>(
                        255.0 * (depth - min_depth) / range);
            }
        }
        else
        {
            std::memset(normalized_data, 0, pixel_count);
        }

        // cv::applyColorMap(depth_8bit_buffer_, depth_colored_buffer_, cv::COLORMAP_JET);
        // if (overlay_utils_)
        //     depth_colored_buffer_ = overlay_utils_->addTextOverlay(
        //         depth_colored_buffer_, orbbec_config_.name(), "depth");
        // return depth_colored_buffer_;

        return depth_8bit_buffer_;
    }

    void OrbbecCamera::updatePCLPointCloud(std::shared_ptr<ob::Frame> ob_point_cloud)
    {
        if (!ob_point_cloud)
        {
            RCLCPP_WARN_ONCE(logger_, "[%s] Received null point cloud frame",
                             orbbec_config_.name().c_str());
            return;
        }

        // Get Orbbec point data
        OBPoint *ob_points = (OBPoint *)ob_point_cloud->data();
        size_t point_count = ob_point_cloud->dataSize() / sizeof(OBPoint);
        if (point_count == 0)
        {
            RCLCPP_WARN_THROTTLE(logger_, *rclcpp::Clock::make_shared(), 1000,
                                 "[%s] Point cloud is empty",
                                 orbbec_config_.name().c_str());
            return;
        }

        std::lock_guard<std::mutex> lock(point_cloud_mutex_);
        pcl_point_cloud_->points.clear();

        // Resize PCL cloud
        pcl_point_cloud_->points.reserve(point_count);

        for (size_t i = 0; i < point_count; ++i)
        {
            if (ob_points[i].z > 200)
            {
                pcl::PointXYZRGB p;
                p.x = ob_points[i].x / 1000.0;
                p.y = ob_points[i].y / 1000.0;
                p.z = ob_points[i].z / 1000.0;
                pcl_point_cloud_->points.push_back(p);
            }
        }

        pcl_point_cloud_->width = pcl_point_cloud_->points.size();
        pcl_point_cloud_->height = 1;
        pcl_point_cloud_->is_dense = false;
    }

} // namespace xterra_perception_api
