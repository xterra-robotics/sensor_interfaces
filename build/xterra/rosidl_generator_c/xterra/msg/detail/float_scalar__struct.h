// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xterra:msg/FloatScalar.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__FLOAT_SCALAR__STRUCT_H_
#define XTERRA__MSG__DETAIL__FLOAT_SCALAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FloatScalar in the package xterra.
typedef struct xterra__msg__FloatScalar
{
  float data;
} xterra__msg__FloatScalar;

// Struct for a sequence of xterra__msg__FloatScalar.
typedef struct xterra__msg__FloatScalar__Sequence
{
  xterra__msg__FloatScalar * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xterra__msg__FloatScalar__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__FLOAT_SCALAR__STRUCT_H_
