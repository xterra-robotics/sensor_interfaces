// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xterra:msg/QuadLog.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__QUAD_LOG__TRAITS_HPP_
#define XTERRA__MSG__DETAIL__QUAD_LOG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xterra/msg/detail/quad_log__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'base_position'
// Member 'linear_velocity'
// Member 'angular_velocity'
// Member 'plane_normal'
#include "xterra/msg/detail/point3_d__traits.hpp"
// Member 'base_orientation'
#include "xterra/msg/detail/quaternion__traits.hpp"

namespace xterra
{

namespace msg
{

inline void to_flow_style_yaml(
  const QuadLog & msg,
  std::ostream & out)
{
  out << "{";
  // member: contact_state
  {
    if (msg.contact_state.size() == 0) {
      out << "contact_state: []";
    } else {
      out << "contact_state: [";
      size_t pending_items = msg.contact_state.size();
      for (auto item : msg.contact_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: contact_prob
  {
    if (msg.contact_prob.size() == 0) {
      out << "contact_prob: []";
    } else {
      out << "contact_prob: [";
      size_t pending_items = msg.contact_prob.size();
      for (auto item : msg.contact_prob) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: contact_force
  {
    if (msg.contact_force.size() == 0) {
      out << "contact_force: []";
    } else {
      out << "contact_force: [";
      size_t pending_items = msg.contact_force.size();
      for (auto item : msg.contact_force) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: base_position
  {
    out << "base_position: ";
    to_flow_style_yaml(msg.base_position, out);
    out << ", ";
  }

  // member: base_orientation
  {
    out << "base_orientation: ";
    to_flow_style_yaml(msg.base_orientation, out);
    out << ", ";
  }

  // member: linear_velocity
  {
    out << "linear_velocity: ";
    to_flow_style_yaml(msg.linear_velocity, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    to_flow_style_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: plane_normal
  {
    out << "plane_normal: ";
    to_flow_style_yaml(msg.plane_normal, out);
    out << ", ";
  }

  // member: base_wrench
  {
    if (msg.base_wrench.size() == 0) {
      out << "base_wrench: []";
    } else {
      out << "base_wrench: [";
      size_t pending_items = msg.base_wrench.size();
      for (auto item : msg.base_wrench) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_position
  {
    if (msg.joint_position.size() == 0) {
      out << "joint_position: []";
    } else {
      out << "joint_position: [";
      size_t pending_items = msg.joint_position.size();
      for (auto item : msg.joint_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_velocity
  {
    if (msg.joint_velocity.size() == 0) {
      out << "joint_velocity: []";
    } else {
      out << "joint_velocity: [";
      size_t pending_items = msg.joint_velocity.size();
      for (auto item : msg.joint_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_torque
  {
    if (msg.joint_torque.size() == 0) {
      out << "joint_torque: []";
    } else {
      out << "joint_torque: [";
      size_t pending_items = msg.joint_torque.size();
      for (auto item : msg.joint_torque) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: foot_position
  {
    if (msg.foot_position.size() == 0) {
      out << "foot_position: []";
    } else {
      out << "foot_position: [";
      size_t pending_items = msg.foot_position.size();
      for (auto item : msg.foot_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: foot_velocity
  {
    if (msg.foot_velocity.size() == 0) {
      out << "foot_velocity: []";
    } else {
      out << "foot_velocity: [";
      size_t pending_items = msg.foot_velocity.size();
      for (auto item : msg.foot_velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const QuadLog & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: contact_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contact_state.size() == 0) {
      out << "contact_state: []\n";
    } else {
      out << "contact_state:\n";
      for (auto item : msg.contact_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: contact_prob
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contact_prob.size() == 0) {
      out << "contact_prob: []\n";
    } else {
      out << "contact_prob:\n";
      for (auto item : msg.contact_prob) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: contact_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contact_force.size() == 0) {
      out << "contact_force: []\n";
    } else {
      out << "contact_force:\n";
      for (auto item : msg.contact_force) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: base_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_position:\n";
    to_block_style_yaml(msg.base_position, out, indentation + 2);
  }

  // member: base_orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_orientation:\n";
    to_block_style_yaml(msg.base_orientation, out, indentation + 2);
  }

  // member: linear_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_velocity:\n";
    to_block_style_yaml(msg.linear_velocity, out, indentation + 2);
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity:\n";
    to_block_style_yaml(msg.angular_velocity, out, indentation + 2);
  }

  // member: plane_normal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane_normal:\n";
    to_block_style_yaml(msg.plane_normal, out, indentation + 2);
  }

  // member: base_wrench
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.base_wrench.size() == 0) {
      out << "base_wrench: []\n";
    } else {
      out << "base_wrench:\n";
      for (auto item : msg.base_wrench) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_position.size() == 0) {
      out << "joint_position: []\n";
    } else {
      out << "joint_position:\n";
      for (auto item : msg.joint_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_velocity.size() == 0) {
      out << "joint_velocity: []\n";
    } else {
      out << "joint_velocity:\n";
      for (auto item : msg.joint_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_torque.size() == 0) {
      out << "joint_torque: []\n";
    } else {
      out << "joint_torque:\n";
      for (auto item : msg.joint_torque) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: foot_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.foot_position.size() == 0) {
      out << "foot_position: []\n";
    } else {
      out << "foot_position:\n";
      for (auto item : msg.foot_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: foot_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.foot_velocity.size() == 0) {
      out << "foot_velocity: []\n";
    } else {
      out << "foot_velocity:\n";
      for (auto item : msg.foot_velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const QuadLog & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace xterra

namespace rosidl_generator_traits
{

[[deprecated("use xterra::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xterra::msg::QuadLog & msg,
  std::ostream & out, size_t indentation = 0)
{
  xterra::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xterra::msg::to_yaml() instead")]]
inline std::string to_yaml(const xterra::msg::QuadLog & msg)
{
  return xterra::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xterra::msg::QuadLog>()
{
  return "xterra::msg::QuadLog";
}

template<>
inline const char * name<xterra::msg::QuadLog>()
{
  return "xterra/msg/QuadLog";
}

template<>
struct has_fixed_size<xterra::msg::QuadLog>
  : std::integral_constant<bool, has_fixed_size<xterra::msg::Point3D>::value && has_fixed_size<xterra::msg::Quaternion>::value> {};

template<>
struct has_bounded_size<xterra::msg::QuadLog>
  : std::integral_constant<bool, has_bounded_size<xterra::msg::Point3D>::value && has_bounded_size<xterra::msg::Quaternion>::value> {};

template<>
struct is_message<xterra::msg::QuadLog>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XTERRA__MSG__DETAIL__QUAD_LOG__TRAITS_HPP_
