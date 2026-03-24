// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xterra:msg/FloatScalar.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__FLOAT_SCALAR__TRAITS_HPP_
#define XTERRA__MSG__DETAIL__FLOAT_SCALAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xterra/msg/detail/float_scalar__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xterra
{

namespace msg
{

inline void to_flow_style_yaml(
  const FloatScalar & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FloatScalar & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data: ";
    rosidl_generator_traits::value_to_yaml(msg.data, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FloatScalar & msg, bool use_flow_style = false)
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
  const xterra::msg::FloatScalar & msg,
  std::ostream & out, size_t indentation = 0)
{
  xterra::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xterra::msg::to_yaml() instead")]]
inline std::string to_yaml(const xterra::msg::FloatScalar & msg)
{
  return xterra::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xterra::msg::FloatScalar>()
{
  return "xterra::msg::FloatScalar";
}

template<>
inline const char * name<xterra::msg::FloatScalar>()
{
  return "xterra/msg/FloatScalar";
}

template<>
struct has_fixed_size<xterra::msg::FloatScalar>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xterra::msg::FloatScalar>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xterra::msg::FloatScalar>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XTERRA__MSG__DETAIL__FLOAT_SCALAR__TRAITS_HPP_
