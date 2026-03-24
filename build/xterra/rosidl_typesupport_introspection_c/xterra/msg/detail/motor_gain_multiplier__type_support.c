// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xterra:msg/MotorGainMultiplier.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xterra/msg/detail/motor_gain_multiplier__rosidl_typesupport_introspection_c.h"
#include "xterra/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xterra/msg/detail/motor_gain_multiplier__functions.h"
#include "xterra/msg/detail/motor_gain_multiplier__struct.h"


// Include directives for member types
// Member `kp_scale`
// Member `kd_scale`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__MotorGainMultiplier_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xterra__msg__MotorGainMultiplier__init(message_memory);
}

void xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__MotorGainMultiplier_fini_function(void * message_memory)
{
  xterra__msg__MotorGainMultiplier__fini(message_memory);
}

size_t xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__size_function__MotorGainMultiplier__kp_scale(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__get_const_function__MotorGainMultiplier__kp_scale(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__get_function__MotorGainMultiplier__kp_scale(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__fetch_function__MotorGainMultiplier__kp_scale(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__get_const_function__MotorGainMultiplier__kp_scale(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__assign_function__MotorGainMultiplier__kp_scale(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__get_function__MotorGainMultiplier__kp_scale(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__resize_function__MotorGainMultiplier__kp_scale(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__size_function__MotorGainMultiplier__kd_scale(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__get_const_function__MotorGainMultiplier__kd_scale(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__get_function__MotorGainMultiplier__kd_scale(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__fetch_function__MotorGainMultiplier__kd_scale(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__get_const_function__MotorGainMultiplier__kd_scale(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__assign_function__MotorGainMultiplier__kd_scale(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__get_function__MotorGainMultiplier__kd_scale(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__resize_function__MotorGainMultiplier__kd_scale(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__MotorGainMultiplier_message_member_array[2] = {
  {
    "kp_scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__MotorGainMultiplier, kp_scale),  // bytes offset in struct
    NULL,  // default value
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__size_function__MotorGainMultiplier__kp_scale,  // size() function pointer
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__get_const_function__MotorGainMultiplier__kp_scale,  // get_const(index) function pointer
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__get_function__MotorGainMultiplier__kp_scale,  // get(index) function pointer
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__fetch_function__MotorGainMultiplier__kp_scale,  // fetch(index, &value) function pointer
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__assign_function__MotorGainMultiplier__kp_scale,  // assign(index, value) function pointer
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__resize_function__MotorGainMultiplier__kp_scale  // resize(index) function pointer
  },
  {
    "kd_scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__MotorGainMultiplier, kd_scale),  // bytes offset in struct
    NULL,  // default value
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__size_function__MotorGainMultiplier__kd_scale,  // size() function pointer
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__get_const_function__MotorGainMultiplier__kd_scale,  // get_const(index) function pointer
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__get_function__MotorGainMultiplier__kd_scale,  // get(index) function pointer
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__fetch_function__MotorGainMultiplier__kd_scale,  // fetch(index, &value) function pointer
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__assign_function__MotorGainMultiplier__kd_scale,  // assign(index, value) function pointer
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__resize_function__MotorGainMultiplier__kd_scale  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__MotorGainMultiplier_message_members = {
  "xterra__msg",  // message namespace
  "MotorGainMultiplier",  // message name
  2,  // number of fields
  sizeof(xterra__msg__MotorGainMultiplier),
  xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__MotorGainMultiplier_message_member_array,  // message members
  xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__MotorGainMultiplier_init_function,  // function to initialize message memory (memory has to be allocated)
  xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__MotorGainMultiplier_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__MotorGainMultiplier_message_type_support_handle = {
  0,
  &xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__MotorGainMultiplier_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xterra
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, msg, MotorGainMultiplier)() {
  if (!xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__MotorGainMultiplier_message_type_support_handle.typesupport_identifier) {
    xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__MotorGainMultiplier_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xterra__msg__MotorGainMultiplier__rosidl_typesupport_introspection_c__MotorGainMultiplier_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
