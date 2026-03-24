// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xterra:msg/JointData.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__JOINT_DATA__BUILDER_HPP_
#define XTERRA__MSG__DETAIL__JOINT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xterra/msg/detail/joint_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xterra
{

namespace msg
{

namespace builder
{

class Init_JointData_tau
{
public:
  explicit Init_JointData_tau(::xterra::msg::JointData & msg)
  : msg_(msg)
  {}
  ::xterra::msg::JointData tau(::xterra::msg::JointData::_tau_type arg)
  {
    msg_.tau = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::msg::JointData msg_;
};

class Init_JointData_kd
{
public:
  explicit Init_JointData_kd(::xterra::msg::JointData & msg)
  : msg_(msg)
  {}
  Init_JointData_tau kd(::xterra::msg::JointData::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_JointData_tau(msg_);
  }

private:
  ::xterra::msg::JointData msg_;
};

class Init_JointData_kp
{
public:
  explicit Init_JointData_kp(::xterra::msg::JointData & msg)
  : msg_(msg)
  {}
  Init_JointData_kd kp(::xterra::msg::JointData::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_JointData_kd(msg_);
  }

private:
  ::xterra::msg::JointData msg_;
};

class Init_JointData_dq
{
public:
  explicit Init_JointData_dq(::xterra::msg::JointData & msg)
  : msg_(msg)
  {}
  Init_JointData_kp dq(::xterra::msg::JointData::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_JointData_kp(msg_);
  }

private:
  ::xterra::msg::JointData msg_;
};

class Init_JointData_q
{
public:
  Init_JointData_q()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointData_dq q(::xterra::msg::JointData::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_JointData_dq(msg_);
  }

private:
  ::xterra::msg::JointData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::msg::JointData>()
{
  return xterra::msg::builder::Init_JointData_q();
}

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__JOINT_DATA__BUILDER_HPP_
