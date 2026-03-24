// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from xterra:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define XTERRA__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "xterra/msg/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace xterra
{

namespace msg
{

namespace builder
{

class Init_SensorData_rpy
{
public:
  explicit Init_SensorData_rpy(::xterra::msg::SensorData & msg)
  : msg_(msg)
  {}
  ::xterra::msg::SensorData rpy(::xterra::msg::SensorData::_rpy_type arg)
  {
    msg_.rpy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::xterra::msg::SensorData msg_;
};

class Init_SensorData_accel
{
public:
  explicit Init_SensorData_accel(::xterra::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_rpy accel(::xterra::msg::SensorData::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_SensorData_rpy(msg_);
  }

private:
  ::xterra::msg::SensorData msg_;
};

class Init_SensorData_gyro
{
public:
  explicit Init_SensorData_gyro(::xterra::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_accel gyro(::xterra::msg::SensorData::_gyro_type arg)
  {
    msg_.gyro = std::move(arg);
    return Init_SensorData_accel(msg_);
  }

private:
  ::xterra::msg::SensorData msg_;
};

class Init_SensorData_quat
{
public:
  explicit Init_SensorData_quat(::xterra::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_gyro quat(::xterra::msg::SensorData::_quat_type arg)
  {
    msg_.quat = std::move(arg);
    return Init_SensorData_gyro(msg_);
  }

private:
  ::xterra::msg::SensorData msg_;
};

class Init_SensorData_tau_est
{
public:
  explicit Init_SensorData_tau_est(::xterra::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_quat tau_est(::xterra::msg::SensorData::_tau_est_type arg)
  {
    msg_.tau_est = std::move(arg);
    return Init_SensorData_quat(msg_);
  }

private:
  ::xterra::msg::SensorData msg_;
};

class Init_SensorData_d_current
{
public:
  explicit Init_SensorData_d_current(::xterra::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_tau_est d_current(::xterra::msg::SensorData::_d_current_type arg)
  {
    msg_.d_current = std::move(arg);
    return Init_SensorData_tau_est(msg_);
  }

private:
  ::xterra::msg::SensorData msg_;
};

class Init_SensorData_q_current
{
public:
  explicit Init_SensorData_q_current(::xterra::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_d_current q_current(::xterra::msg::SensorData::_q_current_type arg)
  {
    msg_.q_current = std::move(arg);
    return Init_SensorData_d_current(msg_);
  }

private:
  ::xterra::msg::SensorData msg_;
};

class Init_SensorData_ddq
{
public:
  explicit Init_SensorData_ddq(::xterra::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_q_current ddq(::xterra::msg::SensorData::_ddq_type arg)
  {
    msg_.ddq = std::move(arg);
    return Init_SensorData_q_current(msg_);
  }

private:
  ::xterra::msg::SensorData msg_;
};

class Init_SensorData_dq
{
public:
  explicit Init_SensorData_dq(::xterra::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_ddq dq(::xterra::msg::SensorData::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_SensorData_ddq(msg_);
  }

private:
  ::xterra::msg::SensorData msg_;
};

class Init_SensorData_q
{
public:
  Init_SensorData_q()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_dq q(::xterra::msg::SensorData::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_SensorData_dq(msg_);
  }

private:
  ::xterra::msg::SensorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::xterra::msg::SensorData>()
{
  return xterra::msg::builder::Init_SensorData_q();
}

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
