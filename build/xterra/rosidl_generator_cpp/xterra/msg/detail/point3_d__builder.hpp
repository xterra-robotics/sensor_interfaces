// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xterra:msg/Point3D.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__POINT3_D__BUILDER_HPP_
#define XTERRA__MSG__DETAIL__POINT3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xterra/msg/detail/point3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xterra
{

namespace msg
{

namespace builder
{

class Init_Point3D_z
{
public:
  explicit Init_Point3D_z(::xterra::msg::Point3D & msg)
  : msg_(msg)
  {}
  ::xterra::msg::Point3D z(::xterra::msg::Point3D::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::msg::Point3D msg_;
};

class Init_Point3D_y
{
public:
  explicit Init_Point3D_y(::xterra::msg::Point3D & msg)
  : msg_(msg)
  {}
  Init_Point3D_z y(::xterra::msg::Point3D::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Point3D_z(msg_);
  }

private:
  ::xterra::msg::Point3D msg_;
};

class Init_Point3D_x
{
public:
  Init_Point3D_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point3D_y x(::xterra::msg::Point3D::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point3D_y(msg_);
  }

private:
  ::xterra::msg::Point3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::msg::Point3D>()
{
  return xterra::msg::builder::Init_Point3D_x();
}

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__POINT3_D__BUILDER_HPP_
