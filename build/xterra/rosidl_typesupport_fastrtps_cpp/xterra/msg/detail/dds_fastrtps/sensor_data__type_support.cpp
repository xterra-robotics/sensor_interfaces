// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from xterra:msg/SensorData.idl
// generated code does not contain a copyright notice
#include "xterra/msg/detail/sensor_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "xterra/msg/detail/sensor_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace xterra
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xterra
cdr_serialize(
  const xterra::msg::SensorData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: q
  {
    cdr << ros_message.q;
  }
  // Member: dq
  {
    cdr << ros_message.dq;
  }
  // Member: ddq
  {
    cdr << ros_message.ddq;
  }
  // Member: q_current
  {
    cdr << ros_message.q_current;
  }
  // Member: d_current
  {
    cdr << ros_message.d_current;
  }
  // Member: tau_est
  {
    cdr << ros_message.tau_est;
  }
  // Member: quat
  {
    cdr << ros_message.quat;
  }
  // Member: gyro
  {
    cdr << ros_message.gyro;
  }
  // Member: accel
  {
    cdr << ros_message.accel;
  }
  // Member: rpy
  {
    cdr << ros_message.rpy;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xterra
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  xterra::msg::SensorData & ros_message)
{
  // Member: q
  {
    cdr >> ros_message.q;
  }

  // Member: dq
  {
    cdr >> ros_message.dq;
  }

  // Member: ddq
  {
    cdr >> ros_message.ddq;
  }

  // Member: q_current
  {
    cdr >> ros_message.q_current;
  }

  // Member: d_current
  {
    cdr >> ros_message.d_current;
  }

  // Member: tau_est
  {
    cdr >> ros_message.tau_est;
  }

  // Member: quat
  {
    cdr >> ros_message.quat;
  }

  // Member: gyro
  {
    cdr >> ros_message.gyro;
  }

  // Member: accel
  {
    cdr >> ros_message.accel;
  }

  // Member: rpy
  {
    cdr >> ros_message.rpy;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xterra
get_serialized_size(
  const xterra::msg::SensorData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: q
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.q[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dq
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.dq[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ddq
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.ddq[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: q_current
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.q_current[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: d_current
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.d_current[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tau_est
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.tau_est[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: quat
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.quat[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyro
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.gyro[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.accel[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rpy
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.rpy[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xterra
max_serialized_size_SensorData(
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


  // Member: q
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dq
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ddq
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: q_current
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: d_current
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tau_est
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: quat
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyro
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rpy
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
    using DataType = xterra::msg::SensorData;
    is_plain =
      (
      offsetof(DataType, rpy) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SensorData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const xterra::msg::SensorData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<xterra::msg::SensorData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const xterra::msg::SensorData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SensorData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SensorData__callbacks = {
  "xterra::msg",
  "SensorData",
  _SensorData__cdr_serialize,
  _SensorData__cdr_deserialize,
  _SensorData__get_serialized_size,
  _SensorData__max_serialized_size
};

static rosidl_message_type_support_t _SensorData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace xterra

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_xterra
const rosidl_message_type_support_t *
get_message_type_support_handle<xterra::msg::SensorData>()
{
  return &xterra::msg::typesupport_fastrtps_cpp::_SensorData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xterra, msg, SensorData)() {
  return &xterra::msg::typesupport_fastrtps_cpp::_SensorData__handle;
}

#ifdef __cplusplus
}
#endif
