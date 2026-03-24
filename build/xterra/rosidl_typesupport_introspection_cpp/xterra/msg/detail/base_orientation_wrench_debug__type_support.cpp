// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xterra:msg/BaseOrientationWrenchDebug.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xterra/msg/detail/base_orientation_wrench_debug__struct.hpp"
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

void BaseOrientationWrenchDebug_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xterra::msg::BaseOrientationWrenchDebug(_init);
}

void BaseOrientationWrenchDebug_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xterra::msg::BaseOrientationWrenchDebug *>(message_memory);
  typed_message->~BaseOrientationWrenchDebug();
}

size_t size_function__BaseOrientationWrenchDebug__base_wrench_base_tra(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__BaseOrientationWrenchDebug__base_wrench_base_tra(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__BaseOrientationWrenchDebug__base_wrench_base_tra(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__BaseOrientationWrenchDebug__base_wrench_base_tra(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__BaseOrientationWrenchDebug__base_wrench_base_tra(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__BaseOrientationWrenchDebug__base_wrench_base_tra(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__BaseOrientationWrenchDebug__base_wrench_base_tra(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__BaseOrientationWrenchDebug__base_wrench_base_ori(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__BaseOrientationWrenchDebug__base_wrench_base_ori(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__BaseOrientationWrenchDebug__base_wrench_base_ori(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__BaseOrientationWrenchDebug__base_wrench_base_ori(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__BaseOrientationWrenchDebug__base_wrench_base_ori(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__BaseOrientationWrenchDebug__base_wrench_base_ori(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__BaseOrientationWrenchDebug__base_wrench_base_ori(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__BaseOrientationWrenchDebug__base_wrench_legs(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__BaseOrientationWrenchDebug__base_wrench_legs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__BaseOrientationWrenchDebug__base_wrench_legs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__BaseOrientationWrenchDebug__base_wrench_legs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__BaseOrientationWrenchDebug__base_wrench_legs(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__BaseOrientationWrenchDebug__base_wrench_legs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__BaseOrientationWrenchDebug__base_wrench_legs(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__BaseOrientationWrenchDebug__base_wrench_full(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__BaseOrientationWrenchDebug__base_wrench_full(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__BaseOrientationWrenchDebug__base_wrench_full(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__BaseOrientationWrenchDebug__base_wrench_full(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__BaseOrientationWrenchDebug__base_wrench_full(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__BaseOrientationWrenchDebug__base_wrench_full(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__BaseOrientationWrenchDebug__base_wrench_full(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BaseOrientationWrenchDebug_message_member_array[4] = {
  {
    "base_wrench_base_tra",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::BaseOrientationWrenchDebug, base_wrench_base_tra),  // bytes offset in struct
    nullptr,  // default value
    size_function__BaseOrientationWrenchDebug__base_wrench_base_tra,  // size() function pointer
    get_const_function__BaseOrientationWrenchDebug__base_wrench_base_tra,  // get_const(index) function pointer
    get_function__BaseOrientationWrenchDebug__base_wrench_base_tra,  // get(index) function pointer
    fetch_function__BaseOrientationWrenchDebug__base_wrench_base_tra,  // fetch(index, &value) function pointer
    assign_function__BaseOrientationWrenchDebug__base_wrench_base_tra,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "base_wrench_base_ori",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::BaseOrientationWrenchDebug, base_wrench_base_ori),  // bytes offset in struct
    nullptr,  // default value
    size_function__BaseOrientationWrenchDebug__base_wrench_base_ori,  // size() function pointer
    get_const_function__BaseOrientationWrenchDebug__base_wrench_base_ori,  // get_const(index) function pointer
    get_function__BaseOrientationWrenchDebug__base_wrench_base_ori,  // get(index) function pointer
    fetch_function__BaseOrientationWrenchDebug__base_wrench_base_ori,  // fetch(index, &value) function pointer
    assign_function__BaseOrientationWrenchDebug__base_wrench_base_ori,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "base_wrench_legs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::BaseOrientationWrenchDebug, base_wrench_legs),  // bytes offset in struct
    nullptr,  // default value
    size_function__BaseOrientationWrenchDebug__base_wrench_legs,  // size() function pointer
    get_const_function__BaseOrientationWrenchDebug__base_wrench_legs,  // get_const(index) function pointer
    get_function__BaseOrientationWrenchDebug__base_wrench_legs,  // get(index) function pointer
    fetch_function__BaseOrientationWrenchDebug__base_wrench_legs,  // fetch(index, &value) function pointer
    assign_function__BaseOrientationWrenchDebug__base_wrench_legs,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "base_wrench_full",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::BaseOrientationWrenchDebug, base_wrench_full),  // bytes offset in struct
    nullptr,  // default value
    size_function__BaseOrientationWrenchDebug__base_wrench_full,  // size() function pointer
    get_const_function__BaseOrientationWrenchDebug__base_wrench_full,  // get_const(index) function pointer
    get_function__BaseOrientationWrenchDebug__base_wrench_full,  // get(index) function pointer
    fetch_function__BaseOrientationWrenchDebug__base_wrench_full,  // fetch(index, &value) function pointer
    assign_function__BaseOrientationWrenchDebug__base_wrench_full,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BaseOrientationWrenchDebug_message_members = {
  "xterra::msg",  // message namespace
  "BaseOrientationWrenchDebug",  // message name
  4,  // number of fields
  sizeof(xterra::msg::BaseOrientationWrenchDebug),
  BaseOrientationWrenchDebug_message_member_array,  // message members
  BaseOrientationWrenchDebug_init_function,  // function to initialize message memory (memory has to be allocated)
  BaseOrientationWrenchDebug_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BaseOrientationWrenchDebug_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BaseOrientationWrenchDebug_message_members,
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
get_message_type_support_handle<xterra::msg::BaseOrientationWrenchDebug>()
{
  return &::xterra::msg::rosidl_typesupport_introspection_cpp::BaseOrientationWrenchDebug_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xterra, msg, BaseOrientationWrenchDebug)() {
  return &::xterra::msg::rosidl_typesupport_introspection_cpp::BaseOrientationWrenchDebug_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
