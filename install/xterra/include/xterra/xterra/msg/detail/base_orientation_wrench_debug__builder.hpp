// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xterra:msg/BaseOrientationWrenchDebug.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__BASE_ORIENTATION_WRENCH_DEBUG__BUILDER_HPP_
#define XTERRA__MSG__DETAIL__BASE_ORIENTATION_WRENCH_DEBUG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xterra/msg/detail/base_orientation_wrench_debug__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xterra
{

namespace msg
{

namespace builder
{

class Init_BaseOrientationWrenchDebug_base_wrench_full
{
public:
  explicit Init_BaseOrientationWrenchDebug_base_wrench_full(::xterra::msg::BaseOrientationWrenchDebug & msg)
  : msg_(msg)
  {}
  ::xterra::msg::BaseOrientationWrenchDebug base_wrench_full(::xterra::msg::BaseOrientationWrenchDebug::_base_wrench_full_type arg)
  {
    msg_.base_wrench_full = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::msg::BaseOrientationWrenchDebug msg_;
};

class Init_BaseOrientationWrenchDebug_base_wrench_legs
{
public:
  explicit Init_BaseOrientationWrenchDebug_base_wrench_legs(::xterra::msg::BaseOrientationWrenchDebug & msg)
  : msg_(msg)
  {}
  Init_BaseOrientationWrenchDebug_base_wrench_full base_wrench_legs(::xterra::msg::BaseOrientationWrenchDebug::_base_wrench_legs_type arg)
  {
    msg_.base_wrench_legs = std::move(arg);
    return Init_BaseOrientationWrenchDebug_base_wrench_full(msg_);
  }

private:
  ::xterra::msg::BaseOrientationWrenchDebug msg_;
};

class Init_BaseOrientationWrenchDebug_base_wrench_base_ori
{
public:
  explicit Init_BaseOrientationWrenchDebug_base_wrench_base_ori(::xterra::msg::BaseOrientationWrenchDebug & msg)
  : msg_(msg)
  {}
  Init_BaseOrientationWrenchDebug_base_wrench_legs base_wrench_base_ori(::xterra::msg::BaseOrientationWrenchDebug::_base_wrench_base_ori_type arg)
  {
    msg_.base_wrench_base_ori = std::move(arg);
    return Init_BaseOrientationWrenchDebug_base_wrench_legs(msg_);
  }

private:
  ::xterra::msg::BaseOrientationWrenchDebug msg_;
};

class Init_BaseOrientationWrenchDebug_base_wrench_base_tra
{
public:
  Init_BaseOrientationWrenchDebug_base_wrench_base_tra()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BaseOrientationWrenchDebug_base_wrench_base_ori base_wrench_base_tra(::xterra::msg::BaseOrientationWrenchDebug::_base_wrench_base_tra_type arg)
  {
    msg_.base_wrench_base_tra = std::move(arg);
    return Init_BaseOrientationWrenchDebug_base_wrench_base_ori(msg_);
  }

private:
  ::xterra::msg::BaseOrientationWrenchDebug msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::msg::BaseOrientationWrenchDebug>()
{
  return xterra::msg::builder::Init_BaseOrientationWrenchDebug_base_wrench_base_tra();
}

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__BASE_ORIENTATION_WRENCH_DEBUG__BUILDER_HPP_
