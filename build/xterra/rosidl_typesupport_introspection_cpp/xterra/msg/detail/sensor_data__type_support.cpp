// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xterra:msg/SensorData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xterra/msg/detail/sensor_data__struct.hpp"
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

void SensorData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xterra::msg::SensorData(_init);
}

void SensorData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xterra::msg::SensorData *>(message_memory);
  typed_message->~SensorData();
}

size_t size_function__SensorData__q(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__SensorData__q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorData__q(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorData__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorData__q(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorData__dq(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__SensorData__dq(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__dq(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__dq(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorData__dq(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorData__dq(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorData__dq(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorData__ddq(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__SensorData__ddq(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__ddq(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__ddq(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorData__ddq(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorData__ddq(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorData__ddq(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorData__q_current(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__SensorData__q_current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__q_current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__q_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorData__q_current(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorData__q_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorData__q_current(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorData__d_current(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__SensorData__d_current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__d_current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__d_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorData__d_current(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorData__d_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorData__d_current(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorData__tau_est(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__SensorData__tau_est(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__tau_est(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__tau_est(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorData__tau_est(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorData__tau_est(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorData__tau_est(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorData__quat(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorData__quat(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__quat(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__quat(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorData__quat(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorData__quat(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorData__quat(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorData__gyro(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorData__gyro(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__gyro(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__gyro(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorData__gyro(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorData__gyro(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorData__gyro(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorData__accel(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorData__accel(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__accel(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__accel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorData__accel(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorData__accel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorData__accel(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorData__rpy(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorData__rpy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorData__rpy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorData__rpy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorData__rpy(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorData__rpy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorData__rpy(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorData_message_member_array[10] = {
  {
    "q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::SensorData, q),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__q,  // size() function pointer
    get_const_function__SensorData__q,  // get_const(index) function pointer
    get_function__SensorData__q,  // get(index) function pointer
    fetch_function__SensorData__q,  // fetch(index, &value) function pointer
    assign_function__SensorData__q,  // assign(index, value) function pointer
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
    offsetof(xterra::msg::SensorData, dq),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__dq,  // size() function pointer
    get_const_function__SensorData__dq,  // get_const(index) function pointer
    get_function__SensorData__dq,  // get(index) function pointer
    fetch_function__SensorData__dq,  // fetch(index, &value) function pointer
    assign_function__SensorData__dq,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ddq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::SensorData, ddq),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__ddq,  // size() function pointer
    get_const_function__SensorData__ddq,  // get_const(index) function pointer
    get_function__SensorData__ddq,  // get(index) function pointer
    fetch_function__SensorData__ddq,  // fetch(index, &value) function pointer
    assign_function__SensorData__ddq,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "q_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::SensorData, q_current),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__q_current,  // size() function pointer
    get_const_function__SensorData__q_current,  // get_const(index) function pointer
    get_function__SensorData__q_current,  // get(index) function pointer
    fetch_function__SensorData__q_current,  // fetch(index, &value) function pointer
    assign_function__SensorData__q_current,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "d_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::SensorData, d_current),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__d_current,  // size() function pointer
    get_const_function__SensorData__d_current,  // get_const(index) function pointer
    get_function__SensorData__d_current,  // get(index) function pointer
    fetch_function__SensorData__d_current,  // fetch(index, &value) function pointer
    assign_function__SensorData__d_current,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tau_est",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::SensorData, tau_est),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__tau_est,  // size() function pointer
    get_const_function__SensorData__tau_est,  // get_const(index) function pointer
    get_function__SensorData__tau_est,  // get(index) function pointer
    fetch_function__SensorData__tau_est,  // fetch(index, &value) function pointer
    assign_function__SensorData__tau_est,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "quat",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::SensorData, quat),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__quat,  // size() function pointer
    get_const_function__SensorData__quat,  // get_const(index) function pointer
    get_function__SensorData__quat,  // get(index) function pointer
    fetch_function__SensorData__quat,  // fetch(index, &value) function pointer
    assign_function__SensorData__quat,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::SensorData, gyro),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__gyro,  // size() function pointer
    get_const_function__SensorData__gyro,  // get_const(index) function pointer
    get_function__SensorData__gyro,  // get(index) function pointer
    fetch_function__SensorData__gyro,  // fetch(index, &value) function pointer
    assign_function__SensorData__gyro,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::SensorData, accel),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__accel,  // size() function pointer
    get_const_function__SensorData__accel,  // get_const(index) function pointer
    get_function__SensorData__accel,  // get(index) function pointer
    fetch_function__SensorData__accel,  // fetch(index, &value) function pointer
    assign_function__SensorData__accel,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rpy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::SensorData, rpy),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorData__rpy,  // size() function pointer
    get_const_function__SensorData__rpy,  // get_const(index) function pointer
    get_function__SensorData__rpy,  // get(index) function pointer
    fetch_function__SensorData__rpy,  // fetch(index, &value) function pointer
    assign_function__SensorData__rpy,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorData_message_members = {
  "xterra::msg",  // message namespace
  "SensorData",  // message name
  10,  // number of fields
  sizeof(xterra::msg::SensorData),
  SensorData_message_member_array,  // message members
  SensorData_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorData_message_members,
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
get_message_type_support_handle<xterra::msg::SensorData>()
{
  return &::xterra::msg::rosidl_typesupport_introspection_cpp::SensorData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xterra, msg, SensorData)() {
  return &::xterra::msg::rosidl_typesupport_introspection_cpp::SensorData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
