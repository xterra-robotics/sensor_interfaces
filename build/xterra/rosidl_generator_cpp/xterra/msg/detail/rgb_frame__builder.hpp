// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xterra:msg/RGBFrame.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__RGB_FRAME__BUILDER_HPP_
#define XTERRA__MSG__DETAIL__RGB_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xterra/msg/detail/rgb_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xterra
{

namespace msg
{

namespace builder
{

class Init_RGBFrame_buttons
{
public:
  explicit Init_RGBFrame_buttons(::xterra::msg::RGBFrame & msg)
  : msg_(msg)
  {}
  ::xterra::msg::RGBFrame buttons(::xterra::msg::RGBFrame::_buttons_type arg)
  {
    msg_.buttons = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::msg::RGBFrame msg_;
};

class Init_RGBFrame_axes
{
public:
  explicit Init_RGBFrame_axes(::xterra::msg::RGBFrame & msg)
  : msg_(msg)
  {}
  Init_RGBFrame_buttons axes(::xterra::msg::RGBFrame::_axes_type arg)
  {
    msg_.axes = std::move(arg);
    return Init_RGBFrame_buttons(msg_);
  }

private:
  ::xterra::msg::RGBFrame msg_;
};

class Init_RGBFrame_priority
{
public:
  Init_RGBFrame_priority()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RGBFrame_axes priority(::xterra::msg::RGBFrame::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_RGBFrame_axes(msg_);
  }

private:
  ::xterra::msg::RGBFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::msg::RGBFrame>()
{
  return xterra::msg::builder::Init_RGBFrame_priority();
}

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__RGB_FRAME__BUILDER_HPP_
