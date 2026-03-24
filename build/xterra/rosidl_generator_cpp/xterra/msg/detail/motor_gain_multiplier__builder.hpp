// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xterra:msg/MotorGainMultiplier.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__BUILDER_HPP_
#define XTERRA__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xterra/msg/detail/motor_gain_multiplier__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xterra
{

namespace msg
{

namespace builder
{

class Init_MotorGainMultiplier_kd_scale
{
public:
  explicit Init_MotorGainMultiplier_kd_scale(::xterra::msg::MotorGainMultiplier & msg)
  : msg_(msg)
  {}
  ::xterra::msg::MotorGainMultiplier kd_scale(::xterra::msg::MotorGainMultiplier::_kd_scale_type arg)
  {
    msg_.kd_scale = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::msg::MotorGainMultiplier msg_;
};

class Init_MotorGainMultiplier_kp_scale
{
public:
  Init_MotorGainMultiplier_kp_scale()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorGainMultiplier_kd_scale kp_scale(::xterra::msg::MotorGainMultiplier::_kp_scale_type arg)
  {
    msg_.kp_scale = std::move(arg);
    return Init_MotorGainMultiplier_kd_scale(msg_);
  }

private:
  ::xterra::msg::MotorGainMultiplier msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::msg::MotorGainMultiplier>()
{
  return xterra::msg::builder::Init_MotorGainMultiplier_kp_scale();
}

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__BUILDER_HPP_
