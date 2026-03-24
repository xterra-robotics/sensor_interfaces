// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xterra:msg/BaseOrientationWrenchDebug.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__BASE_ORIENTATION_WRENCH_DEBUG__STRUCT_H_
#define XTERRA__MSG__DETAIL__BASE_ORIENTATION_WRENCH_DEBUG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BaseOrientationWrenchDebug in the package xterra.
typedef struct xterra__msg__BaseOrientationWrenchDebug
{
  float base_wrench_base_tra[3];
  float base_wrench_base_ori[3];
  float base_wrench_legs[3];
  float base_wrench_full[3];
} xterra__msg__BaseOrientationWrenchDebug;

// Struct for a sequence of xterra__msg__BaseOrientationWrenchDebug.
typedef struct xterra__msg__BaseOrientationWrenchDebug__Sequence
{
  xterra__msg__BaseOrientationWrenchDebug * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xterra__msg__BaseOrientationWrenchDebug__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__BASE_ORIENTATION_WRENCH_DEBUG__STRUCT_H_
