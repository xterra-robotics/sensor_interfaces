// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xterra:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
#define XTERRA__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xterra/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xterra
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: q
  {
    if (msg.q.size() == 0) {
      out << "q: []";
    } else {
      out << "q: [";
      size_t pending_items = msg.q.size();
      for (auto item : msg.q) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dq
  {
    if (msg.dq.size() == 0) {
      out << "dq: []";
    } else {
      out << "dq: [";
      size_t pending_items = msg.dq.size();
      for (auto item : msg.dq) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ddq
  {
    if (msg.ddq.size() == 0) {
      out << "ddq: []";
    } else {
      out << "ddq: [";
      size_t pending_items = msg.ddq.size();
      for (auto item : msg.ddq) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: q_current
  {
    if (msg.q_current.size() == 0) {
      out << "q_current: []";
    } else {
      out << "q_current: [";
      size_t pending_items = msg.q_current.size();
      for (auto item : msg.q_current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: d_current
  {
    if (msg.d_current.size() == 0) {
      out << "d_current: []";
    } else {
      out << "d_current: [";
      size_t pending_items = msg.d_current.size();
      for (auto item : msg.d_current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tau_est
  {
    if (msg.tau_est.size() == 0) {
      out << "tau_est: []";
    } else {
      out << "tau_est: [";
      size_t pending_items = msg.tau_est.size();
      for (auto item : msg.tau_est) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: quat
  {
    if (msg.quat.size() == 0) {
      out << "quat: []";
    } else {
      out << "quat: [";
      size_t pending_items = msg.quat.size();
      for (auto item : msg.quat) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro
  {
    if (msg.gyro.size() == 0) {
      out << "gyro: []";
    } else {
      out << "gyro: [";
      size_t pending_items = msg.gyro.size();
      for (auto item : msg.gyro) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: accel
  {
    if (msg.accel.size() == 0) {
      out << "accel: []";
    } else {
      out << "accel: [";
      size_t pending_items = msg.accel.size();
      for (auto item : msg.accel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rpy
  {
    if (msg.rpy.size() == 0) {
      out << "rpy: []";
    } else {
      out << "rpy: [";
      size_t pending_items = msg.rpy.size();
      for (auto item : msg.rpy) {
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
  const SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q.size() == 0) {
      out << "q: []\n";
    } else {
      out << "q:\n";
      for (auto item : msg.q) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dq.size() == 0) {
      out << "dq: []\n";
    } else {
      out << "dq:\n";
      for (auto item : msg.dq) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ddq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ddq.size() == 0) {
      out << "ddq: []\n";
    } else {
      out << "ddq:\n";
      for (auto item : msg.ddq) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: q_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q_current.size() == 0) {
      out << "q_current: []\n";
    } else {
      out << "q_current:\n";
      for (auto item : msg.q_current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: d_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.d_current.size() == 0) {
      out << "d_current: []\n";
    } else {
      out << "d_current:\n";
      for (auto item : msg.d_current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tau_est
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tau_est.size() == 0) {
      out << "tau_est: []\n";
    } else {
      out << "tau_est:\n";
      for (auto item : msg.tau_est) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: quat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.quat.size() == 0) {
      out << "quat: []\n";
    } else {
      out << "quat:\n";
      for (auto item : msg.quat) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro.size() == 0) {
      out << "gyro: []\n";
    } else {
      out << "gyro:\n";
      for (auto item : msg.gyro) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.accel.size() == 0) {
      out << "accel: []\n";
    } else {
      out << "accel:\n";
      for (auto item : msg.accel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rpy.size() == 0) {
      out << "rpy: []\n";
    } else {
      out << "rpy:\n";
      for (auto item : msg.rpy) {
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

inline std::string to_yaml(const SensorData & msg, bool use_flow_style = false)
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
  const xterra::msg::SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  xterra::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xterra::msg::to_yaml() instead")]]
inline std::string to_yaml(const xterra::msg::SensorData & msg)
{
  return xterra::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xterra::msg::SensorData>()
{
  return "xterra::msg::SensorData";
}

template<>
inline const char * name<xterra::msg::SensorData>()
{
  return "xterra/msg/SensorData";
}

template<>
struct has_fixed_size<xterra::msg::SensorData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xterra::msg::SensorData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xterra::msg::SensorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XTERRA__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
