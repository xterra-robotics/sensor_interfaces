// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from xterra:msg/SolverStats.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "xterra/msg/detail/solver_stats__struct.hpp"
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

void SolverStats_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) xterra::msg::SolverStats(_init);
}

void SolverStats_fini_function(void * message_memory)
{
  auto typed_message = static_cast<xterra::msg::SolverStats *>(message_memory);
  typed_message->~SolverStats();
}

size_t size_function__SolverStats__residual(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__SolverStats__residual(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__SolverStats__residual(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__SolverStats__residual(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SolverStats__residual(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SolverStats__residual(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SolverStats__residual(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SolverStats__constraint_violation(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SolverStats__constraint_violation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SolverStats__constraint_violation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SolverStats__constraint_violation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SolverStats__constraint_violation(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SolverStats__constraint_violation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SolverStats__constraint_violation(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SolverStats_message_member_array[5] = {
  {
    "iters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::SolverStats, iters),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_iters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::SolverStats, max_iters),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "residual",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::SolverStats, residual),  // bytes offset in struct
    nullptr,  // default value
    size_function__SolverStats__residual,  // size() function pointer
    get_const_function__SolverStats__residual,  // get_const(index) function pointer
    get_function__SolverStats__residual,  // get(index) function pointer
    fetch_function__SolverStats__residual,  // fetch(index, &value) function pointer
    assign_function__SolverStats__residual,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "constraint_violation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::SolverStats, constraint_violation),  // bytes offset in struct
    nullptr,  // default value
    size_function__SolverStats__constraint_violation,  // size() function pointer
    get_const_function__SolverStats__constraint_violation,  // get_const(index) function pointer
    get_function__SolverStats__constraint_violation,  // get(index) function pointer
    fetch_function__SolverStats__constraint_violation,  // fetch(index, &value) function pointer
    assign_function__SolverStats__constraint_violation,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(xterra::msg::SolverStats, time_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SolverStats_message_members = {
  "xterra::msg",  // message namespace
  "SolverStats",  // message name
  5,  // number of fields
  sizeof(xterra::msg::SolverStats),
  SolverStats_message_member_array,  // message members
  SolverStats_init_function,  // function to initialize message memory (memory has to be allocated)
  SolverStats_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SolverStats_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SolverStats_message_members,
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
get_message_type_support_handle<xterra::msg::SolverStats>()
{
  return &::xterra::msg::rosidl_typesupport_introspection_cpp::SolverStats_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, xterra, msg, SolverStats)() {
  return &::xterra::msg::rosidl_typesupport_introspection_cpp::SolverStats_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
