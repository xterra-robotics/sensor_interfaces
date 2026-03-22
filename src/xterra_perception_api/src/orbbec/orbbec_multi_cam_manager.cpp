#include "orbbec/orbbec_multi_cam_manager.hpp"
#include <algorithm>

namespace xterra_perception_api
{
    OrbbecMultiCamManager::OrbbecMultiCamManager(std::shared_ptr<rclcpp::Node> node,
                                                 std::shared_ptr<CameraRegistry> registry,
                                                 std::shared_ptr<ImageOverlayUtils> overlay_utils,
                                                 const std::string &config_file)
        : CameraBase(node, registry, config_file), logger_(node->get_logger()), overlay_utils_(overlay_utils)
    {
        try
        {
            context_ = std::make_shared<ob::Context>();
            initializeCameras(getCameraRegistry()->getAllCameraConfigs());
            RCLCPP_INFO(logger_, "OrbbecMultiCamManager initialized");
        }
        catch (const ob::Error &e)
        {
            RCLCPP_ERROR(logger_, "Failed to initialize Orbbec context: %s",
                         e.getMessage());
        }
    }

    OrbbecMultiCamManager::~OrbbecMultiCamManager()
    {
        try
        {
            stopAllCameras();
            cameras_.clear();
            camera_name_map_.clear();
            RCLCPP_INFO(logger_, "OrbbecMultiCamManager destroyed");
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(logger_, "Error during cleanup: %s", e.what());
        }
    }

    size_t OrbbecMultiCamManager::initializeCameras(const std::vector<CameraConfig> &configs)
    {
        std::unique_lock<std::shared_mutex> lock(manager_mutex_); // Write lock for initialization

        if (configs.empty())
        {
            RCLCPP_WARN(logger_, "No camera configurations provided");
            return 0;
        }

        if (!context_)
        {
            RCLCPP_ERROR(logger_, "OrbbecSDK Context is not properly initialized");
            return 0;
        }

        auto deviceList = context_->queryDeviceList();
        size_t device_count = deviceList->deviceCount();

        RCLCPP_INFO(logger_, "Found %zu Orbbec device(s)", device_count);

        if (device_count == 0)
        {
            RCLCPP_WARN(logger_, "No Orbbec devices connected");
            return 0;
        }

        size_t initialized_count = 0;

        for (const auto &config : configs)
        {
            if (!config.isValid())
            {
                RCLCPP_WARN(logger_, "Invalid config: %s", config.name.c_str());
                continue;
            }

            bool found = false;

            for (uint32_t i = 0; i < device_count; ++i)
            {
                auto device = deviceList->getDevice(i);
                if (!device)
                    continue;

                auto deviceInfo = device->getDeviceInfo();
                if (!deviceInfo)
                    continue;

                std::string device_sn = deviceInfo->serialNumber();
                std::cout << "detected orbbec serial number = " << device_sn << std::endl;

                if (device_sn == config.serial_number)
                {
                    // OrbbecCameraConfig orbbec_config(config);
                    auto camera = std::make_unique<OrbbecCamera>(device, config, logger_, overlay_utils_);

                    if (!camera->isInitialized())
                    {
                        RCLCPP_ERROR(logger_, "Camera initialization failed: %s",
                                     config.name.c_str());
                        continue;
                    }

                    camera_name_map_[config.name] = cameras_.size();
                    cameras_.push_back(std::move(camera));
                    initialized_count++;
                    found = true;

                    RCLCPP_INFO(logger_, "Initialized camera: %s (SN: %s)",
                                config.name.c_str(),
                                config.serial_number.c_str());
                    break;
                }
            }

            if (!found)
            {
                RCLCPP_WARN(logger_, "Camera not found: %s (SN: %s)",
                            config.name.c_str(), config.serial_number.c_str());
            }
        }

        RCLCPP_INFO(logger_, "Successfully initialized %zu/%zu cameras",
                    initialized_count, configs.size());

        return initialized_count;
    }

    bool OrbbecMultiCamManager::startCamera(const std::string &camera_name, ColorFrameCallback color_cb,
                                            DepthFrameCallback depth_cb, bool pointcloud_is_true)
    {
        // Find camera index with read lock only
        size_t camera_index;
        {
            std::shared_lock<std::shared_mutex> lock(manager_mutex_);
            const size_t *index = findCameraIndex(camera_name);
            if (!index)
            {
                RCLCPP_ERROR(logger_, "Camera not found: %s", camera_name.c_str());
                return false;
            }
            camera_index = *index;
        } // Release lock before calling start()

        // Call start() WITHOUT holding manager_mutex_
        try
        {
            // Get camera pointer safely
            std::shared_ptr<OrbbecCamera> camera;
            {
                std::shared_lock<std::shared_mutex> lock(manager_mutex_);
                if (camera_index >= cameras_.size())
                {
                    RCLCPP_ERROR(logger_, "Invalid camera index");
                    return false;
                }
                camera = std::shared_ptr<OrbbecCamera>(cameras_[camera_index].get(), [](OrbbecCamera *) {});
            }
            if (pointcloud_is_true)
            {
                camera->setPointCloudGeneration(true);
            }
            else
            {
                camera->setPointCloudGeneration(false);
            }
            return camera->start(color_cb, depth_cb);
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(logger_, "Error starting camera %s: %s",
                         camera_name.c_str(), e.what());
            return false;
        }
    }

    bool OrbbecMultiCamManager::getStream(const std::string &camera_name,
                                          const std::string &image_type,
                                          bool pointcloud_is_true,
                                          ColorFrameCallback color_cb,
                                          DepthFrameCallback depth_cb)
    {
        StreamKey stream_key(camera_name, image_type);

        // Check if stream already active
        {
            std::lock_guard<std::mutex> lock(streams_mutex_);
            auto it = active_streams_.find(stream_key);
            if (it != active_streams_.end())
            {
                RCLCPP_INFO(logger_, "Stream already active: %s/%s",
                            camera_name.c_str(), image_type.c_str());
                return true;
            }
        }

        // Find camera with read lock
        bool camera_exists = false;
        {
            std::shared_lock<std::shared_mutex> lock(manager_mutex_);
            const size_t *index = findCameraIndex(camera_name);
            camera_exists = (index != nullptr);
        }

        if (!camera_exists)
        {
            RCLCPP_ERROR(logger_, "Camera not found: %s", camera_name.c_str());
            return false;
        }

        // Start camera WITHOUT holding any locks
        bool success = false;
        if (image_type == "rgb")
        {
            success = startCamera(camera_name, color_cb, nullptr, pointcloud_is_true);
        }
        else if (image_type == "depth")
        {
            success = startCamera(camera_name, nullptr, depth_cb, pointcloud_is_true);
        }
	else if(image_type == "rgb_depth")
	{ 
	    success = startCamera(camera_name, color_cb, depth_cb, pointcloud_is_true);
	}
        else
        {
            RCLCPP_ERROR(logger_, "Invalid image type: %s", image_type.c_str());
            return false;
        }

        // Register stream if successful
        if (success)
        {
            std::lock_guard<std::mutex> lock(streams_mutex_);
            active_streams_[stream_key] = CameraCompany::ORBBEC;
        }

        return success;
    }

    bool OrbbecMultiCamManager::stopStream(const std::string &camera_name,
                                           const std::string &image_type)
    {
        StreamKey stream_key(camera_name, image_type);

        // Check if stream is active and remove it
        bool stream_was_active = false;
        {
            std::lock_guard<std::mutex> lock(streams_mutex_);
            auto it = active_streams_.find(stream_key);
            if (it != active_streams_.end())
            {
                active_streams_.erase(it);
                stream_was_active = true;
            }
            else
            {
                RCLCPP_INFO(logger_, "Stream not active: %s/%s",
                            camera_name.c_str(), image_type.c_str());
                return false;
            }
        }

        if (!stream_was_active)
        {
            return false;
        }

        // Find camera with read lock
        bool camera_exists = false;
        {
            std::shared_lock<std::shared_mutex> lock(manager_mutex_);
            const size_t *index = findCameraIndex(camera_name);
            camera_exists = (index != nullptr);
        }

        if (!camera_exists)
        {
            RCLCPP_ERROR(logger_, "Camera not found: %s", camera_name.c_str());
            return false;
        }

        // Stop camera WITHOUT holding any locks
        try
        {
            stopCamera(camera_name, image_type);
            RCLCPP_INFO(logger_, "Stream stopped: %s/%s",
                        camera_name.c_str(), image_type.c_str());
            return true;
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(logger_, "Error stopping stream %s/%s: %s",
                         camera_name.c_str(), image_type.c_str(), e.what());
            return false;
        }
    }

    bool OrbbecMultiCamManager::startAllCameras(ColorFrameCallback color_cb,
                                                DepthFrameCallback depth_cb)
    {
        // Get camera count with read lock
        size_t camera_count;
        {
            std::shared_lock<std::shared_mutex> lock(manager_mutex_);
            camera_count = cameras_.size();
        }

        if (camera_count == 0)
        {
            RCLCPP_WARN(logger_, "No cameras to start");
            return false;
        }

        bool all_started = true;

        // Start each camera WITHOUT holding manager_mutex_
        for (size_t i = 0; i < camera_count; ++i)
        {
            try
            {
                std::shared_ptr<OrbbecCamera> camera;
                {
                    std::shared_lock<std::shared_mutex> lock(manager_mutex_);
                    camera = std::shared_ptr<OrbbecCamera>(cameras_[i].get(), [](OrbbecCamera *) {});
                }

                if (!camera->start(color_cb, depth_cb))
                {
                    all_started = false;
                }
            }
            catch (const std::exception &e)
            {
                RCLCPP_ERROR(logger_, "Error starting camera at index %zu: %s", i, e.what());
                all_started = false;
            }
        }

        return all_started;
    }

    void OrbbecMultiCamManager::stopCamera(const std::string &camera_name, const std::string &image_type)
    {
        // Find camera with read lock
        size_t camera_index;
        {
            std::shared_lock<std::shared_mutex> lock(manager_mutex_);
            const size_t *index = findCameraIndex(camera_name);
            if (!index)
            {
                RCLCPP_WARN(logger_, "Camera not found: %s", camera_name.c_str());
                return;
            }
            camera_index = *index;
        }

        // Stop camera WITHOUT holding manager_mutex_
        try
        {
            std::shared_ptr<OrbbecCamera> camera;
            {
                std::shared_lock<std::shared_mutex> lock(manager_mutex_);
                if (camera_index >= cameras_.size())
                {
                    RCLCPP_ERROR(logger_, "Invalid camera index");
                    return;
                }
                camera = std::shared_ptr<OrbbecCamera>(cameras_[camera_index].get(), [](OrbbecCamera *) {});
            }
            if (image_type == "rgb")
                camera->stopColorStream();
            else if (image_type == "depth")
                camera->stopDepthStream();
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(logger_, "Error stopping camera %s: %s",
                         camera_name.c_str(), e.what());
        }
    }

    void OrbbecMultiCamManager::stopAllCameras()
    {
        // Get camera count with read lock
        size_t camera_count;
        {
            std::shared_lock<std::shared_mutex> lock(manager_mutex_);
            camera_count = cameras_.size();
        }

        // Stop each camera WITHOUT holding manager_mutex_
        for (size_t i = 0; i < camera_count; ++i)
        {
            try
            {
                std::shared_ptr<OrbbecCamera> camera;
                {
                    std::shared_lock<std::shared_mutex> lock(manager_mutex_);
                    if (i >= cameras_.size())
                        break;
                    camera = std::shared_ptr<OrbbecCamera>(cameras_[i].get(), [](OrbbecCamera *) {});
                }

                camera->stop();
            }
            catch (const std::exception &e)
            {
                RCLCPP_ERROR(logger_, "Error stopping camera at index %zu: %s", i, e.what());
            }
        }
    }

    void OrbbecMultiCamManager::setResolution(const std::string &camera_name,
                                              int color_width, int color_height,
                                              int depth_width, int depth_height)
    {
        if (color_width <= 0 || color_height <= 0 ||
            depth_width <= 0 || depth_height <= 0)
        {
            RCLCPP_ERROR(logger_, "Invalid resolution parameters");
            return;
        }

        // Find camera with read lock
        size_t camera_index;
        {
            std::shared_lock<std::shared_mutex> lock(manager_mutex_);
            const size_t *index = findCameraIndex(camera_name);
            if (!index)
            {
                RCLCPP_WARN(logger_, "Camera not found: %s", camera_name.c_str());
                return;
            }
            camera_index = *index;
        }

        // Update resolution WITHOUT holding manager_mutex_
        std::shared_ptr<OrbbecCamera> camera;
        {
            std::shared_lock<std::shared_mutex> lock(manager_mutex_);
            if (camera_index >= cameras_.size())
            {
                RCLCPP_ERROR(logger_, "Invalid camera index");
                return;
            }
            camera = std::shared_ptr<OrbbecCamera>(cameras_[camera_index].get(), [](OrbbecCamera *) {});
        }

        camera->updateResolution(color_width, color_height, depth_width, depth_height);
    }

    void OrbbecMultiCamManager::setFPS(const std::string &camera_name, int fps)
    {
        // Find camera with read lock
        size_t camera_index;
        {
            std::shared_lock<std::shared_mutex> lock(manager_mutex_);
            const size_t *index = findCameraIndex(camera_name);
            if (!index)
            {
                RCLCPP_WARN(logger_, "Camera not found: %s", camera_name.c_str());
                return;
            }
            camera_index = *index;
        }

        // Update FPS WITHOUT holding manager_mutex_
        std::shared_ptr<OrbbecCamera> camera;
        {
            std::shared_lock<std::shared_mutex> lock(manager_mutex_);
            if (camera_index >= cameras_.size())
            {
                RCLCPP_ERROR(logger_, "Invalid camera index");
                return;
            }
            camera = std::shared_ptr<OrbbecCamera>(cameras_[camera_index].get(), [](OrbbecCamera *) {});
        }

        camera->updateFPS(fps);
    }

    const size_t *OrbbecMultiCamManager::findCameraIndex(const std::string &camera_name) const
    {
        // This is now called while holding shared_lock from caller
        auto it = camera_name_map_.find(camera_name);
        if (it != camera_name_map_.end())
        {
            return &it->second;
        }
        return nullptr;
    }

} // namespace xterra_perception_api
