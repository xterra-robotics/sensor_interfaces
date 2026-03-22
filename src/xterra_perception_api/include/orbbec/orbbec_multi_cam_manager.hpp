#ifndef ORBBEC_MULTI_CAM_MANAGER_HPP
#define ORBBEC_MULTI_CAM_MANAGER_HPP

#include <rclcpp/rclcpp.hpp>
#include <shared_mutex>
#include "camera_interface/base_camera.hpp"
#include "orbbec/orbbec_camera.hpp"

namespace xterra_perception_api
{
    class OrbbecMultiCamManager : public CameraBase
    {
    public:
        OrbbecMultiCamManager(std::shared_ptr<rclcpp::Node> node,
                              std::shared_ptr<CameraRegistry> registry,
                              std::shared_ptr<ImageOverlayUtils> overlay_utils,
                              const std::string &config_file);

        ~OrbbecMultiCamManager() override;

        bool getStream(const std::string &camera_name, const std::string &image_type,
                       bool pointcloud_is_true, ColorFrameCallback color_cb, DepthFrameCallback depth_cb);
        bool stopStream(const std::string &camera_name, const std::string &image_type);
        void setResolution(const std::string &camera_name, int color_width,
                           int color_height, int depth_width, int depth_height);
        void setFPS(const std::string &camera_name, int fps);

    private:
        const size_t *findCameraIndex(const std::string &camera_name) const;
        bool startCamera(const std::string &camera_name, ColorFrameCallback color_cb,
                         DepthFrameCallback depth_cb, bool pointcloud_is_true);
        bool startAllCameras(ColorFrameCallback color_cb, DepthFrameCallback depth_cb);
        void stopCamera(const std::string &camera_name, const std::string &image_type);
        void stopAllCameras();
        size_t initializeCameras(const std::vector<CameraConfig> &configs);

    private:
        std::shared_ptr<ob::Context> context_;
        std::vector<std::unique_ptr<OrbbecCamera>> cameras_;
        std::unordered_map<std::string, size_t> camera_name_map_;
        std::unordered_map<StreamKey, CameraCompany, StreamKeyHash> active_streams_;

        mutable std::shared_mutex manager_mutex_;
        std::mutex streams_mutex_;
        rclcpp::Logger logger_;
        std::shared_ptr<ImageOverlayUtils> overlay_utils_;
    };
}

#endif
