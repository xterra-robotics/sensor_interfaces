// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from xterra:msg/BaseOrientationWrenchDebug.idl
// generated code does not contain a copyright notice
#include "xterra/msg/detail/base_orientation_wrench_debug__rosidl_typesupport_fastrtps_cpp.hpp"
#include "xterra/msg/detail/base_orientation_wrench_debug__struct.hpp"

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
  const xterra::msg::BaseOrientationWrenchDebug & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: base_wrench_base_tra
  {
    cdr << ros_message.base_wrench_base_tra;
  }
  // Member: base_wrench_base_ori
  {
    cdr << ros_message.base_wrench_base_ori;
  }
  // Member: base_wrench_legs
  {
    cdr << ros_message.base_wrench_legs;
  }
  // Member: base_wrench_full
  {
    cdr << ros_message.base_wrench_full;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xterra
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  xterra::msg::BaseOrientationWrenchDebug & ros_message)
{
  // Member: base_wrench_base_tra
  {
    cdr >> ros_message.base_wrench_base_tra;
  }

  // Member: base_wrench_base_ori
  {
    cdr >> ros_message.base_wrench_base_ori;
  }

  // Member: base_wrench_legs
  {
    cdr >> ros_message.base_wrench_legs;
  }

  // Member: base_wrench_full
  {
    cdr >> ros_message.base_wrench_full;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xterra
get_serialized_size(
  const xterra::msg::BaseOrientationWrenchDebug & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: base_wrench_base_tra
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.base_wrench_base_tra[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_wrench_base_ori
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.base_wrench_base_ori[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_wrench_legs
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.base_wrench_legs[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_wrench_full
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.base_wrench_full[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xterra
max_serialized_size_BaseOrientationWrenchDebug(
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


  // Member: base_wrench_base_tra
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: base_wrench_base_ori
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: base_wrench_legs
  {
    size_t array_size = 3;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: base_wrench_full
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
    using DataType = xterra::msg::BaseOrientationWrenchDebug;
    is_plain =
      (
      offsetof(DataType, base_wrench_full) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _BaseOrientationWrenchDebug__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const xterra::msg::BaseOrientationWrenchDebug *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BaseOrientationWrenchDebug__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<xterra::msg::BaseOrientationWrenchDebug *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BaseOrientationWrenchDebug__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const xterra::msg::BaseOrientationWrenchDebug *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BaseOrientationWrenchDebug__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BaseOrientationWrenchDebug(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BaseOrientationWrenchDebug__callbacks = {
  "xterra::msg",
  "BaseOrientationWrenchDebug",
  _BaseOrientationWrenchDebug__cdr_serialize,
  _BaseOrientationWrenchDebug__cdr_deserialize,
  _BaseOrientationWrenchDebug__get_serialized_size,
  _BaseOrientationWrenchDebug__max_serialized_size
};

static rosidl_message_type_support_t _BaseOrientationWrenchDebug__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BaseOrientationWrenchDebug__callbacks,
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
get_message_type_support_handle<xterra::msg::BaseOrientationWrenchDebug>()
{
  return &xterra::msg::typesupport_fastrtps_cpp::_BaseOrientationWrenchDebug__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xterra, msg, BaseOrientationWrenchDebug)() {
  return &xterra::msg::typesupport_fastrtps_cpp::_BaseOrientationWrenchDebug__handle;
}

#ifdef __cplusplus
}
#endif
