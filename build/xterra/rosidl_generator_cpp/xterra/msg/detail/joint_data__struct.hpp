// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xterra:msg/JointData.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__JOINT_DATA__STRUCT_HPP_
#define XTERRA__MSG__DETAIL__JOINT_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xterra__msg__JointData __attribute__((deprecated))
#else
# define DEPRECATED__xterra__msg__JointData __declspec(deprecated)
#endif

namespace xterra
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointData_
{
  using Type = JointData_<ContainerAllocator>;

  explicit JointData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 12>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->dq.begin(), this->dq.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->kp.begin(), this->kp.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->kd.begin(), this->kd.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->tau.begin(), this->tau.end(), 0.0f);
    }
  }

  explicit JointData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_alloc),
    dq(_alloc),
    kp(_alloc),
    kd(_alloc),
    tau(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 12>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->dq.begin(), this->dq.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->kp.begin(), this->kp.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->kd.begin(), this->kd.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->tau.begin(), this->tau.end(), 0.0f);
    }
  }

  // field types and members
  using _q_type =
    std::array<float, 12>;
  _q_type q;
  using _dq_type =
    std::array<float, 12>;
  _dq_type dq;
  using _kp_type =
    std::array<float, 12>;
  _kp_type kp;
  using _kd_type =
    std::array<float, 12>;
  _kd_type kd;
  using _tau_type =
    std::array<float, 12>;
  _tau_type tau;

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
  Type & set__kp(
    const std::array<float, 12> & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const std::array<float, 12> & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__tau(
    const std::array<float, 12> & _arg)
  {
    this->tau = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xterra::msg::JointData_<ContainerAllocator> *;
  using ConstRawPtr =
    const xterra::msg::JointData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xterra::msg::JointData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xterra::msg::JointData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xterra::msg::JointData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::JointData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xterra::msg::JointData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::JointData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xterra::msg::JointData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xterra::msg::JointData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xterra__msg__JointData
    std::shared_ptr<xterra::msg::JointData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xterra__msg__JointData
    std::shared_ptr<xterra::msg::JointData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointData_ & other) const
  {
    if (this->q != other.q) {
      return false;
    }
    if (this->dq != other.dq) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->tau != other.tau) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointData_

// alias to use template instance with default allocator
using JointData =
  xterra::msg::JointData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__JOINT_DATA__STRUCT_HPP_
