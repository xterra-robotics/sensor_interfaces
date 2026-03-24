// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xterra:msg/JoyData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xterra/msg/detail/joy_data__struct.hpp"
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

void JoyData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xterra::msg::JoyData(_init);
}

void JoyData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xterra::msg::JoyData *>(message_memory);
  typed_message->~JoyData();
}

size_t size_function__JoyData__axes(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__JoyData__axes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__JoyData__axes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__JoyData__axes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JoyData__axes(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JoyData__axes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JoyData__axes(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__JoyData__buttons(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__JoyData__buttons(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__JoyData__buttons(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__JoyData__buttons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__JoyData__buttons(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__JoyData__buttons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__JoyData__buttons(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JoyData_message_member_array[3] = {
  {
    "priority",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::JoyData, priority),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "axes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::JoyData, axes),  // bytes offset in struct
    nullptr,  // default value
    size_function__JoyData__axes,  // size() function pointer
    get_const_function__JoyData__axes,  // get_const(index) function pointer
    get_function__JoyData__axes,  // get(index) function pointer
    fetch_function__JoyData__axes,  // fetch(index, &value) function pointer
    assign_function__JoyData__axes,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "buttons",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::JoyData, buttons),  // bytes offset in struct
    nullptr,  // default value
    size_function__JoyData__buttons,  // size() function pointer
    get_const_function__JoyData__buttons,  // get_const(index) function pointer
    get_function__JoyData__buttons,  // get(index) function pointer
    fetch_function__JoyData__buttons,  // fetch(index, &value) function pointer
    assign_function__JoyData__buttons,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JoyData_message_members = {
  "xterra::msg",  // message namespace
  "JoyData",  // message name
  3,  // number of fields
  sizeof(xterra::msg::JoyData),
  JoyData_message_member_array,  // message members
  JoyData_init_function,  // function to initialize message memory (memory has to be allocated)
  JoyData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JoyData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JoyData_message_members,
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
get_message_type_support_handle<xterra::msg::JoyData>()
{
  return &::xterra::msg::rosidl_typesupport_introspection_cpp::JoyData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xterra, msg, JoyData)() {
  return &::xterra::msg::rosidl_typesupport_introspection_cpp::JoyData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
