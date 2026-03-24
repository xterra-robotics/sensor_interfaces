// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xterra:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
#define XTERRA__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xterra__msg__SensorData __attribute__((deprecated))
#else
# define DEPRECATED__xterra__msg__SensorData __declspec(deprecated)
#endif

namespace xterra
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorData_
{
  using Type = SensorData_<ContainerAllocator>;

  explicit SensorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 12>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->dq.begin(), this->dq.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->ddq.begin(), this->ddq.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->q_current.begin(), this->q_current.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->d_current.begin(), this->d_current.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->tau_est.begin(), this->tau_est.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->quat.begin(), this->quat.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro.begin(), this->gyro.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accel.begin(), this->accel.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->rpy.begin(), this->rpy.end(), 0.0f);
    }
  }

  explicit SensorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_alloc),
    dq(_alloc),
    ddq(_alloc),
    q_current(_alloc),
    d_current(_alloc),
    tau_est(_alloc),
    quat(_alloc),
    gyro(_alloc),
    accel(_alloc),
    rpy(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 12>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->dq.begin(), this->dq.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->ddq.begin(), this->ddq.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->q_current.begin(), this->q_current.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->d_current.begin(), this->d_current.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->tau_est.begin(), this->tau_est.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->quat.begin(), this->quat.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyro.begin(), this->gyro.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accel.begin(), this->accel.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->rpy.begin(), this->rpy.end(), 0.0f);
    }
  }

  // field types and members
  using _q_type =
    std::array<float, 12>;
  _q_type q;
  using _dq_type =
    std::array<float, 12>;
  _dq_type dq;
  using _ddq_type =
    std::array<float, 12>;
  _ddq_type ddq;
  using _q_current_type =
    std::array<float, 12>;
  _q_current_type q_current;
  using _d_current_type =
    std::array<float, 12>;
  _d_current_type d_current;
  using _tau_est_type =
    std::array<float, 12>;
  _tau_est_type tau_est;
  using _quat_type =
    std::array<float, 4>;
  _quat_type quat;
  using _gyro_type =
    std::array<float, 3>;
  _gyro_type gyro;
  using _accel_type =
    std::array<float, 3>;
  _accel_type accel;
  using _rpy_type =
    std::array<float, 3>;
  _rpy_type rpy;

  // setters for named parameter idiom
  Type & set__q(
    const std::array<float, 12> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__dq(
    const std::array<float, 12> & _arg)
  {
    this->dq = _arg;
    return *this;
  }
  Type & set__ddq(
    const std::array<float, 12> & _arg)
  {
    this->ddq = _arg;
    return *this;
  }
  Type & set__q_current(
    const std::array<float, 12> & _arg)
  {
    this->q_current = _arg;
    return *this;
  }
  Type & set__d_current(
    const std::array<float, 12> & _arg)
  {
    this->d_current = _arg;
    return *this;
  }
  Type & set__tau_est(
    const std::array<float, 12> & _arg)
  {
    this->tau_est = _arg;
    return *this;
  }
  Type & set__quat(
    const std::array<float, 4> & _arg)
  {
    this->quat = _arg;
    return *this;
  }
  Type & set__gyro(
    const std::array<float, 3> & _arg)
  {
    this->gyro = _arg;
    return *this;
  }
  Type & set__accel(
    const std::array<float, 3> & _arg)
  {
    this->accel = _arg;
    return *this;
  }
  Type & set__rpy(
    const std::array<float, 3> & _arg)
  {
    this->rpy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xterra::msg::SensorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const xterra::msg::SensorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xterra::msg::SensorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xterra::msg::SensorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xterra::msg::SensorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::SensorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xterra::msg::SensorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::SensorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xterra::msg::SensorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xterra::msg::SensorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xterra__msg__SensorData
    std::shared_ptr<xterra::msg::SensorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xterra__msg__SensorData
    std::shared_ptr<xterra::msg::SensorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorData_ & other) const
  {
    if (this->q != other.q) {
      return false;
    }
    if (this->dq != other.dq) {
      return false;
    }
    if (this->ddq != other.ddq) {
      return false;
    }
    if (this->q_current != other.q_current) {
      return false;
    }
    if (this->d_current != other.d_current) {
      return false;
    }
    if (this->tau_est != other.tau_est) {
      return false;
    }
    if (this->quat != other.quat) {
      return false;
    }
    if (this->gyro != other.gyro) {
      return false;
    }
    if (this->accel != other.accel) {
      return false;
    }
    if (this->rpy != other.rpy) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorData_

// alias to use template instance with default allocator
using SensorData =
  xterra::msg::SensorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__SENSOR_DATA__STRUCT_HPP_
