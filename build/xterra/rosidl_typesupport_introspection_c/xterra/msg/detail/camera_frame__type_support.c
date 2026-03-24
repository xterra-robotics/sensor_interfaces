// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from xterra:msg/CameraFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "xterra/msg/detail/camera_frame__rosidl_typesupport_introspection_c.h"
#include "xterra/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "xterra/msg/detail/camera_frame__functions.h"
#include "xterra/msg/detail/camera_frame__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__CameraFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  xterra__msg__CameraFrame__init(message_memory);
}

void xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__CameraFrame_fini_function(void * message_memory)
{
  xterra__msg__CameraFrame__fini(message_memory);
}

size_t xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__size_function__CameraFrame__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2764800;
}

const void * xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__get_const_function__CameraFrame__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__get_function__CameraFrame__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__fetch_function__CameraFrame__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__get_const_function__CameraFrame__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__assign_function__CameraFrame__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__get_function__CameraFrame__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__CameraFrame_message_member_array[4] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2764800,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__CameraFrame, data),  // bytes offset in struct
    NULL,  // default value
    xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__size_function__CameraFrame__data,  // size() function pointer
    xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__get_const_function__CameraFrame__data,  // get_const(index) function pointer
    xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__get_function__CameraFrame__data,  // get(index) function pointer
    xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__fetch_function__CameraFrame__data,  // fetch(index, &value) function pointer
    xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__assign_function__CameraFrame__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__CameraFrame, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__CameraFrame, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra__msg__CameraFrame, channels),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__CameraFrame_message_members = {
  "xterra__msg",  // message namespace
  "CameraFrame",  // message name
  4,  // number of fields
  sizeof(xterra__msg__CameraFrame),
  xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__CameraFrame_message_member_array,  // message members
  xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__CameraFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__CameraFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__CameraFrame_message_type_support_handle = {
  0,
  &xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__CameraFrame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_xterra
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, xterra, msg, CameraFrame)() {
  if (!xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__CameraFrame_message_type_support_handle.typesupport_identifier) {
    xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__CameraFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &xterra__msg__CameraFrame__rosidl_typesupport_introspection_c__CameraFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
