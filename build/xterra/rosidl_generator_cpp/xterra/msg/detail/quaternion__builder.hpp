// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xterra:msg/Quaternion.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__QUATERNION__BUILDER_HPP_
#define XTERRA__MSG__DETAIL__QUATERNION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xterra/msg/detail/quaternion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xterra
{

namespace msg
{

namespace builder
{

class Init_Quaternion_w
{
public:
  explicit Init_Quaternion_w(::xterra::msg::Quaternion & msg)
  : msg_(msg)
  {}
  ::xterra::msg::Quaternion w(::xterra::msg::Quaternion::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::msg::Quaternion msg_;
};

class Init_Quaternion_z
{
public:
  explicit Init_Quaternion_z(::xterra::msg::Quaternion & msg)
  : msg_(msg)
  {}
  Init_Quaternion_w z(::xterra::msg::Quaternion::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Quaternion_w(msg_);
  }

private:
  ::xterra::msg::Quaternion msg_;
};

class Init_Quaternion_y
{
public:
  explicit Init_Quaternion_y(::xterra::msg::Quaternion & msg)
  : msg_(msg)
  {}
  Init_Quaternion_z y(::xterra::msg::Quaternion::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Quaternion_z(msg_);
  }

private:
  ::xterra::msg::Quaternion msg_;
};

class Init_Quaternion_x
{
public:
  Init_Quaternion_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Quaternion_y x(::xterra::msg::Quaternion::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Quaternion_y(msg_);
  }

private:
  ::xterra::msg::Quaternion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::msg::Quaternion>()
{
  return xterra::msg::builder::Init_Quaternion_x();
}

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__QUATERNION__BUILDER_HPP_
