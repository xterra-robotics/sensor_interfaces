// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from xterra:msg/SensorData.idl
// generated code does not contain a copyright notice
#include "xterra/msg/detail/sensor_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "xterra/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "xterra/msg/detail/sensor_data__struct.h"
#include "xterra/msg/detail/sensor_data__functions.h"
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


// forward declare type support functions


using _SensorData__ros_msg_type = xterra__msg__SensorData;

static bool _SensorData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorData__ros_msg_type * ros_message = static_cast<const _SensorData__ros_msg_type *>(untyped_ros_message);
  // Field name: q
  {
    size_t size = 12;
    auto array_ptr = ros_message->q;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: dq
  {
    size_t size = 12;
    auto array_ptr = ros_message->dq;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: ddq
  {
    size_t size = 12;
    auto array_ptr = ros_message->ddq;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: q_current
  {
    size_t size = 12;
    auto array_ptr = ros_message->q_current;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: d_current
  {
    size_t size = 12;
    auto array_ptr = ros_message->d_current;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: tau_est
  {
    size_t size = 12;
    auto array_ptr = ros_message->tau_est;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: quat
  {
    size_t size = 4;
    auto array_ptr = ros_message->quat;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gyro
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: accel
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: rpy
  {
    size_t size = 3;
    auto array_ptr = ros_message->rpy;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SensorData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorData__ros_msg_type * ros_message = static_cast<_SensorData__ros_msg_type *>(untyped_ros_message);
  // Field name: q
  {
    size_t size = 12;
    auto array_ptr = ros_message->q;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: dq
  {
    size_t size = 12;
    auto array_ptr = ros_message->dq;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: ddq
  {
    size_t size = 12;
    auto array_ptr = ros_message->ddq;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: q_current
  {
    size_t size = 12;
    auto array_ptr = ros_message->q_current;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: d_current
  {
    size_t size = 12;
    auto array_ptr = ros_message->d_current;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: tau_est
  {
    size_t size = 12;
    auto array_ptr = ros_message->tau_est;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: quat
  {
    size_t size = 4;
    auto array_ptr = ros_message->quat;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gyro
  {
    size_t size = 3;
    auto array_ptr = ros_message->gyro;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: accel
  {
    size_t size = 3;
    auto array_ptr = ros_message->accel;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: rpy
  {
    size_t size = 3;
    auto array_ptr = ros_message->rpy;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xterra
size_t get_serialized_size_xterra__msg__SensorData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorData__ros_msg_type * ros_message = static_cast<const _SensorData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name q
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->q;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dq
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->dq;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ddq
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->ddq;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name q_current
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->q_current;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d_current
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->d_current;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tau_est
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->tau_est;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quat
  {
    size_t array_size = 4;
    auto array_ptr = ros_message->quat;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gyro
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->gyro;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->accel;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rpy
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->rpy;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SensorData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_xterra__msg__SensorData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_xterra
size_t max_serialized_size_xterra__msg__SensorData(
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

  // member: q
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dq
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ddq
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: q_current
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: d_current
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tau_est
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: quat
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gyro
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: accel
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rpy
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = xterra__msg__SensorData;
    is_plain =
      (
      offsetof(DataType, rpy) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SensorData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_xterra__msg__SensorData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorData = {
  "xterra::msg",
  "SensorData",
  _SensorData__cdr_serialize,
  _SensorData__cdr_deserialize,
  _SensorData__get_serialized_size,
  _SensorData__max_serialized_size
};

static rosidl_message_type_support_t _SensorData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, xterra, msg, SensorData)() {
  return &_SensorData__type_support;
}

#if defined(__cplusplus)
}
#endif
