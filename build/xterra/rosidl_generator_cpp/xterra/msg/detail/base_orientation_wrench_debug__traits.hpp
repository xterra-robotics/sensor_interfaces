// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xterra:msg/BaseOrientationWrenchDebug.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__BASE_ORIENTATION_WRENCH_DEBUG__TRAITS_HPP_
#define XTERRA__MSG__DETAIL__BASE_ORIENTATION_WRENCH_DEBUG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xterra/msg/detail/base_orientation_wrench_debug__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xterra
{

namespace msg
{

inline void to_flow_style_yaml(
  const BaseOrientationWrenchDebug & msg,
  std::ostream & out)
{
  out << "{";
  // member: base_wrench_base_tra
  {
    if (msg.base_wrench_base_tra.size() == 0) {
      out << "base_wrench_base_tra: []";
    } else {
      out << "base_wrench_base_tra: [";
      size_t pending_items = msg.base_wrench_base_tra.size();
      for (auto item : msg.base_wrench_base_tra) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: base_wrench_base_ori
  {
    if (msg.base_wrench_base_ori.size() == 0) {
      out << "base_wrench_base_ori: []";
    } else {
      out << "base_wrench_base_ori: [";
      size_t pending_items = msg.base_wrench_base_ori.size();
      for (auto item : msg.base_wrench_base_ori) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: base_wrench_legs
  {
    if (msg.base_wrench_legs.size() == 0) {
      out << "base_wrench_legs: []";
    } else {
      out << "base_wrench_legs: [";
      size_t pending_items = msg.base_wrench_legs.size();
      for (auto item : msg.base_wrench_legs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: base_wrench_full
  {
    if (msg.base_wrench_full.size() == 0) {
      out << "base_wrench_full: []";
    } else {
      out << "base_wrench_full: [";
      size_t pending_items = msg.base_wrench_full.size();
      for (auto item : msg.base_wrench_full) {
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
  const BaseOrientationWrenchDebug & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: base_wrench_base_tra
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.base_wrench_base_tra.size() == 0) {
      out << "base_wrench_base_tra: []\n";
    } else {
      out << "base_wrench_base_tra:\n";
      for (auto item : msg.base_wrench_base_tra) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: base_wrench_base_ori
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.base_wrench_base_ori.size() == 0) {
      out << "base_wrench_base_ori: []\n";
    } else {
      out << "base_wrench_base_ori:\n";
      for (auto item : msg.base_wrench_base_ori) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: base_wrench_legs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.base_wrench_legs.size() == 0) {
      out << "base_wrench_legs: []\n";
    } else {
      out << "base_wrench_legs:\n";
      for (auto item : msg.base_wrench_legs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: base_wrench_full
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.base_wrench_full.size() == 0) {
      out << "base_wrench_full: []\n";
    } else {
      out << "base_wrench_full:\n";
      for (auto item : msg.base_wrench_full) {
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

inline std::string to_yaml(const BaseOrientationWrenchDebug & msg, bool use_flow_style = false)
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
  const xterra::msg::BaseOrientationWrenchDebug & msg,
  std::ostream & out, size_t indentation = 0)
{
  xterra::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xterra::msg::to_yaml() instead")]]
inline std::string to_yaml(const xterra::msg::BaseOrientationWrenchDebug & msg)
{
  return xterra::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xterra::msg::BaseOrientationWrenchDebug>()
{
  return "xterra::msg::BaseOrientationWrenchDebug";
}

template<>
inline const char * name<xterra::msg::BaseOrientationWrenchDebug>()
{
  return "xterra/msg/BaseOrientationWrenchDebug";
}

template<>
struct has_fixed_size<xterra::msg::BaseOrientationWrenchDebug>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xterra::msg::BaseOrientationWrenchDebug>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xterra::msg::BaseOrientationWrenchDebug>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XTERRA__MSG__DETAIL__BASE_ORIENTATION_WRENCH_DEBUG__TRAITS_HPP_
