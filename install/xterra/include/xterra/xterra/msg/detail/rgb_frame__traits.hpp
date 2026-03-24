// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xterra:msg/RGBFrame.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__RGB_FRAME__TRAITS_HPP_
#define XTERRA__MSG__DETAIL__RGB_FRAME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xterra/msg/detail/rgb_frame__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xterra
{

namespace msg
{

inline void to_flow_style_yaml(
  const RGBFrame & msg,
  std::ostream & out)
{
  out << "{";
  // member: priority
  {
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << ", ";
  }

  // member: axes
  {
    if (msg.axes.size() == 0) {
      out << "axes: []";
    } else {
      out << "axes: [";
      size_t pending_items = msg.axes.size();
      for (auto item : msg.axes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: buttons
  {
    if (msg.buttons.size() == 0) {
      out << "buttons: []";
    } else {
      out << "buttons: [";
      size_t pending_items = msg.buttons.size();
      for (auto item : msg.buttons) {
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
  const RGBFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    rosidl_generator_traits::value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: axes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.axes.size() == 0) {
      out << "axes: []\n";
    } else {
      out << "axes:\n";
      for (auto item : msg.axes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: buttons
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.buttons.size() == 0) {
      out << "buttons: []\n";
    } else {
      out << "buttons:\n";
      for (auto item : msg.buttons) {
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

inline std::string to_yaml(const RGBFrame & msg, bool use_flow_style = false)
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
  const xterra::msg::RGBFrame & msg,
  std::ostream & out, size_t indentation = 0)
{
  xterra::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xterra::msg::to_yaml() instead")]]
inline std::string to_yaml(const xterra::msg::RGBFrame & msg)
{
  return xterra::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xterra::msg::RGBFrame>()
{
  return "xterra::msg::RGBFrame";
}

template<>
inline const char * name<xterra::msg::RGBFrame>()
{
  return "xterra/msg/RGBFrame";
}

template<>
struct has_fixed_size<xterra::msg::RGBFrame>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xterra::msg::RGBFrame>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xterra::msg::RGBFrame>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XTERRA__MSG__DETAIL__RGB_FRAME__TRAITS_HPP_
