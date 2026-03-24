// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xterra:msg/IndicatorData.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__INDICATOR_DATA__TRAITS_HPP_
#define XTERRA__MSG__DETAIL__INDICATOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xterra/msg/detail/indicator_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xterra
{

namespace msg
{

inline void to_flow_style_yaml(
  const IndicatorData & msg,
  std::ostream & out)
{
  out << "{";
  // member: led1
  {
    out << "led1: ";
    rosidl_generator_traits::value_to_yaml(msg.led1, out);
    out << ", ";
  }

  // member: led2
  {
    out << "led2: ";
    rosidl_generator_traits::value_to_yaml(msg.led2, out);
    out << ", ";
  }

  // member: led3
  {
    out << "led3: ";
    rosidl_generator_traits::value_to_yaml(msg.led3, out);
    out << ", ";
  }

  // member: buzzer
  {
    out << "buzzer: ";
    rosidl_generator_traits::value_to_yaml(msg.buzzer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IndicatorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led1: ";
    rosidl_generator_traits::value_to_yaml(msg.led1, out);
    out << "\n";
  }

  // member: led2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led2: ";
    rosidl_generator_traits::value_to_yaml(msg.led2, out);
    out << "\n";
  }

  // member: led3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led3: ";
    rosidl_generator_traits::value_to_yaml(msg.led3, out);
    out << "\n";
  }

  // member: buzzer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buzzer: ";
    rosidl_generator_traits::value_to_yaml(msg.buzzer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IndicatorData & msg, bool use_flow_style = false)
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
  const xterra::msg::IndicatorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  xterra::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xterra::msg::to_yaml() instead")]]
inline std::string to_yaml(const xterra::msg::IndicatorData & msg)
{
  return xterra::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xterra::msg::IndicatorData>()
{
  return "xterra::msg::IndicatorData";
}

template<>
inline const char * name<xterra::msg::IndicatorData>()
{
  return "xterra/msg/IndicatorData";
}

template<>
struct has_fixed_size<xterra::msg::IndicatorData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xterra::msg::IndicatorData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xterra::msg::IndicatorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XTERRA__MSG__DETAIL__INDICATOR_DATA__TRAITS_HPP_
