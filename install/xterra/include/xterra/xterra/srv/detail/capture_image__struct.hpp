// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from xterra:srv/CaptureImage.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__SRV__DETAIL__CAPTURE_IMAGE__STRUCT_HPP_
#define XTERRA__SRV__DETAIL__CAPTURE_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__xterra__srv__CaptureImage_Request __attribute__((deprecated))
#else
# define DEPRECATED__xterra__srv__CaptureImage_Request __declspec(deprecated)
#endif

namespace xterra
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureImage_Request_
{
  using Type = CaptureImage_Request_<ContainerAllocator>;

  explicit CaptureImage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_name = "";
      this->image_type = "";
    }
  }

  explicit CaptureImage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_name(_alloc),
    image_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_name = "";
      this->image_type = "";
    }
  }

  // field types and members
  using _camera_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _camera_name_type camera_name;
  using _image_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _image_type_type image_type;

  // setters for named parameter idiom
  Type & set__camera_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->camera_name = _arg;
    return *this;
  }
  Type & set__image_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->image_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xterra::srv::CaptureImage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const xterra::srv::CaptureImage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xterra::srv::CaptureImage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xterra::srv::CaptureImage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xterra::srv::CaptureImage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xterra::srv::CaptureImage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xterra::srv::CaptureImage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xterra::srv::CaptureImage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xterra::srv::CaptureImage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xterra::srv::CaptureImage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xterra__srv__CaptureImage_Request
    std::shared_ptr<xterra::srv::CaptureImage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xterra__srv__CaptureImage_Request
    std::shared_ptr<xterra::srv::CaptureImage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureImage_Request_ & other) const
  {
    if (this->camera_name != other.camera_name) {
      return false;
    }
    if (this->image_type != other.image_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureImage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureImage_Request_

// alias to use template instance with default allocator
using CaptureImage_Request =
  xterra::srv::CaptureImage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xterra


#ifndef _WIN32
# define DEPRECATED__xterra__srv__CaptureImage_Response __attribute__((deprecated))
#else
# define DEPRECATED__xterra__srv__CaptureImage_Response __declspec(deprecated)
#endif

namespace xterra
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureImage_Response_
{
  using Type = CaptureImage_Response_<ContainerAllocator>;

  explicit CaptureImage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reply = false;
      this->message = "";
      this->saved_path = "";
    }
  }

  explicit CaptureImage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    saved_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reply = false;
      this->message = "";
      this->saved_path = "";
    }
  }

  // field types and members
  using _reply_type =
    bool;
  _reply_type reply;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _saved_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _saved_path_type saved_path;

  // setters for named parameter idiom
  Type & set__reply(
    const bool & _arg)
  {
    this->reply = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__saved_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->saved_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    xterra::srv::CaptureImage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const xterra::srv::CaptureImage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<xterra::srv::CaptureImage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<xterra::srv::CaptureImage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      xterra::srv::CaptureImage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<xterra::srv::CaptureImage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      xterra::srv::CaptureImage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<xterra::srv::CaptureImage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<xterra::srv::CaptureImage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<xterra::srv::CaptureImage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__xterra__srv__CaptureImage_Response
    std::shared_ptr<xterra::srv::CaptureImage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__xterra__srv__CaptureImage_Response
    std::shared_ptr<xterra::srv::CaptureImage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureImage_Response_ & other) const
  {
    if (this->reply != other.reply) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->saved_path != other.saved_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureImage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureImage_Response_

// alias to use template instance with default allocator
using CaptureImage_Response =
  xterra::srv::CaptureImage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace xterra

namespace xterra
{

namespace srv
{

struct CaptureImage
{
  using Request = xterra::srv::CaptureImage_Request;
  using Response = xterra::srv::CaptureImage_Response;
};

}  // namespace srv

}  // namespace xterra

#endif  // XTERRA__SRV__DETAIL__CAPTURE_IMAGE__STRUCT_HPP_
