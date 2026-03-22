#ifndef ORBBEC_CAMERA_HPP
#define ORBBEC_CAMERA_HPP

#include <memory>
#include <atomic>
#include <mutex>

#include <rclcpp/rclcpp.hpp>
#include <libobsensor/ObSensor.hpp>
#include <opencv2/opencv.hpp>

#include "orbbec/orbbec_camera_config.hpp"
#include "utils/image_overlay_utils.hpp"
#include "camera_interface/base_camera.hpp"

namespace xterra_perception_api
{
    class OrbbecCamera
    {
    public:
        ColorFrameCallback color_callback_;
        DepthFrameCallback depth_callback_;

        OrbbecCamera(std::shared_ptr<ob::Device> device,
                     const CameraConfig &config, rclcpp::Logger logger,
                     std::shared_ptr<ImageOverlayUtils> overlay_utils);

        ~OrbbecCamera();

        // non-copyable movable
        OrbbecCamera(const OrbbecCamera &) = delete;
        OrbbecCamera &operator=(const OrbbecCamera &) = delete;
        OrbbecCamera(OrbbecCamera &&) noexcept = default;
        OrbbecCamera &operator=(OrbbecCamera &&) noexcept = default;

        bool start(ColorFrameCallback color_cb, DepthFrameCallback depth_cb);

        void stop();

        bool isStreaming() const
        {
            return is_streaming_.load(std::memory_order_acquire);
        }

        bool isInitialized() const
        {
            return is_initialized_.load(std::memory_order_acquire);
        }

        void updateResolution(int color_width, int color_height,
                              int depth_width, int depth_height);

        void updateFPS(int fps);

        bool stopColorStream();
        bool stopDepthStream();

        void setPointCloudGeneration(bool enable);
        std::shared_ptr<pcl::PointCloud<pcl::PointXYZRGB>> getPointCloud() const;

    private:
        void initializeDepthFilters();
        std::shared_ptr<ob::Config> createStreamConfig();
        std::shared_ptr<ob::VideoStreamProfile> getVideoStreamProfile(OBSensorType sensor_type, int width,
                                                                      int height, OBFormat format, int fps);
        void onFrameReceived(std::shared_ptr<ob::FrameSet> frameSet);
        cv::Mat convertColorFrame(std::shared_ptr<ob::Frame> frame);
        cv::Mat convertDepthFrame(std::shared_ptr<ob::Frame> frame);
        void updatePCLPointCloud(std::shared_ptr<ob::Frame> ob_point_cloud);
        std::shared_ptr<ob::DepthFrame> applyDepthFilters(std::shared_ptr<ob::DepthFrame> depth_frame);

    private:
        // Orbbec SDK resources
        std::shared_ptr<ob::Device> device_;
        std::shared_ptr<ob::Pipeline> pipeline_;
        std::shared_ptr<ob::PointCloudFilter> point_cloud_filter_;

        // Post-processing filters (order matters!)
        std::shared_ptr<ob::DecimationFilter> decimation_filter_;
        std::shared_ptr<ob::NoiseRemovalFilter> noise_removal_filter_;
        std::shared_ptr<ob::SpatialAdvancedFilter> spatial_filter_;
        std::shared_ptr<ob::TemporalFilter> temporal_filter_;
        uint8_t decimation_scale_ = 1;

        std::shared_ptr<pcl::PointCloud<pcl::PointXYZRGB>> pcl_point_cloud_;

        // Configuration
        OrbbecCameraConfig orbbec_config_;
        bool enable_depth_filtering_;

        // Callbacks
        std::string image_type_;

        // Shared utilities
        std::shared_ptr<ImageOverlayUtils> overlay_utils_;

        // State management
        std::mutex device_mutex_;
        std::mutex callback_mutex_;
        mutable std::mutex point_cloud_mutex_;
        std::atomic<bool> is_streaming_{false};
        std::atomic<bool> is_initialized_{false};
        std::atomic<bool> is_color_streaming_{false};
        std::atomic<bool> is_depth_streaming_{false};
        std::atomic<bool> generate_point_cloud_{false};

        // memory management optimizations (reusable buffers)
        cv::Mat depth_8bit_buffer_;
        cv::Mat depth_colored_buffer_;
        cv::Mat color_frame_buffer_;

        // Diagnostics
        rclcpp::Logger logger_;
    };
}

#endif
