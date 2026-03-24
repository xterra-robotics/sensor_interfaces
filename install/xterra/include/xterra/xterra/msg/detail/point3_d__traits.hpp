// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xterra:msg/Point3D.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__POINT3_D__TRAITS_HPP_
#define XTERRA__MSG__DETAIL__POINT3_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xterra/msg/detail/point3_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xterra
{

namespace msg
{

inline void to_flow_style_yaml(
  const Point3D & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Point3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Point3D & msg, bool use_flow_style = false)
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
  const xterra::msg::Point3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  xterra::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xterra::msg::to_yaml() instead")]]
inline std::string to_yaml(const xterra::msg::Point3D & msg)
{
  return xterra::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xterra::msg::Point3D>()
{
  return "xterra::msg::Point3D";
}

template<>
inline const char * name<xterra::msg::Point3D>()
{
  return "xterra/msg/Point3D";
}

template<>
struct has_fixed_size<xterra::msg::Point3D>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xterra::msg::Point3D>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xterra::msg::Point3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XTERRA__MSG__DETAIL__POINT3_D__TRAITS_HPP_
