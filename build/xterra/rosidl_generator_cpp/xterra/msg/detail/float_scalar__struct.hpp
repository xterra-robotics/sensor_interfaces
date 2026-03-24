// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xterra:msg/FloatScalar.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__FLOAT_SCALAR__STRUCT_HPP_
#define XTERRA__MSG__DETAIL__FLOAT_SCALAR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xterra__msg__FloatScalar __attribute__((deprecated))
#else
# define DEPRECATED__xterra__msg__FloatScalar __declspec(deprecated)
#endif

namespace xterra
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FloatScalar_
{
  using Type = FloatScalar_<ContainerAllocator>;

  explicit FloatScalar_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0.0f;
    }
  }

  explicit FloatScalar_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = 0.0f;
    }
  }

  // field types and members
  using _data_type =
    float;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const float & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xterra::msg::FloatScalar_<ContainerAllocator> *;
  using ConstRawPtr =
    const xterra::msg::FloatScalar_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xterra::msg::FloatScalar_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xterra::msg::FloatScalar_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xterra::msg::FloatScalar_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::FloatScalar_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xterra::msg::FloatScalar_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::FloatScalar_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xterra::msg::FloatScalar_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xterra::msg::FloatScalar_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xterra__msg__FloatScalar
    std::shared_ptr<xterra::msg::FloatScalar_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xterra__msg__FloatScalar
    std::shared_ptr<xterra::msg::FloatScalar_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FloatScalar_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const FloatScalar_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FloatScalar_

// alias to use template instance with default allocator
using FloatScalar =
  xterra::msg::FloatScalar_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__FLOAT_SCALAR__STRUCT_HPP_
