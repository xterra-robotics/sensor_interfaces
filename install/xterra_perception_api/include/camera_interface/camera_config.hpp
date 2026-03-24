#ifndef CAMERA_CONFIG_HPP
#define CAMERA_CONFIG_HPP

#include <string>
#include <variant>
#include <optional>

namespace xterra_perception_api
{

    enum class StreamFormat
    {
        // Color formats
        BGR8,
        MJPEG,
        // Depth formats
        Z16,

        // Infrared formats
        Y8,
        Y16,

        UNKNOWN
    };

    struct StreamConfig
    {
        int width, height, fps;
	bool enabled = false;

        StreamFormat format = StreamFormat::UNKNOWN;

        StreamConfig() = default;

        StreamConfig(int w, int h, int f, StreamFormat fmt, bool en = true)
            : width(w), height(h), fps(f), format(fmt), enabled(en) {}

        bool isValid() const
        {
            return width > 0 && height > 0 && fps > 0;
        }
    };

    // (name, serial_number, user_id, topics, res, fps) -> config
    struct CameraConfig
    {
        // Identification

        std::string name;
        std::string serial_number;
        std::string user_defined_cam_id;
        std::vector<std::string> camera_topics;

        // Stream configurations
        StreamConfig color_config;
        StreamConfig depth_config;
        std::optional<StreamConfig> infrared_config;

        // Common features
        bool align_depth_to_color = false;
        bool use_hardware_sync = false;

        CameraConfig() = default;

        CameraConfig(const std::string &cam_name, const std::string &serial, const std::string &user_id,
                     const std::vector<std::string> &topics, int w, int h, int fps)
            : name(cam_name), serial_number(serial), user_defined_cam_id(user_id), camera_topics(topics)
        {
            //color_config = StreamConfig(w, h, fps, StreamFormat::BGR8, true);
	    color_config = StreamConfig(w, h, fps, StreamFormat::MJPEG, true);
            depth_config = StreamConfig(w, h, fps, StreamFormat::Z16, true);
        }

        bool hasTopicIndex(int index) const
        {
            return index >= 0 && index < static_cast<int>(camera_topics.size());
        }

        bool isValid() const
        {
            return !name.empty() &&
                   !serial_number.empty() &&
                   !camera_topics.empty() &&
                   !user_defined_cam_id.empty() &&
                   (color_config.enabled ? color_config.isValid() : true) &&
                   (depth_config.enabled ? depth_config.isValid() : true);
        }
    };

}

#endif
