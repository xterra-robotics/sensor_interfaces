#ifndef ORBBEC_CAMERA_CONFIG_HPP
#define ORBBEC_CAMERA_CONFIG_HPP

#include <libobsensor/ObSensor.hpp>
#include "camera_interface/camera_config.hpp"

#include "camera_interface/base_camera.hpp"

namespace xterra_perception_api
{
    struct OrbbecStreamConfig
    {
        StreamConfig base_config; // Generic config
        OBFormat native_format;   // Orbbec-specific format

        OBFormat toOrbbecFormat(StreamFormat generic_format, bool is_depth)
        {
            if (is_depth)
                return OB_FORMAT_Y16;
            else
            {
                switch (generic_format)
                {
                case StreamFormat::BGR8:
                    return OB_FORMAT_BGR;
                case StreamFormat::MJPEG:
                    return OB_FORMAT_MJPG;
                default:
                    return OB_FORMAT_BGR;
                }
            }
        }

        OrbbecStreamConfig() = default;

        explicit OrbbecStreamConfig(const StreamConfig &config, bool is_depth)
            : base_config(config)
        {
            native_format = toOrbbecFormat(config.format, is_depth);
        }

        // Convenience accessors
        int width() const { return base_config.width; }
        int height() const { return base_config.height; }
        int fps() const { return base_config.fps; }
        bool enabled() const { return base_config.enabled; }
    };

    struct OrbbecCameraConfig
    {
        CameraConfig base_config; // Generic config

        OrbbecStreamConfig color_stream;
        OrbbecStreamConfig depth_stream;

        bool use_hardware_d2c = false; // Hardware depth-to-color alignment
        int depth_unit = 1;            // Depth unit in millimeters

        OrbbecCameraConfig() = default;

        explicit OrbbecCameraConfig(const CameraConfig &config)
            : base_config(config)
        {
            color_stream = OrbbecStreamConfig(config.color_config, false);
            depth_stream = OrbbecStreamConfig(config.depth_config, true);
            use_hardware_d2c = config.align_depth_to_color;
        }

        const std::string &name() const { return base_config.name; }
        const std::string &serial_number() const { return base_config.serial_number; }
    };
}

#endif