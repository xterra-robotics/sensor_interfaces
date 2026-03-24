// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xterra:msg/SolverStats.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__MSG__DETAIL__SOLVER_STATS__TRAITS_HPP_
#define XTERRA__MSG__DETAIL__SOLVER_STATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xterra/msg/detail/solver_stats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xterra
{

namespace msg
{

inline void to_flow_style_yaml(
  const SolverStats & msg,
  std::ostream & out)
{
  out << "{";
  // member: iters
  {
    out << "iters: ";
    rosidl_generator_traits::value_to_yaml(msg.iters, out);
    out << ", ";
  }

  // member: max_iters
  {
    out << "max_iters: ";
    rosidl_generator_traits::value_to_yaml(msg.max_iters, out);
    out << ", ";
  }

  // member: residual
  {
    if (msg.residual.size() == 0) {
      out << "residual: []";
    } else {
      out << "residual: [";
      size_t pending_items = msg.residual.size();
      for (auto item : msg.residual) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: constraint_violation
  {
    if (msg.constraint_violation.size() == 0) {
      out << "constraint_violation: []";
    } else {
      out << "constraint_violation: [";
      size_t pending_items = msg.constraint_violation.size();
      for (auto item : msg.constraint_violation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: time_ms
  {
    out << "time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.time_ms, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SolverStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: iters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iters: ";
    rosidl_generator_traits::value_to_yaml(msg.iters, out);
    out << "\n";
  }

  // member: max_iters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_iters: ";
    rosidl_generator_traits::value_to_yaml(msg.max_iters, out);
    out << "\n";
  }

  // member: residual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.residual.size() == 0) {
      out << "residual: []\n";
    } else {
      out << "residual:\n";
      for (auto item : msg.residual) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: constraint_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.constraint_violation.size() == 0) {
      out << "constraint_violation: []\n";
    } else {
      out << "constraint_violation:\n";
      for (auto item : msg.constraint_violation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: time_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.time_ms, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SolverStats & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace xterra

namespace rosidl_generator_traits
{

[[deprecated("use xterra::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xterra::msg::SolverStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  xterra::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xterra::msg::to_yaml() instead")]]
inline std::string to_yaml(const xterra::msg::SolverStats & msg)
{
  return xterra::msg::to_yaml(msg);
}

template<>
inline const char * data_type<xterra::msg::SolverStats>()
{
  return "xterra::msg::SolverStats";
}

template<>
inline const char * name<xterra::msg::SolverStats>()
{
  return "xterra/msg/SolverStats";
}

template<>
struct has_fixed_size<xterra::msg::SolverStats>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<xterra::msg::SolverStats>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<xterra::msg::SolverStats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // XTERRA__MSG__DETAIL__SOLVER_STATS__TRAITS_HPP_
