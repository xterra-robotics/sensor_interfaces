// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xterra:msg/JoyData.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__JOY_DATA__BUILDER_HPP_
#define XTERRA__MSG__DETAIL__JOY_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xterra/msg/detail/joy_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xterra
{

namespace msg
{

namespace builder
{

class Init_JoyData_buttons
{
public:
  explicit Init_JoyData_buttons(::xterra::msg::JoyData & msg)
  : msg_(msg)
  {}
  ::xterra::msg::JoyData buttons(::xterra::msg::JoyData::_buttons_type arg)
  {
    msg_.buttons = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::msg::JoyData msg_;
};

class Init_JoyData_axes
{
public:
  explicit Init_JoyData_axes(::xterra::msg::JoyData & msg)
  : msg_(msg)
  {}
  Init_JoyData_buttons axes(::xterra::msg::JoyData::_axes_type arg)
  {
    msg_.axes = std::move(arg);
    return Init_JoyData_buttons(msg_);
  }

private:
  ::xterra::msg::JoyData msg_;
};

class Init_JoyData_priority
{
public:
  Init_JoyData_priority()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JoyData_axes priority(::xterra::msg::JoyData::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_JoyData_axes(msg_);
  }

private:
  ::xterra::msg::JoyData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::msg::JoyData>()
{
  return xterra::msg::builder::Init_JoyData_priority();
}

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__JOY_DATA__BUILDER_HPP_
