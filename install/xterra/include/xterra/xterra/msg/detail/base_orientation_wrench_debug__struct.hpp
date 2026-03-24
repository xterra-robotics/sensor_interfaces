// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xterra:msg/BaseOrientationWrenchDebug.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__BASE_ORIENTATION_WRENCH_DEBUG__STRUCT_HPP_
#define XTERRA__MSG__DETAIL__BASE_ORIENTATION_WRENCH_DEBUG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xterra__msg__BaseOrientationWrenchDebug __attribute__((deprecated))
#else
# define DEPRECATED__xterra__msg__BaseOrientationWrenchDebug __declspec(deprecated)
#endif

namespace xterra
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BaseOrientationWrenchDebug_
{
  using Type = BaseOrientationWrenchDebug_<ContainerAllocator>;

  explicit BaseOrientationWrenchDebug_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->base_wrench_base_tra.begin(), this->base_wrench_base_tra.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->base_wrench_base_ori.begin(), this->base_wrench_base_ori.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->base_wrench_legs.begin(), this->base_wrench_legs.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->base_wrench_full.begin(), this->base_wrench_full.end(), 0.0f);
    }
  }

  explicit BaseOrientationWrenchDebug_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_wrench_base_tra(_alloc),
    base_wrench_base_ori(_alloc),
    base_wrench_legs(_alloc),
    base_wrench_full(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->base_wrench_base_tra.begin(), this->base_wrench_base_tra.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->base_wrench_base_ori.begin(), this->base_wrench_base_ori.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->base_wrench_legs.begin(), this->base_wrench_legs.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->base_wrench_full.begin(), this->base_wrench_full.end(), 0.0f);
    }
  }

  // field types and members
  using _base_wrench_base_tra_type =
    std::array<float, 3>;
  _base_wrench_base_tra_type base_wrench_base_tra;
  using _base_wrench_base_ori_type =
    std::array<float, 3>;
  _base_wrench_base_ori_type base_wrench_base_ori;
  using _base_wrench_legs_type =
    std::array<float, 3>;
  _base_wrench_legs_type base_wrench_legs;
  using _base_wrench_full_type =
    std::array<float, 3>;
  _base_wrench_full_type base_wrench_full;

  // setters for named parameter idiom
  Type & set__base_wrench_base_tra(
    const std::array<float, 3> & _arg)
  {
    this->base_wrench_base_tra = _arg;
    return *this;
  }
  Type & set__base_wrench_base_ori(
    const std::array<float, 3> & _arg)
  {
    this->base_wrench_base_ori = _arg;
    return *this;
  }
  Type & set__base_wrench_legs(
    const std::array<float, 3> & _arg)
  {
    this->base_wrench_legs = _arg;
    return *this;
  }
  Type & set__base_wrench_full(
    const std::array<float, 3> & _arg)
  {
    this->base_wrench_full = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xterra::msg::BaseOrientationWrenchDebug_<ContainerAllocator> *;
  using ConstRawPtr =
    const xterra::msg::BaseOrientationWrenchDebug_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xterra::msg::BaseOrientationWrenchDebug_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xterra::msg::BaseOrientationWrenchDebug_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xterra::msg::BaseOrientationWrenchDebug_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::BaseOrientationWrenchDebug_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xterra::msg::BaseOrientationWrenchDebug_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::BaseOrientationWrenchDebug_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xterra::msg::BaseOrientationWrenchDebug_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xterra::msg::BaseOrientationWrenchDebug_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xterra__msg__BaseOrientationWrenchDebug
    std::shared_ptr<xterra::msg::BaseOrientationWrenchDebug_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xterra__msg__BaseOrientationWrenchDebug
    std::shared_ptr<xterra::msg::BaseOrientationWrenchDebug_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BaseOrientationWrenchDebug_ & other) const
  {
    if (this->base_wrench_base_tra != other.base_wrench_base_tra) {
      return false;
    }
    if (this->base_wrench_base_ori != other.base_wrench_base_ori) {
      return false;
    }
    if (this->base_wrench_legs != other.base_wrench_legs) {
      return false;
    }
    if (this->base_wrench_full != other.base_wrench_full) {
      return false;
    }
    return true;
  }
  bool operator!=(const BaseOrientationWrenchDebug_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BaseOrientationWrenchDebug_

// alias to use template instance with default allocator
using BaseOrientationWrenchDebug =
  xterra::msg::BaseOrientationWrenchDebug_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__BASE_ORIENTATION_WRENCH_DEBUG__STRUCT_HPP_
