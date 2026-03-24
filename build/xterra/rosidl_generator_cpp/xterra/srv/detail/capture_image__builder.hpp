// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xterra:srv/CaptureImage.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__SRV__DETAIL__CAPTURE_IMAGE__BUILDER_HPP_
#define XTERRA__SRV__DETAIL__CAPTURE_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xterra/srv/detail/capture_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xterra
{

namespace srv
{

namespace builder
{

class Init_CaptureImage_Request_image_type
{
public:
  explicit Init_CaptureImage_Request_image_type(::xterra::srv::CaptureImage_Request & msg)
  : msg_(msg)
  {}
  ::xterra::srv::CaptureImage_Request image_type(::xterra::srv::CaptureImage_Request::_image_type_type arg)
  {
    msg_.image_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::srv::CaptureImage_Request msg_;
};

class Init_CaptureImage_Request_camera_name
{
public:
  Init_CaptureImage_Request_camera_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureImage_Request_image_type camera_name(::xterra::srv::CaptureImage_Request::_camera_name_type arg)
  {
    msg_.camera_name = std::move(arg);
    return Init_CaptureImage_Request_image_type(msg_);
  }

private:
  ::xterra::srv::CaptureImage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::srv::CaptureImage_Request>()
{
  return xterra::srv::builder::Init_CaptureImage_Request_camera_name();
}

}  // namespace xterra


namespace xterra
{

namespace srv
{

namespace builder
{

class Init_CaptureImage_Response_saved_path
{
public:
  explicit Init_CaptureImage_Response_saved_path(::xterra::srv::CaptureImage_Response & msg)
  : msg_(msg)
  {}
  ::xterra::srv::CaptureImage_Response saved_path(::xterra::srv::CaptureImage_Response::_saved_path_type arg)
  {
    msg_.saved_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::srv::CaptureImage_Response msg_;
};

class Init_CaptureImage_Response_message
{
public:
  explicit Init_CaptureImage_Response_message(::xterra::srv::CaptureImage_Response & msg)
  : msg_(msg)
  {}
  Init_CaptureImage_Response_saved_path message(::xterra::srv::CaptureImage_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_CaptureImage_Response_saved_path(msg_);
  }

private:
  ::xterra::srv::CaptureImage_Response msg_;
};

class Init_CaptureImage_Response_reply
{
public:
  Init_CaptureImage_Response_reply()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureImage_Response_message reply(::xterra::srv::CaptureImage_Response::_reply_type arg)
  {
    msg_.reply = std::move(arg);
    return Init_CaptureImage_Response_message(msg_);
  }

private:
  ::xterra::srv::CaptureImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::srv::CaptureImage_Response>()
{
  return xterra::srv::builder::Init_CaptureImage_Response_reply();
}

}  // namespace xterra

#endif  // XTERRA__SRV__DETAIL__CAPTURE_IMAGE__BUILDER_HPP_
