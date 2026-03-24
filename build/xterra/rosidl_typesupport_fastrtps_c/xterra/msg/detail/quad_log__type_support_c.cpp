// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xterra:msg/QuadLog.idl
// generated code does not contain a copyright notice
#include "xterra/msg/detail/quad_log__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xterra/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xterra/msg/detail/quad_log__struct.h"
#include "xterra/msg/detail/quad_log__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "xterra/msg/detail/point3_d__functions.h"  // angular_velocity, base_position, linear_velocity, plane_normal
#include "xterra/msg/detail/quaternion__functions.h"  // base_orientation

// forward declare type support functions
size_t get_serialized_size_xterra__msg__Point3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_xterra__msg__Point3D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xterra, msg, Point3D)();
size_t get_serialized_size_xterra__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_xterra__msg__Quaternion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xterra, msg, Quaternion)();


using _QuadLog__ros_msg_type = xterra__msg__QuadLog;

static bool _QuadLog__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _QuadLog__ros_msg_type * ros_message = static_cast<const _QuadLog__ros_msg_type *>(untyped_ros_message);
  // Field name: contact_state
  {
    size_t size = 4;
    auto array_ptr = ros_message->contact_state;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: contact_prob
  {
    size_t size = 4;
    auto array_ptr = ros_message->contact_prob;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: contact_force
  {
    size_t size = 12;
    auto array_ptr = ros_message->contact_force;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: base_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, xterra, msg, Point3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->base_position, cdr))
    {
      return false;
    }
  }

  // Field name: base_orientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, xterra, msg, Quaternion
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->base_orientation, cdr))
    {
      return false;
    }
  }

  // Field name: linear_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, xterra, msg, Point3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->linear_velocity, cdr))
    {
      return false;
    }
  }

  // Field name: angular_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, xterra, msg, Point3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->angular_velocity, cdr))
    {
      return false;
    }
  }

  // Field name: plane_normal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, xterra, msg, Point3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->plane_normal, cdr))
    {
      return false;
    }
  }

  // Field name: base_wrench
  {
    size_t size = 6;
    auto array_ptr = ros_message->base_wrench;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_position
  {
    size_t size = 12;
    auto array_ptr = ros_message->joint_position;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_velocity
  {
    size_t size = 12;
    auto array_ptr = ros_message->joint_velocity;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_torque
  {
    size_t size = 12;
    auto array_ptr = ros_message->joint_torque;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: foot_position
  {
    size_t size = 12;
    auto array_ptr = ros_message->foot_position;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: foot_velocity
  {
    size_t size = 12;
    auto array_ptr = ros_message->foot_velocity;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _QuadLog__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _QuadLog__ros_msg_type * ros_message = static_cast<_QuadLog__ros_msg_type *>(untyped_ros_message);
  // Field name: contact_state
  {
    size_t size = 4;
    auto array_ptr = ros_message->contact_state;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: contact_prob
  {
    size_t size = 4;
    auto array_ptr = ros_message->contact_prob;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: contact_force
  {
    size_t size = 12;
    auto array_ptr = ros_message->contact_force;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: base_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, xterra, msg, Point3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->base_position))
    {
      return false;
    }
  }

  // Field name: base_orientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, xterra, msg, Quaternion
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->base_orientation))
    {
      return false;
    }
  }

  // Field name: linear_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, xterra, msg, Point3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->linear_velocity))
    {
      return false;
    }
  }

  // Field name: angular_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, xterra, msg, Point3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->angular_velocity))
    {
      return false;
    }
  }

  // Field name: plane_normal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, xterra, msg, Point3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->plane_normal))
    {
      return false;
    }
  }

  // Field name: base_wrench
  {
    size_t size = 6;
    auto array_ptr = ros_message->base_wrench;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_position
  {
    size_t size = 12;
    auto array_ptr = ros_message->joint_position;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_velocity
  {
    size_t size = 12;
    auto array_ptr = ros_message->joint_velocity;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_torque
  {
    size_t size = 12;
    auto array_ptr = ros_message->joint_torque;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: foot_position
  {
    size_t size = 12;
    auto array_ptr = ros_message->foot_position;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: foot_velocity
  {
    size_t size = 12;
    auto array_ptr = ros_message->foot_velocity;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xterra
size_t get_serialized_size_xterra__msg__QuadLog(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _QuadLog__ros_msg_type * ros_message = static_cast<const _QuadLog__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name contact_state
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->contact_state;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contact_prob
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->contact_prob;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contact_force
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->contact_force;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name base_position

  current_alignment += get_serialized_size_xterra__msg__Point3D(
    &(ros_message->base_position), current_alignment);
  // field.name base_orientation

  current_alignment += get_serialized_size_xterra__msg__Quaternion(
    &(ros_message->base_orientation), current_alignment);
  // field.name linear_velocity

  current_alignment += get_serialized_size_xterra__msg__Point3D(
    &(ros_message->linear_velocity), current_alignment);
  // field.name angular_velocity

  current_alignment += get_serialized_size_xterra__msg__Point3D(
    &(ros_message->angular_velocity), current_alignment);
  // field.name plane_normal

  current_alignment += get_serialized_size_xterra__msg__Point3D(
    &(ros_message->plane_normal), current_alignment);
  // field.name base_wrench
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->base_wrench;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_position
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->joint_position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_velocity
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->joint_velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_torque
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->joint_torque;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_position
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->foot_position;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name foot_velocity
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->foot_velocity;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _QuadLog__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xterra__msg__QuadLog(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xterra
size_t max_serialized_size_xterra__msg__QuadLog(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: contact_state
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: contact_prob
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: contact_force
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: base_position
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_xterra__msg__Point3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: base_orientation
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_xterra__msg__Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: linear_velocity
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_xterra__msg__Point3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: angular_velocity
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_xterra__msg__Point3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: plane_normal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_xterra__msg__Point3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: base_wrench
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_position
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_velocity
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_torque
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: foot_position
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: foot_velocity
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xterra__msg__QuadLog;
    is_plain =
      (
      offsetof(DataType, foot_velocity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _QuadLog__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xterra__msg__QuadLog(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_QuadLog = {
  "xterra::msg",
  "QuadLog",
  _QuadLog__cdr_serialize,
  _QuadLog__cdr_deserialize,
  _QuadLog__get_serialized_size,
  _QuadLog__max_serialized_size
};

static rosidl_message_type_support_t _QuadLog__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_QuadLog,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xterra, msg, QuadLog)() {
  return &_QuadLog__type_support;
}

#if defined(__cplusplus)
}
#endif
