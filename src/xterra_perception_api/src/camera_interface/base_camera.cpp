#include "camera_interface/base_camera.hpp"

#include <filesystem>
#include <algorithm>

#include <ament_index_cpp/get_package_share_directory.hpp>
#include <yaml-cpp/yaml.h>

namespace xterra_perception_api
{

    // std::atomic<bool> CameraBase::cameras_loaded_{false};
    // std::mutex CameraBase::load_mutex_;

    static std::mutex &get_load_mutex()
    {
        static std::mutex m;
        return m;
    }

    static std::atomic<bool> &get_cameras_loaded_flag()
    {
        static std::atomic<bool> flag{false};
        return flag;
    }

    CameraBase::CameraBase(std::shared_ptr<rclcpp::Node> node,
                           std::shared_ptr<CameraRegistry> registry,
                           const std::string &config_file)
        : node_(node), camera_registry_(registry)
    {
        if (!node_)
        {
            throw std::runtime_error("ROS2 node pointer is null");
        }
        if (!registry)
        {
            throw std::runtime_error("Camera registry pointer is null");
        }
        auto &cameras_loaded = get_cameras_loaded_flag();

        if (!cameras_loaded.load(std::memory_order_acquire))
        {
            std::lock_guard<std::mutex> lock(get_load_mutex());
            if (!cameras_loaded.load(std::memory_order_relaxed))
            {
                try
                {
                    std::string package_share_dir =
                        ament_index_cpp::get_package_share_directory("xterra_perception_api");

                    std::string config_path = package_share_dir + "/" + config_file;

                    RCLCPP_INFO(getLogger(), "Loading camera config from: %s",
                                config_path.c_str());

                    if (loadCamerasFromConfig(config_path))
                    {
                        // multicam_manager_->initializeCameras(camera_registry_->getAllCameraConfigs());
                        RCLCPP_INFO(getLogger(),
                                    "✓ Successfully loaded %zu cameras from config",
                                    camera_registry_->size());
                        cameras_loaded.store(true, std::memory_order_release);
                    }
                    else
                    {
                        RCLCPP_WARN(getLogger(),
                                    "⚠ Failed to load cameras from config file");
                    }
                }
                catch (const std::exception &e)
                {
                    RCLCPP_ERROR(getLogger(),
                                 "✗ Exception while loading config: %s", e.what());
                }
            }
        }
    }

    // ============================================================
    // Private - loadCamerasFromConfig()
    // ============================================================
    bool CameraBase::loadCamerasFromConfig(const std::string &config_file_path)
    {
        try
        {
            if (!std::filesystem::exists(config_file_path))
            {
                RCLCPP_ERROR(getLogger(),
                             "Config file not found: %s", config_file_path.c_str());
                return false;
            }

            YAML::Node config = YAML::LoadFile(config_file_path);

            if (!config["cameras"])
            {
                RCLCPP_ERROR(getLogger(),
                             "No 'cameras' section found in config file");
                return false;
            }

            YAML::Node cameras = config["cameras"];
            int loaded_count = 0;

            for (YAML::const_iterator it = cameras.begin(); it != cameras.end(); ++it)
            {
                std::string camera_key = it->first.as<std::string>();
                YAML::Node camera_node = it->second;

                try
                {
                    // Parse all required fields
                    std::string camera_name = camera_node["camera_name"].as<std::string>();
                    std::string user_defined_cam_id = camera_node["user_defined_cam_id"].as<std::string>();
                    std::string cam_serial_number = camera_node["cam_serial_number"].as<std::string>();

                    // Parse resolution and fps (now as integers, not strings)
                    int width = 640;
                    int height = 480;
                    int fps = 30;

                    if (camera_node["resolution"] && camera_node["resolution"].IsSequence() && camera_node["resolution"].size() == 2)
                    {
                        width = camera_node["resolution"][0].as<int>();
                        height = camera_node["resolution"][1].as<int>();
                    }

                    if (camera_node["fps"])
                    {
                        fps = camera_node["fps"].as<int>();
                    }

                    // Parse camera topics
                    std::vector<std::string> camera_topics;
                    if (camera_node["camera_topics"] && camera_node["camera_topics"].IsSequence())
                    {
                        for (const auto &topic : camera_node["camera_topics"])
                        {
                            camera_topics.push_back(topic.as<std::string>());
                        }
                    }

                    CameraConfig cam_config(camera_name, cam_serial_number, user_defined_cam_id,
                                            camera_topics, width, height, fps);

                    // if (camera_node["align_depth_to_color"])
                    // {
                    //     cam_config.align_depth_to_color = camera_node["align_depth_to_color"].as<bool>();
                    // }

                    // if (camera_node["use_hardware_sync"])
                    // {
                    //     cam_config.use_hardware_sync = camera_node["use_hardware_sync"].as<bool>();
                    // }

                    // Validate and register
                    if (cam_config.isValid())
                    {
                        camera_registry_->registerCamera(cam_config);
                        loaded_count++;

                        RCLCPP_INFO(getLogger(),
                                    "Registered camera: %s (ID: %s, Serial: %s, Resolution: %dx%d@%dfps, Topics: %zu)",
                                    cam_config.name.c_str(), cam_config.user_defined_cam_id.c_str(),
                                    cam_config.serial_number.c_str(), width, height, fps, cam_config.camera_topics.size());
                    }
                    else
                    {
                        RCLCPP_WARN(getLogger(),
                                    "Invalid camera configuration for: %s", camera_key.c_str());
                    }
                }
                catch (const YAML::Exception &e)
                {
                    RCLCPP_ERROR(getLogger(),
                                 "Error parsing camera '%s': %s",
                                 camera_key.c_str(), e.what());
                    continue;
                }
            }

            RCLCPP_INFO(getLogger(),
                        "Successfully loaded %d camera(s) from config file", loaded_count);

            return loaded_count > 0;
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(getLogger(),
                         "Error loading config file: %s", e.what());
            return false;
        }
    }

} // namespace xterra_perception_api
