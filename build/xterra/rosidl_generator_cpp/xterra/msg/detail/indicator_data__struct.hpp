// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xterra:msg/IndicatorData.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__INDICATOR_DATA__STRUCT_HPP_
#define XTERRA__MSG__DETAIL__INDICATOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xterra__msg__IndicatorData __attribute__((deprecated))
#else
# define DEPRECATED__xterra__msg__IndicatorData __declspec(deprecated)
#endif

namespace xterra
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IndicatorData_
{
  using Type = IndicatorData_<ContainerAllocator>;

  explicit IndicatorData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led1 = false;
      this->led2 = false;
      this->led3 = false;
      this->buzzer = false;
    }
  }

  explicit IndicatorData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led1 = false;
      this->led2 = false;
      this->led3 = false;
      this->buzzer = false;
    }
  }

  // field types and members
  using _led1_type =
    bool;
  _led1_type led1;
  using _led2_type =
    bool;
  _led2_type led2;
  using _led3_type =
    bool;
  _led3_type led3;
  using _buzzer_type =
    bool;
  _buzzer_type buzzer;

  // setters for named parameter idiom
  Type & set__led1(
    const bool & _arg)
  {
    this->led1 = _arg;
    return *this;
  }
  Type & set__led2(
    const bool & _arg)
  {
    this->led2 = _arg;
    return *this;
  }
  Type & set__led3(
    const bool & _arg)
  {
    this->led3 = _arg;
    return *this;
  }
  Type & set__buzzer(
    const bool & _arg)
  {
    this->buzzer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xterra::msg::IndicatorData_<ContainerAllocator> *;
  using ConstRawPtr =
    const xterra::msg::IndicatorData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xterra::msg::IndicatorData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xterra::msg::IndicatorData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xterra::msg::IndicatorData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::IndicatorData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xterra::msg::IndicatorData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::IndicatorData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xterra::msg::IndicatorData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xterra::msg::IndicatorData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xterra__msg__IndicatorData
    std::shared_ptr<xterra::msg::IndicatorData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xterra__msg__IndicatorData
    std::shared_ptr<xterra::msg::IndicatorData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IndicatorData_ & other) const
  {
    if (this->led1 != other.led1) {
      return false;
    }
    if (this->led2 != other.led2) {
      return false;
    }
    if (this->led3 != other.led3) {
      return false;
    }
    if (this->buzzer != other.buzzer) {
      return false;
    }
    return true;
  }
  bool operator!=(const IndicatorData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IndicatorData_

// alias to use template instance with default allocator
using IndicatorData =
  xterra::msg::IndicatorData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__INDICATOR_DATA__STRUCT_HPP_
