// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xterra:msg/QuadLog.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__QUAD_LOG__STRUCT_HPP_
#define XTERRA__MSG__DETAIL__QUAD_LOG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'base_position'
// Member 'linear_velocity'
// Member 'angular_velocity'
// Member 'plane_normal'
#include "xterra/msg/detail/point3_d__struct.hpp"
// Member 'base_orientation'
#include "xterra/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__xterra__msg__QuadLog __attribute__((deprecated))
#else
# define DEPRECATED__xterra__msg__QuadLog __declspec(deprecated)
#endif

namespace xterra
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QuadLog_
{
  using Type = QuadLog_<ContainerAllocator>;

  explicit QuadLog_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_position(_init),
    base_orientation(_init),
    linear_velocity(_init),
    angular_velocity(_init),
    plane_normal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->contact_state.begin(), this->contact_state.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->contact_prob.begin(), this->contact_prob.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->contact_force.begin(), this->contact_force.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->base_wrench.begin(), this->base_wrench.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->joint_position.begin(), this->joint_position.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->joint_velocity.begin(), this->joint_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->joint_torque.begin(), this->joint_torque.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->foot_position.begin(), this->foot_position.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->foot_velocity.begin(), this->foot_velocity.end(), 0.0f);
    }
  }

  explicit QuadLog_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : contact_state(_alloc),
    contact_prob(_alloc),
    contact_force(_alloc),
    base_position(_alloc, _init),
    base_orientation(_alloc, _init),
    linear_velocity(_alloc, _init),
    angular_velocity(_alloc, _init),
    plane_normal(_alloc, _init),
    base_wrench(_alloc),
    joint_position(_alloc),
    joint_velocity(_alloc),
    joint_torque(_alloc),
    foot_position(_alloc),
    foot_velocity(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->contact_state.begin(), this->contact_state.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->contact_prob.begin(), this->contact_prob.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->contact_force.begin(), this->contact_force.end(), 0.0f);
      std::fill<typename std::array<float, 6>::iterator, float>(this->base_wrench.begin(), this->base_wrench.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->joint_position.begin(), this->joint_position.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->joint_velocity.begin(), this->joint_velocity.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->joint_torque.begin(), this->joint_torque.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->foot_position.begin(), this->foot_position.end(), 0.0f);
      std::fill<typename std::array<float, 12>::iterator, float>(this->foot_velocity.begin(), this->foot_velocity.end(), 0.0f);
    }
  }

  // field types and members
  using _contact_state_type =
    std::array<float, 4>;
  _contact_state_type contact_state;
  using _contact_prob_type =
    std::array<float, 4>;
  _contact_prob_type contact_prob;
  using _contact_force_type =
    std::array<float, 12>;
  _contact_force_type contact_force;
  using _base_position_type =
    xterra::msg::Point3D_<ContainerAllocator>;
  _base_position_type base_position;
  using _base_orientation_type =
    xterra::msg::Quaternion_<ContainerAllocator>;
  _base_orientation_type base_orientation;
  using _linear_velocity_type =
    xterra::msg::Point3D_<ContainerAllocator>;
  _linear_velocity_type linear_velocity;
  using _angular_velocity_type =
    xterra::msg::Point3D_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _plane_normal_type =
    xterra::msg::Point3D_<ContainerAllocator>;
  _plane_normal_type plane_normal;
  using _base_wrench_type =
    std::array<float, 6>;
  _base_wrench_type base_wrench;
  using _joint_position_type =
    std::array<float, 12>;
  _joint_position_type joint_position;
  using _joint_velocity_type =
    std::array<float, 12>;
  _joint_velocity_type joint_velocity;
  using _joint_torque_type =
    std::array<float, 12>;
  _joint_torque_type joint_torque;
  using _foot_position_type =
    std::array<float, 12>;
  _foot_position_type foot_position;
  using _foot_velocity_type =
    std::array<float, 12>;
  _foot_velocity_type foot_velocity;

  // setters for named parameter idiom
  Type & set__contact_state(
    const std::array<float, 4> & _arg)
  {
    this->contact_state = _arg;
    return *this;
  }
  Type & set__contact_prob(
    const std::array<float, 4> & _arg)
  {
    this->contact_prob = _arg;
    return *this;
  }
  Type & set__contact_force(
    const std::array<float, 12> & _arg)
  {
    this->contact_force = _arg;
    return *this;
  }
  Type & set__base_position(
    const xterra::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->base_position = _arg;
    return *this;
  }
  Type & set__base_orientation(
    const xterra::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->base_orientation = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const xterra::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->linear_velocity = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const xterra::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__plane_normal(
    const xterra::msg::Point3D_<ContainerAllocator> & _arg)
  {
    this->plane_normal = _arg;
    return *this;
  }
  Type & set__base_wrench(
    const std::array<float, 6> & _arg)
  {
    this->base_wrench = _arg;
    return *this;
  }
  Type & set__joint_position(
    const std::array<float, 12> & _arg)
  {
    this->joint_position = _arg;
    return *this;
  }
  Type & set__joint_velocity(
    const std::array<float, 12> & _arg)
  {
    this->joint_velocity = _arg;
    return *this;
  }
  Type & set__joint_torque(
    const std::array<float, 12> & _arg)
  {
    this->joint_torque = _arg;
    return *this;
  }
  Type & set__foot_position(
    const std::array<float, 12> & _arg)
  {
    this->foot_position = _arg;
    return *this;
  }
  Type & set__foot_velocity(
    const std::array<float, 12> & _arg)
  {
    this->foot_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xterra::msg::QuadLog_<ContainerAllocator> *;
  using ConstRawPtr =
    const xterra::msg::QuadLog_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xterra::msg::QuadLog_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xterra::msg::QuadLog_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xterra::msg::QuadLog_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::QuadLog_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xterra::msg::QuadLog_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::QuadLog_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xterra::msg::QuadLog_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xterra::msg::QuadLog_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xterra__msg__QuadLog
    std::shared_ptr<xterra::msg::QuadLog_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xterra__msg__QuadLog
    std::shared_ptr<xterra::msg::QuadLog_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QuadLog_ & other) const
  {
    if (this->contact_state != other.contact_state) {
      return false;
    }
    if (this->contact_prob != other.contact_prob) {
      return false;
    }
    if (this->contact_force != other.contact_force) {
      return false;
    }
    if (this->base_position != other.base_position) {
      return false;
    }
    if (this->base_orientation != other.base_orientation) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->plane_normal != other.plane_normal) {
      return false;
    }
    if (this->base_wrench != other.base_wrench) {
      return false;
    }
    if (this->joint_position != other.joint_position) {
      return false;
    }
    if (this->joint_velocity != other.joint_velocity) {
      return false;
    }
    if (this->joint_torque != other.joint_torque) {
      return false;
    }
    if (this->foot_position != other.foot_position) {
      return false;
    }
    if (this->foot_velocity != other.foot_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const QuadLog_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QuadLog_

// alias to use template instance with default allocator
using QuadLog =
  xterra::msg::QuadLog_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__QUAD_LOG__STRUCT_HPP_
