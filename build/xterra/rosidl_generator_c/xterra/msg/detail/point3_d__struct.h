// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xterra:msg/Point3D.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__POINT3_D__STRUCT_H_
#define XTERRA__MSG__DETAIL__POINT3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Point3D in the package xterra.
typedef struct xterra__msg__Point3D
{
  float x;
  float y;
  float z;
} xterra__msg__Point3D;

// Struct for a sequence of xterra__msg__Point3D.
typedef struct xterra__msg__Point3D__Sequence
{
  xterra__msg__Point3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xterra__msg__Point3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__POINT3_D__STRUCT_H_
