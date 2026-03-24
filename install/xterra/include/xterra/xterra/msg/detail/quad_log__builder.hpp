// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xterra:msg/QuadLog.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__QUAD_LOG__BUILDER_HPP_
#define XTERRA__MSG__DETAIL__QUAD_LOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xterra/msg/detail/quad_log__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xterra
{

namespace msg
{

namespace builder
{

class Init_QuadLog_foot_velocity
{
public:
  explicit Init_QuadLog_foot_velocity(::xterra::msg::QuadLog & msg)
  : msg_(msg)
  {}
  ::xterra::msg::QuadLog foot_velocity(::xterra::msg::QuadLog::_foot_velocity_type arg)
  {
    msg_.foot_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::msg::QuadLog msg_;
};

class Init_QuadLog_foot_position
{
public:
  explicit Init_QuadLog_foot_position(::xterra::msg::QuadLog & msg)
  : msg_(msg)
  {}
  Init_QuadLog_foot_velocity foot_position(::xterra::msg::QuadLog::_foot_position_type arg)
  {
    msg_.foot_position = std::move(arg);
    return Init_QuadLog_foot_velocity(msg_);
  }

private:
  ::xterra::msg::QuadLog msg_;
};

class Init_QuadLog_joint_torque
{
public:
  explicit Init_QuadLog_joint_torque(::xterra::msg::QuadLog & msg)
  : msg_(msg)
  {}
  Init_QuadLog_foot_position joint_torque(::xterra::msg::QuadLog::_joint_torque_type arg)
  {
    msg_.joint_torque = std::move(arg);
    return Init_QuadLog_foot_position(msg_);
  }

private:
  ::xterra::msg::QuadLog msg_;
};

class Init_QuadLog_joint_velocity
{
public:
  explicit Init_QuadLog_joint_velocity(::xterra::msg::QuadLog & msg)
  : msg_(msg)
  {}
  Init_QuadLog_joint_torque joint_velocity(::xterra::msg::QuadLog::_joint_velocity_type arg)
  {
    msg_.joint_velocity = std::move(arg);
    return Init_QuadLog_joint_torque(msg_);
  }

private:
  ::xterra::msg::QuadLog msg_;
};

class Init_QuadLog_joint_position
{
public:
  explicit Init_QuadLog_joint_position(::xterra::msg::QuadLog & msg)
  : msg_(msg)
  {}
  Init_QuadLog_joint_velocity joint_position(::xterra::msg::QuadLog::_joint_position_type arg)
  {
    msg_.joint_position = std::move(arg);
    return Init_QuadLog_joint_velocity(msg_);
  }

private:
  ::xterra::msg::QuadLog msg_;
};

class Init_QuadLog_base_wrench
{
public:
  explicit Init_QuadLog_base_wrench(::xterra::msg::QuadLog & msg)
  : msg_(msg)
  {}
  Init_QuadLog_joint_position base_wrench(::xterra::msg::QuadLog::_base_wrench_type arg)
  {
    msg_.base_wrench = std::move(arg);
    return Init_QuadLog_joint_position(msg_);
  }

private:
  ::xterra::msg::QuadLog msg_;
};

class Init_QuadLog_plane_normal
{
public:
  explicit Init_QuadLog_plane_normal(::xterra::msg::QuadLog & msg)
  : msg_(msg)
  {}
  Init_QuadLog_base_wrench plane_normal(::xterra::msg::QuadLog::_plane_normal_type arg)
  {
    msg_.plane_normal = std::move(arg);
    return Init_QuadLog_base_wrench(msg_);
  }

private:
  ::xterra::msg::QuadLog msg_;
};

class Init_QuadLog_angular_velocity
{
public:
  explicit Init_QuadLog_angular_velocity(::xterra::msg::QuadLog & msg)
  : msg_(msg)
  {}
  Init_QuadLog_plane_normal angular_velocity(::xterra::msg::QuadLog::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_QuadLog_plane_normal(msg_);
  }

private:
  ::xterra::msg::QuadLog msg_;
};

class Init_QuadLog_linear_velocity
{
public:
  explicit Init_QuadLog_linear_velocity(::xterra::msg::QuadLog & msg)
  : msg_(msg)
  {}
  Init_QuadLog_angular_velocity linear_velocity(::xterra::msg::QuadLog::_linear_velocity_type arg)
  {
    msg_.linear_velocity = std::move(arg);
    return Init_QuadLog_angular_velocity(msg_);
  }

private:
  ::xterra::msg::QuadLog msg_;
};

class Init_QuadLog_base_orientation
{
public:
  explicit Init_QuadLog_base_orientation(::xterra::msg::QuadLog & msg)
  : msg_(msg)
  {}
  Init_QuadLog_linear_velocity base_orientation(::xterra::msg::QuadLog::_base_orientation_type arg)
  {
    msg_.base_orientation = std::move(arg);
    return Init_QuadLog_linear_velocity(msg_);
  }

private:
  ::xterra::msg::QuadLog msg_;
};

class Init_QuadLog_base_position
{
public:
  explicit Init_QuadLog_base_position(::xterra::msg::QuadLog & msg)
  : msg_(msg)
  {}
  Init_QuadLog_base_orientation base_position(::xterra::msg::QuadLog::_base_position_type arg)
  {
    msg_.base_position = std::move(arg);
    return Init_QuadLog_base_orientation(msg_);
  }

private:
  ::xterra::msg::QuadLog msg_;
};

class Init_QuadLog_contact_force
{
public:
  explicit Init_QuadLog_contact_force(::xterra::msg::QuadLog & msg)
  : msg_(msg)
  {}
  Init_QuadLog_base_position contact_force(::xterra::msg::QuadLog::_contact_force_type arg)
  {
    msg_.contact_force = std::move(arg);
    return Init_QuadLog_base_position(msg_);
  }

private:
  ::xterra::msg::QuadLog msg_;
};

class Init_QuadLog_contact_prob
{
public:
  explicit Init_QuadLog_contact_prob(::xterra::msg::QuadLog & msg)
  : msg_(msg)
  {}
  Init_QuadLog_contact_force contact_prob(::xterra::msg::QuadLog::_contact_prob_type arg)
  {
    msg_.contact_prob = std::move(arg);
    return Init_QuadLog_contact_force(msg_);
  }

private:
  ::xterra::msg::QuadLog msg_;
};

class Init_QuadLog_contact_state
{
public:
  Init_QuadLog_contact_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuadLog_contact_prob contact_state(::xterra::msg::QuadLog::_contact_state_type arg)
  {
    msg_.contact_state = std::move(arg);
    return Init_QuadLog_contact_prob(msg_);
  }

private:
  ::xterra::msg::QuadLog msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::msg::QuadLog>()
{
  return xterra::msg::builder::Init_QuadLog_contact_state();
}

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__QUAD_LOG__BUILDER_HPP_
