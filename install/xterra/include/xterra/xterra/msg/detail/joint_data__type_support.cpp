// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xterra:msg/JointData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xterra/msg/detail/joint_data__struct.hpp"
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

void JointData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xterra::msg::JointData(_init);
}

void JointData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xterra::msg::JointData *>(message_memory);
  typed_message->~JointData();
}

size_t size_function__JointData__q(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__JointData__q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__JointData__q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointData__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointData__q(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointData__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointData__q(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__JointData__dq(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__JointData__dq(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__JointData__dq(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointData__dq(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointData__dq(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointData__dq(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointData__dq(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__JointData__kp(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__JointData__kp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__JointData__kp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointData__kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointData__kp(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointData__kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointData__kp(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__JointData__kd(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__JointData__kd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__JointData__kd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointData__kd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointData__kd(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointData__kd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointData__kd(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__JointData__tau(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__JointData__tau(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__JointData__tau(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__JointData__tau(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__JointData__tau(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__JointData__tau(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__JointData__tau(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JointData_message_member_array[5] = {
  {
    "q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::JointData, q),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointData__q,  // size() function pointer
    get_const_function__JointData__q,  // get_const(index) function pointer
    get_function__JointData__q,  // get(index) function pointer
    fetch_function__JointData__q,  // fetch(index, &value) function pointer
    assign_function__JointData__q,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::JointData, dq),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointData__dq,  // size() function pointer
    get_const_function__JointData__dq,  // get_const(index) function pointer
    get_function__JointData__dq,  // get(index) function pointer
    fetch_function__JointData__dq,  // fetch(index, &value) function pointer
    assign_function__JointData__dq,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::JointData, kp),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointData__kp,  // size() function pointer
    get_const_function__JointData__kp,  // get_const(index) function pointer
    get_function__JointData__kp,  // get(index) function pointer
    fetch_function__JointData__kp,  // fetch(index, &value) function pointer
    assign_function__JointData__kp,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::JointData, kd),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointData__kd,  // size() function pointer
    get_const_function__JointData__kd,  // get_const(index) function pointer
    get_function__JointData__kd,  // get(index) function pointer
    fetch_function__JointData__kd,  // fetch(index, &value) function pointer
    assign_function__JointData__kd,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tau",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::JointData, tau),  // bytes offset in struct
    nullptr,  // default value
    size_function__JointData__tau,  // size() function pointer
    get_const_function__JointData__tau,  // get_const(index) function pointer
    get_function__JointData__tau,  // get(index) function pointer
    fetch_function__JointData__tau,  // fetch(index, &value) function pointer
    assign_function__JointData__tau,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JointData_message_members = {
  "xterra::msg",  // message namespace
  "JointData",  // message name
  5,  // number of fields
  sizeof(xterra::msg::JointData),
  JointData_message_member_array,  // message members
  JointData_init_function,  // function to initialize message memory (memory has to be allocated)
  JointData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JointData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JointData_message_members,
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
get_message_type_support_handle<xterra::msg::JointData>()
{
  return &::xterra::msg::rosidl_typesupport_introspection_cpp::JointData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xterra, msg, JointData)() {
  return &::xterra::msg::rosidl_typesupport_introspection_cpp::JointData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
