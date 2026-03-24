// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xterra:msg/Quaternion.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__QUATERNION__STRUCT_H_
#define XTERRA__MSG__DETAIL__QUATERNION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Quaternion in the package xterra.
typedef struct xterra__msg__Quaternion
{
  float x;
  float y;
  float z;
  float w;
} xterra__msg__Quaternion;

// Struct for a sequence of xterra__msg__Quaternion.
typedef struct xterra__msg__Quaternion__Sequence
{
  xterra__msg__Quaternion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xterra__msg__Quaternion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__QUATERNION__STRUCT_H_
