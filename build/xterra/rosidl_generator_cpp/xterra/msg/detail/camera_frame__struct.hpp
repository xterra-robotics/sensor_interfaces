// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xterra:msg/CameraFrame.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__CAMERA_FRAME__STRUCT_HPP_
#define XTERRA__MSG__DETAIL__CAMERA_FRAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xterra__msg__CameraFrame __attribute__((deprecated))
#else
# define DEPRECATED__xterra__msg__CameraFrame __declspec(deprecated)
#endif

namespace xterra
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraFrame_
{
  using Type = CameraFrame_<ContainerAllocator>;

  explicit CameraFrame_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 2764800>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      this->width = 0;
      this->height = 0;
      this->channels = 0;
    }
  }

  explicit CameraFrame_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 2764800>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      this->width = 0;
      this->height = 0;
      this->channels = 0;
    }
  }

  // field types and members
  using _data_type =
    std::array<uint8_t, 2764800>;
  _data_type data;
  using _width_type =
    uint16_t;
  _width_type width;
  using _height_type =
    uint16_t;
  _height_type height;
  using _channels_type =
    uint8_t;
  _channels_type channels;

  // setters for named parameter idiom
  Type & set__data(
    const std::array<uint8_t, 2764800> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__width(
    const uint16_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint16_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__channels(
    const uint8_t & _arg)
  {
    this->channels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xterra::msg::CameraFrame_<ContainerAllocator> *;
  using ConstRawPtr =
    const xterra::msg::CameraFrame_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xterra::msg::CameraFrame_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xterra::msg::CameraFrame_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xterra::msg::CameraFrame_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::CameraFrame_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xterra::msg::CameraFrame_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xterra::msg::CameraFrame_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xterra::msg::CameraFrame_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xterra::msg::CameraFrame_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xterra__msg__CameraFrame
    std::shared_ptr<xterra::msg::CameraFrame_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xterra__msg__CameraFrame
    std::shared_ptr<xterra::msg::CameraFrame_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraFrame_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->channels != other.channels) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraFrame_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraFrame_

// alias to use template instance with default allocator
using CameraFrame =
  xterra::msg::CameraFrame_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace xterra

#endif  // XTERRA__MSG__DETAIL__CAMERA_FRAME__STRUCT_HPP_
