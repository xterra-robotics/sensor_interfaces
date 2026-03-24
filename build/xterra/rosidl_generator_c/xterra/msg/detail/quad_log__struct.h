// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xterra:msg/QuadLog.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__QUAD_LOG__STRUCT_H_
#define XTERRA__MSG__DETAIL__QUAD_LOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'base_position'
// Member 'linear_velocity'
// Member 'angular_velocity'
// Member 'plane_normal'
#include "xterra/msg/detail/point3_d__struct.h"
// Member 'base_orientation'
#include "xterra/msg/detail/quaternion__struct.h"

/// Struct defined in msg/QuadLog in the package xterra.
typedef struct xterra__msg__QuadLog
{
  float contact_state[4];
  float contact_prob[4];
  float contact_force[12];
  xterra__msg__Point3D base_position;
  xterra__msg__Quaternion base_orientation;
  xterra__msg__Point3D linear_velocity;
  xterra__msg__Point3D angular_velocity;
  xterra__msg__Point3D plane_normal;
  float base_wrench[6];
  float joint_position[12];
  float joint_velocity[12];
  float joint_torque[12];
  float foot_position[12];
  float foot_velocity[12];
} xterra__msg__QuadLog;

// Struct for a sequence of xterra__msg__QuadLog.
typedef struct xterra__msg__QuadLog__Sequence
{
  xterra__msg__QuadLog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xterra__msg__QuadLog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__QUAD_LOG__STRUCT_H_
