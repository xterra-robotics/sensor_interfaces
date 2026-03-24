// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xterra:msg/RGBFrame.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__RGB_FRAME__STRUCT_HPP_
#define XTERRA__MSG__DETAIL__RGB_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xterra__msg__RGBFrame __attribute__((deprecated))
#else
# define DEPRECATED__xterra__msg__RGBFrame __declspec(deprecated)
#endif

namespace xterra
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RGBFrame_
{
  using Type = RGBFrame_<ContainerAllocator>;

  explicit RGBFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->priority = 0;
      std::fill<typename std::array<float, 6>::iterator, float>(this->axes.begin(), this->axes.end(), 0.0f);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->buttons.begin(), this->buttons.end(), 0);
    }
  }

  explicit RGBFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : axes(_alloc),
    buttons(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->priority = 0;
      std::fill<typename std::array<float, 6>::iterator, float>(this->axes.begin(), this->axes.end(), 0.0f);
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->buttons.begin(), this->buttons.end(), 0);
    }
  }

  // field types and members
  using _priority_type =
    uint8_t;
  _priority_type priority;
  using _axes_type =
    std::array<float, 6>;
  _axes_type axes;
  using _buttons_type =
    std::array<uint8_t, 12>;
  _buttons_type buttons;

  // setters for named parameter idiom
  Type & set__priority(
    const uint8_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__axes(
    const std::array<float, 6> & _arg)
  {
    this->axes = _arg;
    return *this;
  }
  Type & set__buttons(
    const std::array<uint8_t, 12> & _arg)
  {
    this->buttons = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xterra::msg::RGBFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const xterra::msg::RGBFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xterra::msg::RGBFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xterra::msg::RGBFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xterra::msg::RGBFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::RGBFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xterra::msg::RGBFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::RGBFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xterra::msg::RGBFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xterra::msg::RGBFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xterra__msg__RGBFrame
    std::shared_ptr<xterra::msg::RGBFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xterra__msg__RGBFrame
    std::shared_ptr<xterra::msg::RGBFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RGBFrame_ & other) const
  {
    if (this->priority != other.priority) {
      return false;
    }
    if (this->axes != other.axes) {
      return false;
    }
    if (this->buttons != other.buttons) {
      return false;
    }
    return true;
  }
  bool operator!=(const RGBFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RGBFrame_

// alias to use template instance with default allocator
using RGBFrame =
  xterra::msg::RGBFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__RGB_FRAME__STRUCT_HPP_
