// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xterra:msg/CameraFrame.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xterra/msg/detail/camera_frame__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace xterra
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CameraFrame_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xterra::msg::CameraFrame(_init);
}

void CameraFrame_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xterra::msg::CameraFrame *>(message_memory);
  typed_message->~CameraFrame();
}

size_t size_function__CameraFrame__data(const void * untyped_member)
{
  (void)untyped_member;
  return 2764800;
}

const void * get_const_function__CameraFrame__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 2764800> *>(untyped_member);
  return &member[index];
}

void * get_function__CameraFrame__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 2764800> *>(untyped_member);
  return &member[index];
}

void fetch_function__CameraFrame__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__CameraFrame__data(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__CameraFrame__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__CameraFrame__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CameraFrame_message_member_array[4] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2764800,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::CameraFrame, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__CameraFrame__data,  // size() function pointer
    get_const_function__CameraFrame__data,  // get_const(index) function pointer
    get_function__CameraFrame__data,  // get(index) function pointer
    fetch_function__CameraFrame__data,  // fetch(index, &value) function pointer
    assign_function__CameraFrame__data,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::CameraFrame, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::CameraFrame, height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "channels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::CameraFrame, channels),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CameraFrame_message_members = {
  "xterra::msg",  // message namespace
  "CameraFrame",  // message name
  4,  // number of fields
  sizeof(xterra::msg::CameraFrame),
  CameraFrame_message_member_array,  // message members
  CameraFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  CameraFrame_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CameraFrame_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CameraFrame_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace xterra


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<xterra::msg::CameraFrame>()
{
  return &::xterra::msg::rosidl_typesupport_introspection_cpp::CameraFrame_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xterra, msg, CameraFrame)() {
  return &::xterra::msg::rosidl_typesupport_introspection_cpp::CameraFrame_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
