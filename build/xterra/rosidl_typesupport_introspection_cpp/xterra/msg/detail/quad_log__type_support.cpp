// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xterra:msg/QuadLog.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xterra/msg/detail/quad_log__struct.hpp"
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

void QuadLog_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xterra::msg::QuadLog(_init);
}

void QuadLog_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xterra::msg::QuadLog *>(message_memory);
  typed_message->~QuadLog();
}

size_t size_function__QuadLog__contact_state(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__QuadLog__contact_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__QuadLog__contact_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuadLog__contact_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__QuadLog__contact_state(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__QuadLog__contact_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__QuadLog__contact_state(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__QuadLog__contact_prob(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__QuadLog__contact_prob(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__QuadLog__contact_prob(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuadLog__contact_prob(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__QuadLog__contact_prob(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__QuadLog__contact_prob(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__QuadLog__contact_prob(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__QuadLog__contact_force(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__QuadLog__contact_force(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__QuadLog__contact_force(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuadLog__contact_force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__QuadLog__contact_force(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__QuadLog__contact_force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__QuadLog__contact_force(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__QuadLog__base_wrench(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__QuadLog__base_wrench(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__QuadLog__base_wrench(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuadLog__base_wrench(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__QuadLog__base_wrench(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__QuadLog__base_wrench(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__QuadLog__base_wrench(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__QuadLog__joint_position(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__QuadLog__joint_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__QuadLog__joint_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuadLog__joint_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__QuadLog__joint_position(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__QuadLog__joint_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__QuadLog__joint_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__QuadLog__joint_velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__QuadLog__joint_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__QuadLog__joint_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuadLog__joint_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__QuadLog__joint_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__QuadLog__joint_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__QuadLog__joint_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__QuadLog__joint_torque(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__QuadLog__joint_torque(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__QuadLog__joint_torque(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuadLog__joint_torque(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__QuadLog__joint_torque(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__QuadLog__joint_torque(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__QuadLog__joint_torque(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__QuadLog__foot_position(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__QuadLog__foot_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__QuadLog__foot_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuadLog__foot_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__QuadLog__foot_position(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__QuadLog__foot_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__QuadLog__foot_position(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__QuadLog__foot_velocity(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__QuadLog__foot_velocity(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__QuadLog__foot_velocity(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__QuadLog__foot_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__QuadLog__foot_velocity(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__QuadLog__foot_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__QuadLog__foot_velocity(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember QuadLog_message_member_array[14] = {
  {
    "contact_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::QuadLog, contact_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuadLog__contact_state,  // size() function pointer
    get_const_function__QuadLog__contact_state,  // get_const(index) function pointer
    get_function__QuadLog__contact_state,  // get(index) function pointer
    fetch_function__QuadLog__contact_state,  // fetch(index, &value) function pointer
    assign_function__QuadLog__contact_state,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "contact_prob",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::QuadLog, contact_prob),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuadLog__contact_prob,  // size() function pointer
    get_const_function__QuadLog__contact_prob,  // get_const(index) function pointer
    get_function__QuadLog__contact_prob,  // get(index) function pointer
    fetch_function__QuadLog__contact_prob,  // fetch(index, &value) function pointer
    assign_function__QuadLog__contact_prob,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "contact_force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::QuadLog, contact_force),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuadLog__contact_force,  // size() function pointer
    get_const_function__QuadLog__contact_force,  // get_const(index) function pointer
    get_function__QuadLog__contact_force,  // get(index) function pointer
    fetch_function__QuadLog__contact_force,  // fetch(index, &value) function pointer
    assign_function__QuadLog__contact_force,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "base_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xterra::msg::Point3D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::QuadLog, base_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "base_orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xterra::msg::Quaternion>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::QuadLog, base_orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "linear_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xterra::msg::Point3D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::QuadLog, linear_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xterra::msg::Point3D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::QuadLog, angular_velocity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "plane_normal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<xterra::msg::Point3D>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::QuadLog, plane_normal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "base_wrench",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::QuadLog, base_wrench),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuadLog__base_wrench,  // size() function pointer
    get_const_function__QuadLog__base_wrench,  // get_const(index) function pointer
    get_function__QuadLog__base_wrench,  // get(index) function pointer
    fetch_function__QuadLog__base_wrench,  // fetch(index, &value) function pointer
    assign_function__QuadLog__base_wrench,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::QuadLog, joint_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuadLog__joint_position,  // size() function pointer
    get_const_function__QuadLog__joint_position,  // get_const(index) function pointer
    get_function__QuadLog__joint_position,  // get(index) function pointer
    fetch_function__QuadLog__joint_position,  // fetch(index, &value) function pointer
    assign_function__QuadLog__joint_position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::QuadLog, joint_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuadLog__joint_velocity,  // size() function pointer
    get_const_function__QuadLog__joint_velocity,  // get_const(index) function pointer
    get_function__QuadLog__joint_velocity,  // get(index) function pointer
    fetch_function__QuadLog__joint_velocity,  // fetch(index, &value) function pointer
    assign_function__QuadLog__joint_velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "joint_torque",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::QuadLog, joint_torque),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuadLog__joint_torque,  // size() function pointer
    get_const_function__QuadLog__joint_torque,  // get_const(index) function pointer
    get_function__QuadLog__joint_torque,  // get(index) function pointer
    fetch_function__QuadLog__joint_torque,  // fetch(index, &value) function pointer
    assign_function__QuadLog__joint_torque,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "foot_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::QuadLog, foot_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuadLog__foot_position,  // size() function pointer
    get_const_function__QuadLog__foot_position,  // get_const(index) function pointer
    get_function__QuadLog__foot_position,  // get(index) function pointer
    fetch_function__QuadLog__foot_position,  // fetch(index, &value) function pointer
    assign_function__QuadLog__foot_position,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "foot_velocity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::QuadLog, foot_velocity),  // bytes offset in struct
    nullptr,  // default value
    size_function__QuadLog__foot_velocity,  // size() function pointer
    get_const_function__QuadLog__foot_velocity,  // get_const(index) function pointer
    get_function__QuadLog__foot_velocity,  // get(index) function pointer
    fetch_function__QuadLog__foot_velocity,  // fetch(index, &value) function pointer
    assign_function__QuadLog__foot_velocity,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers QuadLog_message_members = {
  "xterra::msg",  // message namespace
  "QuadLog",  // message name
  14,  // number of fields
  sizeof(xterra::msg::QuadLog),
  QuadLog_message_member_array,  // message members
  QuadLog_init_function,  // function to initialize message memory (memory has to be allocated)
  QuadLog_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t QuadLog_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &QuadLog_message_members,
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
get_message_type_support_handle<xterra::msg::QuadLog>()
{
  return &::xterra::msg::rosidl_typesupport_introspection_cpp::QuadLog_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xterra, msg, QuadLog)() {
  return &::xterra::msg::rosidl_typesupport_introspection_cpp::QuadLog_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
