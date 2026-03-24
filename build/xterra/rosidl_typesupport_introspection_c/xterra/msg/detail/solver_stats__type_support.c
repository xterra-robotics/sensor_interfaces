// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xterra:msg/SolverStats.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xterra/msg/detail/solver_stats__rosidl_typesupport_introspection_c.h"
#include "xterra/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xterra/msg/detail/solver_stats__functions.h"
#include "xterra/msg/detail/solver_stats__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void xterra__msg__SolverStats__rosidl_typesupport_introspection_c__SolverStats_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xterra__msg__SolverStats__init(message_memory);
}

void xterra__msg__SolverStats__rosidl_typesupport_introspection_c__SolverStats_fini_function(void * message_memory)
{
  xterra__msg__SolverStats__fini(message_memory);
}

size_t xterra__msg__SolverStats__rosidl_typesupport_introspection_c__size_function__SolverStats__residual(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * xterra__msg__SolverStats__rosidl_typesupport_introspection_c__get_const_function__SolverStats__residual(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * xterra__msg__SolverStats__rosidl_typesupport_introspection_c__get_function__SolverStats__residual(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void xterra__msg__SolverStats__rosidl_typesupport_introspection_c__fetch_function__SolverStats__residual(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__get_const_function__SolverStats__residual(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xterra__msg__SolverStats__rosidl_typesupport_introspection_c__assign_function__SolverStats__residual(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__get_function__SolverStats__residual(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t xterra__msg__SolverStats__rosidl_typesupport_introspection_c__size_function__SolverStats__constraint_violation(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * xterra__msg__SolverStats__rosidl_typesupport_introspection_c__get_const_function__SolverStats__constraint_violation(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * xterra__msg__SolverStats__rosidl_typesupport_introspection_c__get_function__SolverStats__constraint_violation(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void xterra__msg__SolverStats__rosidl_typesupport_introspection_c__fetch_function__SolverStats__constraint_violation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__get_const_function__SolverStats__constraint_violation(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xterra__msg__SolverStats__rosidl_typesupport_introspection_c__assign_function__SolverStats__constraint_violation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__get_function__SolverStats__constraint_violation(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember xterra__msg__SolverStats__rosidl_typesupport_introspection_c__SolverStats_message_member_array[5] = {
  {
    "iters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__SolverStats, iters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_iters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__SolverStats, max_iters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "residual",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__SolverStats, residual),  // bytes offset in struct
    NULL,  // default value
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__size_function__SolverStats__residual,  // size() function pointer
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__get_const_function__SolverStats__residual,  // get_const(index) function pointer
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__get_function__SolverStats__residual,  // get(index) function pointer
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__fetch_function__SolverStats__residual,  // fetch(index, &value) function pointer
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__assign_function__SolverStats__residual,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "constraint_violation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__SolverStats, constraint_violation),  // bytes offset in struct
    NULL,  // default value
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__size_function__SolverStats__constraint_violation,  // size() function pointer
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__get_const_function__SolverStats__constraint_violation,  // get_const(index) function pointer
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__get_function__SolverStats__constraint_violation,  // get(index) function pointer
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__fetch_function__SolverStats__constraint_violation,  // fetch(index, &value) function pointer
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__assign_function__SolverStats__constraint_violation,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__SolverStats, time_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xterra__msg__SolverStats__rosidl_typesupport_introspection_c__SolverStats_message_members = {
  "xterra__msg",  // message namespace
  "SolverStats",  // message name
  5,  // number of fields
  sizeof(xterra__msg__SolverStats),
  xterra__msg__SolverStats__rosidl_typesupport_introspection_c__SolverStats_message_member_array,  // message members
  xterra__msg__SolverStats__rosidl_typesupport_introspection_c__SolverStats_init_function,  // function to initialize message memory (memory has to be allocated)
  xterra__msg__SolverStats__rosidl_typesupport_introspection_c__SolverStats_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xterra__msg__SolverStats__rosidl_typesupport_introspection_c__SolverStats_message_type_support_handle = {
  0,
  &xterra__msg__SolverStats__rosidl_typesupport_introspection_c__SolverStats_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xterra
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, msg, SolverStats)() {
  if (!xterra__msg__SolverStats__rosidl_typesupport_introspection_c__SolverStats_message_type_support_handle.typesupport_identifier) {
    xterra__msg__SolverStats__rosidl_typesupport_introspection_c__SolverStats_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xterra__msg__SolverStats__rosidl_typesupport_introspection_c__SolverStats_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
