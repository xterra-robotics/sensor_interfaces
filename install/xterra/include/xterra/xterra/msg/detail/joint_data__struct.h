// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xterra:msg/JointData.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__JOINT_DATA__STRUCT_H_
#define XTERRA__MSG__DETAIL__JOINT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/JointData in the package xterra.
typedef struct xterra__msg__JointData
{
  /// Desired joint positions (radians)
  float q[12];
  /// Desired joint velocities (rad/s)
  float dq[12];
  /// Proportional gains (Nm/rad)
  float kp[12];
  /// Derivative gains (Nm·s/rad)
  float kd[12];
  /// Feedforward torques (Nm)
  float tau[12];
} xterra__msg__JointData;

// Struct for a sequence of xterra__msg__JointData.
typedef struct xterra__msg__JointData__Sequence
{
  xterra__msg__JointData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xterra__msg__JointData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__JOINT_DATA__STRUCT_H_
