// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xterra:msg/MotorGainMultiplier.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__STRUCT_H_
#define XTERRA__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'kp_scale'
// Member 'kd_scale'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MotorGainMultiplier in the package xterra.
typedef struct xterra__msg__MotorGainMultiplier
{
  rosidl_runtime_c__float__Sequence kp_scale;
  rosidl_runtime_c__float__Sequence kd_scale;
} xterra__msg__MotorGainMultiplier;

// Struct for a sequence of xterra__msg__MotorGainMultiplier.
typedef struct xterra__msg__MotorGainMultiplier__Sequence
{
  xterra__msg__MotorGainMultiplier * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xterra__msg__MotorGainMultiplier__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__MOTOR_GAIN_MULTIPLIER__STRUCT_H_
