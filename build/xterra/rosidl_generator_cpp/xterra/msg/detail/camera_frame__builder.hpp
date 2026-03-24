// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xterra:msg/CameraFrame.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__CAMERA_FRAME__BUILDER_HPP_
#define XTERRA__MSG__DETAIL__CAMERA_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xterra/msg/detail/camera_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xterra
{

namespace msg
{

namespace builder
{

class Init_CameraFrame_channels
{
public:
  explicit Init_CameraFrame_channels(::xterra::msg::CameraFrame & msg)
  : msg_(msg)
  {}
  ::xterra::msg::CameraFrame channels(::xterra::msg::CameraFrame::_channels_type arg)
  {
    msg_.channels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::msg::CameraFrame msg_;
};

class Init_CameraFrame_height
{
public:
  explicit Init_CameraFrame_height(::xterra::msg::CameraFrame & msg)
  : msg_(msg)
  {}
  Init_CameraFrame_channels height(::xterra::msg::CameraFrame::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_CameraFrame_channels(msg_);
  }

private:
  ::xterra::msg::CameraFrame msg_;
};

class Init_CameraFrame_width
{
public:
  explicit Init_CameraFrame_width(::xterra::msg::CameraFrame & msg)
  : msg_(msg)
  {}
  Init_CameraFrame_height width(::xterra::msg::CameraFrame::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_CameraFrame_height(msg_);
  }

private:
  ::xterra::msg::CameraFrame msg_;
};

class Init_CameraFrame_data
{
public:
  Init_CameraFrame_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraFrame_width data(::xterra::msg::CameraFrame::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_CameraFrame_width(msg_);
  }

private:
  ::xterra::msg::CameraFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::msg::CameraFrame>()
{
  return xterra::msg::builder::Init_CameraFrame_data();
}

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__CAMERA_FRAME__BUILDER_HPP_
