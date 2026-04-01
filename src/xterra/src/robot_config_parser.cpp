#include <string>
#include <vector>
#include <map>
#include <iostream>
#include "yaml-cpp/yaml.h" // Ensure yaml-cpp is included and linked
#include <filesystem>
#include <fstream>

// Structure to hold the configuration for a single robot
struct RobotSpecificConfig
{
    std::string base_link;
    std::string entity_name;
    std::map<std::string, double> tau_limits_map; // Stores "tau1", "tau2", "tau3"
    std::vector<float> sleep_pose_q;              // Stores q1 to q12

    // Helper to get tau_limit as a vector<float> in the order tau1, tau2, tau3
    std::vector<float> get_ordered_tau_limits() const
    {
        std::vector<float> limits;
        // Ensure a consistent order, even if the map iteration order isn't guaranteed
        // or if some keys are missing (though your YAML has them)
        if (tau_limits_map.count("tau1"))
        {
            limits.push_back(static_cast<float>(tau_limits_map.at("tau1")));
        }
        else
        {
            // Handle missing tau1, e.g., push a default or throw error
            // For now, pushing 0.0f as a placeholder if missing
            limits.push_back(0.0f);
            // std::cerr << "Warning: tau1 not found in config for get_ordered_tau_limits." << std::endl;
        }
        if (tau_limits_map.count("tau2"))
        {
            limits.push_back(static_cast<float>(tau_limits_map.at("tau2")));
        }
        else
        {
            limits.push_back(0.0f);
            // std::cerr << "Warning: tau2 not found in config for get_ordered_tau_limits." << std::endl;
        }
        if (tau_limits_map.count("tau3"))
        {
            limits.push_back(static_cast<float>(tau_limits_map.at("tau3")));
        }
        else
        {
            limits.push_back(0.0f);
            // std::cerr << "Warning: tau3 not found in config for get_ordered_tau_limits." << std::endl;
        }
        return limits;
    }
};

/**
 * @brief Parses the robot configuration YAML file for a specific robot.
 * @param absolute_config_path Absolute path to the robot_config.yaml file.
 * @param robot_name_to_find The name of the robot section to parse (e.g., "go2", "m2").
 * @param out_config Reference to a RobotSpecificConfig struct to be populated.
 * @return True if parsing was successful and robot was found, false otherwise.
 */
inline bool parse_robot_config(const std::string &absolute_config_path,
                               const std::string &robot_name_to_find,
                               RobotSpecificConfig &out_config)
{
    try
    {
        // Basic file existence check (optional, caller might do this)
        std::ifstream file_check(absolute_config_path);
        if (!file_check.good())
        {
            std::cerr << "Error: Configuration file not found at " << absolute_config_path << std::endl;
            return false;
        }
        file_check.close();

        YAML::Node root_node = YAML::LoadFile(absolute_config_path);

        if (!root_node[robot_name_to_find])
        {
            std::cerr << "Error: Robot '" << robot_name_to_find << "' not found in "
                      << absolute_config_path << std::endl;
            return false;
        }

        YAML::Node robot_node = root_node[robot_name_to_find];

        // Parse base_link
        if (robot_node["base_link"])
        {
            out_config.base_link = robot_node["base_link"].as<std::string>();
        }
        else
        {
            std::cerr << "Warning: 'base_link' not found for robot '" << robot_name_to_find << "'" << std::endl;
        }

        // Parse entity
        if (robot_node["entity"])
        {
            out_config.entity_name = robot_node["entity"].as<std::string>();
        }
        else
        {
            std::cerr << "Warning: 'entity' not found for robot '" << robot_name_to_find << "'" << std::endl;
        }

        // Parse tau_limit (as a map)
        if (robot_node["tau_limit"] && robot_node["tau_limit"].IsMap())
        {
            for (YAML::const_iterator it = robot_node["tau_limit"].begin(); it != robot_node["tau_limit"].end(); ++it)
            {
                out_config.tau_limits_map[it->first.as<std::string>()] = it->second.as<double>();
            }
        }
        else
        {
            std::cerr << "Warning: 'tau_limit' map not found or not a map for robot '" << robot_name_to_find << "'" << std::endl;
        }

        // Parse sleep_pose (q1 to q12)
        if (robot_node["sleep_pose"] && robot_node["sleep_pose"].IsMap())
        {
            YAML::Node sleep_pose_node = robot_node["sleep_pose"];
            out_config.sleep_pose_q.clear();          // Clear any previous data
            out_config.sleep_pose_q.resize(12, 0.0f); // Assuming 12 joints, initialize to 0

            for (int i = 1; i <= 12; ++i)
            {
                std::string q_key = "q" + std::to_string(i);
                if (sleep_pose_node[q_key])
                {
                    out_config.sleep_pose_q[i - 1] = sleep_pose_node[q_key].as<float>();
                }
                else
                {
                    std::cerr << "Warning: '" << q_key << "' not found in 'sleep_pose' for robot '"
                              << robot_name_to_find << "'. Using default 0.0f." << std::endl;
                }
            }
        }
        else
        {
            std::cerr << "Warning: 'sleep_pose' not found or not a map for robot '" << robot_name_to_find << "'" << std::endl;
            out_config.sleep_pose_q.assign(12, 0.0f); // Fill with defaults if sleep_pose is missing
        }

        return true;
    }
    catch (const YAML::Exception &e)
    {
        std::cerr << "Error parsing YAML file '" << absolute_config_path << "': " << e.what() << std::endl;
        return false;
    }
    catch (const std::exception &e)
    {
        std::cerr << "An unexpected error occurred during YAML parsing: " << e.what() << std::endl;
        return false;
    }
}
