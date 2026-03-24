#ifndef PERCEPTION_BASE_API_HPP
#define PERCEPTION_BASE_API_HPP

#include <string>
#include <memory>
#include <mutex>
#include <atomic>

#include <rclcpp/rclcpp.hpp>

#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <optional>

#include "camera_interface/camera_config.hpp"
#include "utils/image_overlay_utils.hpp"

namespace xterra_perception_api
{
    using ColorFrameCallback = std::function<void(const cv::Mat &color_frame)>;
    using DepthFrameCallback = std::function<void(const cv::Mat &depth_frame,
                                                  std::optional<std::shared_ptr<pcl::PointCloud<pcl::PointXYZRGB>>> point_cloud)>;

    enum class CameraCompany
    {
        ORBBEC,
        INTEL,
        ZED
    };

    struct StreamKey
    {
        std::string camera_name;
        std::string image_type;

        StreamKey(std::string cam, std::string type)
            : camera_name(std::move(cam)), image_type(std::move(type)) {}

        bool operator==(const StreamKey &other) const
        {
            return camera_name == other.camera_name && image_type == other.image_type;
        }
    };

    struct StreamKeyHash
    {
        std::size_t operator()(const StreamKey &key) const noexcept
        {
            std::size_t h1 = std::hash<std::string>{}(key.camera_name);
            std::size_t h2 = std::hash<std::string>{}(key.image_type);
            return h1 ^ (h2 << 1);
        }
    };

    class CameraRegistry
    {
    public:
        CameraRegistry() = default;

        void registerCamera(const CameraConfig &cam_config)
        {
            if (cam_config.isValid())
            {
                registry_[cam_config.name] = cam_config;
            }
        }

        bool hasCamera(const std::string &camera_name) const
        {
            return registry_.find(camera_name) != registry_.end();
        }

        const CameraConfig *getCamera(const std::string &camera_name) const
        {
            auto it = registry_.find(camera_name);
            return (it != registry_.end()) ? &it->second : nullptr;
        }

        size_t size() const
        {
            return registry_.size();
        }

        std::vector<CameraConfig> getAllCameraConfigs()
        {
            std::vector<CameraConfig> ans;
            for (const auto &[key, value] : registry_)
                ans.emplace_back(std::move(value));
            return ans;
        }

    private:
        std::unordered_map<std::string, CameraConfig> registry_;
    };

    class CameraBase
    {
    public:
        explicit CameraBase(std::shared_ptr<rclcpp::Node> node,
                            std::shared_ptr<CameraRegistry> registry,
                            const std::string &config_file = "config/camera_meta_data.yaml");

        virtual ~CameraBase() = default;

        // Delete copy operations (manages shared resources)
        CameraBase(const CameraBase &) = delete;
        CameraBase &operator=(const CameraBase &) = delete;

        // Allow move operations
        CameraBase(CameraBase &&) = default;
        CameraBase &operator=(CameraBase &&) = default;

    protected:
        std::shared_ptr<CameraRegistry> getCameraRegistry() const
        {
            return camera_registry_;
        }

        std::shared_ptr<rclcpp::Node> getNode() const
        {
            return node_;
        }

        rclcpp::Logger getLogger() const
        {
            return node_->get_logger();
        }

    private:
        std::shared_ptr<rclcpp::Node> node_;
        std::shared_ptr<CameraRegistry> camera_registry_;

        // Thread-safe static config loading
        // static std::atomic<bool> cameras_loaded_;
        // static std::mutex load_mutex_;

        bool loadCamerasFromConfig(const std::string &config_file_path);
    };

} // namespace xterra_perception_api

#endif // PERCEPTION_BASE_API_HPP
