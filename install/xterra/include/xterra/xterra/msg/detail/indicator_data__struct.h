// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from xterra:msg/IndicatorData.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__INDICATOR_DATA__STRUCT_H_
#define XTERRA__MSG__DETAIL__INDICATOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/IndicatorData in the package xterra.
typedef struct xterra__msg__IndicatorData
{
  bool led1;
  bool led2;
  bool led3;
  bool buzzer;
} xterra__msg__IndicatorData;

// Struct for a sequence of xterra__msg__IndicatorData.
typedef struct xterra__msg__IndicatorData__Sequence
{
  xterra__msg__IndicatorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} xterra__msg__IndicatorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__INDICATOR_DATA__STRUCT_H_
