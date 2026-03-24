// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xterra:msg/QuadLog.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xterra/msg/detail/quad_log__rosidl_typesupport_introspection_c.h"
#include "xterra/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xterra/msg/detail/quad_log__functions.h"
#include "xterra/msg/detail/quad_log__struct.h"


// Include directives for member types
// Member `base_position`
// Member `linear_velocity`
// Member `angular_velocity`
// Member `plane_normal`
#include "xterra/msg/point3_d.h"
// Member `base_position`
// Member `linear_velocity`
// Member `angular_velocity`
// Member `plane_normal`
#include "xterra/msg/detail/point3_d__rosidl_typesupport_introspection_c.h"
// Member `base_orientation`
#include "xterra/msg/quaternion.h"
// Member `base_orientation`
#include "xterra/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xterra__msg__QuadLog__init(message_memory);
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_fini_function(void * message_memory)
{
  xterra__msg__QuadLog__fini(message_memory);
}

size_t xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__contact_state(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__contact_state(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__contact_state(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__contact_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__contact_state(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__contact_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__contact_state(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__contact_prob(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__contact_prob(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__contact_prob(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__contact_prob(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__contact_prob(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__contact_prob(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__contact_prob(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__contact_force(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__contact_force(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__contact_force(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__contact_force(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__contact_force(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__contact_force(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__contact_force(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__base_wrench(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__base_wrench(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__base_wrench(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__base_wrench(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__base_wrench(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__base_wrench(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__base_wrench(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__joint_position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__joint_position(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__joint_position(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__joint_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__joint_position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__joint_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__joint_position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__joint_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__joint_velocity(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__joint_velocity(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__joint_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__joint_velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__joint_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__joint_velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__joint_torque(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__joint_torque(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__joint_torque(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__joint_torque(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__joint_torque(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__joint_torque(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__joint_torque(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__foot_position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__foot_position(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__foot_position(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__foot_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__foot_position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__foot_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__foot_position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__foot_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__foot_velocity(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__foot_velocity(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__foot_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__foot_velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__foot_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__foot_velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_message_member_array[14] = {
  {
    "contact_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__QuadLog, contact_state),  // bytes offset in struct
    NULL,  // default value
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__contact_state,  // size() function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__contact_state,  // get_const(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__contact_state,  // get(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__contact_state,  // fetch(index, &value) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__contact_state,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contact_prob",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__QuadLog, contact_prob),  // bytes offset in struct
    NULL,  // default value
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__contact_prob,  // size() function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__contact_prob,  // get_const(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__contact_prob,  // get(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__contact_prob,  // fetch(index, &value) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__contact_prob,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contact_force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__QuadLog, contact_force),  // bytes offset in struct
    NULL,  // default value
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__contact_force,  // size() function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__contact_force,  // get_const(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__contact_force,  // get(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__contact_force,  // fetch(index, &value) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__contact_force,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "base_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__QuadLog, base_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "base_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__QuadLog, base_orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__QuadLog, linear_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__QuadLog, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plane_normal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__QuadLog, plane_normal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "base_wrench",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__QuadLog, base_wrench),  // bytes offset in struct
    NULL,  // default value
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__base_wrench,  // size() function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__base_wrench,  // get_const(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__base_wrench,  // get(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__base_wrench,  // fetch(index, &value) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__base_wrench,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__QuadLog, joint_position),  // bytes offset in struct
    NULL,  // default value
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__joint_position,  // size() function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__joint_position,  // get_const(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__joint_position,  // get(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__joint_position,  // fetch(index, &value) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__joint_position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__QuadLog, joint_velocity),  // bytes offset in struct
    NULL,  // default value
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__joint_velocity,  // size() function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__joint_velocity,  // get_const(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__joint_velocity,  // get(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__joint_velocity,  // fetch(index, &value) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__joint_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__QuadLog, joint_torque),  // bytes offset in struct
    NULL,  // default value
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__joint_torque,  // size() function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__joint_torque,  // get_const(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__joint_torque,  // get(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__joint_torque,  // fetch(index, &value) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__joint_torque,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__QuadLog, foot_position),  // bytes offset in struct
    NULL,  // default value
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__foot_position,  // size() function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__foot_position,  // get_const(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__foot_position,  // get(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__foot_position,  // fetch(index, &value) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__foot_position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__QuadLog, foot_velocity),  // bytes offset in struct
    NULL,  // default value
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__size_function__QuadLog__foot_velocity,  // size() function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_const_function__QuadLog__foot_velocity,  // get_const(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__get_function__QuadLog__foot_velocity,  // get(index) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__fetch_function__QuadLog__foot_velocity,  // fetch(index, &value) function pointer
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__assign_function__QuadLog__foot_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_message_members = {
  "xterra__msg",  // message namespace
  "QuadLog",  // message name
  14,  // number of fields
  sizeof(xterra__msg__QuadLog),
  xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_message_member_array,  // message members
  xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_init_function,  // function to initialize message memory (memory has to be allocated)
  xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_message_type_support_handle = {
  0,
  &xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xterra
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, msg, QuadLog)() {
  xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, msg, Point3D)();
  xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, msg, Quaternion)();
  xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, msg, Point3D)();
  xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, msg, Point3D)();
  xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, msg, Point3D)();
  if (!xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_message_type_support_handle.typesupport_identifier) {
    xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xterra__msg__QuadLog__rosidl_typesupport_introspection_c__QuadLog_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
