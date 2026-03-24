// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xterra:msg/Quaternion.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__QUATERNION__STRUCT_HPP_
#define XTERRA__MSG__DETAIL__QUATERNION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xterra__msg__Quaternion __attribute__((deprecated))
#else
# define DEPRECATED__xterra__msg__Quaternion __declspec(deprecated)
#endif

namespace xterra
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Quaternion_
{
  using Type = Quaternion_<ContainerAllocator>;

  explicit Quaternion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->w = 0.0f;
    }
  }

  explicit Quaternion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->w = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _w_type =
    float;
  _w_type w;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__w(
    const float & _arg)
  {
    this->w = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xterra::msg::Quaternion_<ContainerAllocator> *;
  using ConstRawPtr =
    const xterra::msg::Quaternion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xterra::msg::Quaternion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xterra::msg::Quaternion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xterra::msg::Quaternion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::Quaternion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xterra::msg::Quaternion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::Quaternion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xterra::msg::Quaternion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xterra::msg::Quaternion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xterra__msg__Quaternion
    std::shared_ptr<xterra::msg::Quaternion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xterra__msg__Quaternion
    std::shared_ptr<xterra::msg::Quaternion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Quaternion_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    return true;
  }
  bool operator!=(const Quaternion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Quaternion_

// alias to use template instance with default allocator
using Quaternion =
  xterra::msg::Quaternion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__QUATERNION__STRUCT_HPP_
