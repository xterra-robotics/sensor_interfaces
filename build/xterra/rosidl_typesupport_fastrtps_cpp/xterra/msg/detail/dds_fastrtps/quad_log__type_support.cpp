// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from xterra:msg/QuadLog.idl
// generated code does not contain a copyright notice
#include "xterra/msg/detail/quad_log__rosidl_typesupport_fastrtps_cpp.hpp"
#include "xterra/msg/detail/quad_log__struct.hpp"

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
bool cdr_serialize(
  const xterra::msg::Point3D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  xterra::msg::Point3D &);
size_t get_serialized_size(
  const xterra::msg::Point3D &,
  size_t current_alignment);
size_t
max_serialized_size_Point3D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace xterra

namespace xterra
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const xterra::msg::Quaternion &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  xterra::msg::Quaternion &);
size_t get_serialized_size(
  const xterra::msg::Quaternion &,
  size_t current_alignment);
size_t
max_serialized_size_Quaternion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace xterra

// functions for xterra::msg::Point3D already declared above

// functions for xterra::msg::Point3D already declared above

// functions for xterra::msg::Point3D already declared above


namespace xterra
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xterra
cdr_serialize(
  const xterra::msg::QuadLog & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: contact_state
  {
    cdr << ros_message.contact_state;
  }
  // Member: contact_prob
  {
    cdr << ros_message.contact_prob;
  }
  // Member: contact_force
  {
    cdr << ros_message.contact_force;
  }
  // Member: base_position
  xterra::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.base_position,
    cdr);
  // Member: base_orientation
  xterra::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.base_orientation,
    cdr);
  // Member: linear_velocity
  xterra::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.linear_velocity,
    cdr);
  // Member: angular_velocity
  xterra::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.angular_velocity,
    cdr);
  // Member: plane_normal
  xterra::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.plane_normal,
    cdr);
  // Member: base_wrench
  {
    cdr << ros_message.base_wrench;
  }
  // Member: joint_position
  {
    cdr << ros_message.joint_position;
  }
  // Member: joint_velocity
  {
    cdr << ros_message.joint_velocity;
  }
  // Member: joint_torque
  {
    cdr << ros_message.joint_torque;
  }
  // Member: foot_position
  {
    cdr << ros_message.foot_position;
  }
  // Member: foot_velocity
  {
    cdr << ros_message.foot_velocity;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xterra
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  xterra::msg::QuadLog & ros_message)
{
  // Member: contact_state
  {
    cdr >> ros_message.contact_state;
  }

  // Member: contact_prob
  {
    cdr >> ros_message.contact_prob;
  }

  // Member: contact_force
  {
    cdr >> ros_message.contact_force;
  }

  // Member: base_position
  xterra::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.base_position);

  // Member: base_orientation
  xterra::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.base_orientation);

  // Member: linear_velocity
  xterra::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.linear_velocity);

  // Member: angular_velocity
  xterra::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.angular_velocity);

  // Member: plane_normal
  xterra::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.plane_normal);

  // Member: base_wrench
  {
    cdr >> ros_message.base_wrench;
  }

  // Member: joint_position
  {
    cdr >> ros_message.joint_position;
  }

  // Member: joint_velocity
  {
    cdr >> ros_message.joint_velocity;
  }

  // Member: joint_torque
  {
    cdr >> ros_message.joint_torque;
  }

  // Member: foot_position
  {
    cdr >> ros_message.foot_position;
  }

  // Member: foot_velocity
  {
    cdr >> ros_message.foot_velocity;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xterra
get_serialized_size(
  const xterra::msg::QuadLog & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: contact_state
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.contact_state[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: contact_prob
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.contact_prob[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: contact_force
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.contact_force[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: base_position

  current_alignment +=
    xterra::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.base_position, current_alignment);
  // Member: base_orientation

  current_alignment +=
    xterra::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.base_orientation, current_alignment);
  // Member: linear_velocity

  current_alignment +=
    xterra::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.linear_velocity, current_alignment);
  // Member: angular_velocity

  current_alignment +=
    xterra::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.angular_velocity, current_alignment);
  // Member: plane_normal

  current_alignment +=
    xterra::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.plane_normal, current_alignment);
  // Member: base_wrench
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.base_wrench[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_position
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.joint_position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_velocity
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.joint_velocity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_torque
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.joint_torque[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_position
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.foot_position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: foot_velocity
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.foot_velocity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_xterra
max_serialized_size_QuadLog(
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


  // Member: contact_state
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: contact_prob
  {
    size_t array_size = 4;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: contact_force
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: base_position
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        xterra::msg::typesupport_fastrtps_cpp::max_serialized_size_Point3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: base_orientation
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        xterra::msg::typesupport_fastrtps_cpp::max_serialized_size_Quaternion(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: linear_velocity
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        xterra::msg::typesupport_fastrtps_cpp::max_serialized_size_Point3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: angular_velocity
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        xterra::msg::typesupport_fastrtps_cpp::max_serialized_size_Point3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: plane_normal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        xterra::msg::typesupport_fastrtps_cpp::max_serialized_size_Point3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: base_wrench
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_position
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_velocity
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_torque
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: foot_position
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: foot_velocity
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
    using DataType = xterra::msg::QuadLog;
    is_plain =
      (
      offsetof(DataType, foot_velocity) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _QuadLog__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const xterra::msg::QuadLog *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _QuadLog__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<xterra::msg::QuadLog *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _QuadLog__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const xterra::msg::QuadLog *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _QuadLog__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_QuadLog(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _QuadLog__callbacks = {
  "xterra::msg",
  "QuadLog",
  _QuadLog__cdr_serialize,
  _QuadLog__cdr_deserialize,
  _QuadLog__get_serialized_size,
  _QuadLog__max_serialized_size
};

static rosidl_message_type_support_t _QuadLog__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_QuadLog__callbacks,
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
get_message_type_support_handle<xterra::msg::QuadLog>()
{
  return &xterra::msg::typesupport_fastrtps_cpp::_QuadLog__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, xterra, msg, QuadLog)() {
  return &xterra::msg::typesupport_fastrtps_cpp::_QuadLog__handle;
}

#ifdef __cplusplus
}
#endif
