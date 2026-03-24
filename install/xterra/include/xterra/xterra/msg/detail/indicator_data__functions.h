// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from xterra:msg/IndicatorData.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__INDICATOR_DATA__FUNCTIONS_H_
#define XTERRA__MSG__DETAIL__INDICATOR_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "xterra/msg/rosidl_generator_c__visibility_control.h"

#include "xterra/msg/detail/indicator_data__struct.h"

/// Initialize msg/IndicatorData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * xterra__msg__IndicatorData
 * )) before or use
 * xterra__msg__IndicatorData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__IndicatorData__init(xterra__msg__IndicatorData * msg);

/// Finalize msg/IndicatorData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__IndicatorData__fini(xterra__msg__IndicatorData * msg);

/// Create msg/IndicatorData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * xterra__msg__IndicatorData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
xterra__msg__IndicatorData *
xterra__msg__IndicatorData__create();

/// Destroy msg/IndicatorData message.
/**
 * It calls
 * xterra__msg__IndicatorData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__IndicatorData__destroy(xterra__msg__IndicatorData * msg);

/// Check for msg/IndicatorData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__IndicatorData__are_equal(const xterra__msg__IndicatorData * lhs, const xterra__msg__IndicatorData * rhs);

/// Copy a msg/IndicatorData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__IndicatorData__copy(
  const xterra__msg__IndicatorData * input,
  xterra__msg__IndicatorData * output);

/// Initialize array of msg/IndicatorData messages.
/**
 * It allocates the memory for the number of elements and calls
 * xterra__msg__IndicatorData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__IndicatorData__Sequence__init(xterra__msg__IndicatorData__Sequence * array, size_t size);

/// Finalize array of msg/IndicatorData messages.
/**
 * It calls
 * xterra__msg__IndicatorData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__IndicatorData__Sequence__fini(xterra__msg__IndicatorData__Sequence * array);

/// Create array of msg/IndicatorData messages.
/**
 * It allocates the memory for the array and calls
 * xterra__msg__IndicatorData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
xterra__msg__IndicatorData__Sequence *
xterra__msg__IndicatorData__Sequence__create(size_t size);

/// Destroy array of msg/IndicatorData messages.
/**
 * It calls
 * xterra__msg__IndicatorData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
void
xterra__msg__IndicatorData__Sequence__destroy(xterra__msg__IndicatorData__Sequence * array);

/// Check for msg/IndicatorData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__IndicatorData__Sequence__are_equal(const xterra__msg__IndicatorData__Sequence * lhs, const xterra__msg__IndicatorData__Sequence * rhs);

/// Copy an array of msg/IndicatorData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_xterra
bool
xterra__msg__IndicatorData__Sequence__copy(
  const xterra__msg__IndicatorData__Sequence * input,
  xterra__msg__IndicatorData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // XTERRA__MSG__DETAIL__INDICATOR_DATA__FUNCTIONS_H_
