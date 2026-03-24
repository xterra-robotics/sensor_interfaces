// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from xterra:srv/CaptureImage.idl
// generated code does not contain a copyright notice

#ifndef XTERRA__SRV__DETAIL__CAPTURE_IMAGE__TRAITS_HPP_
#define XTERRA__SRV__DETAIL__CAPTURE_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "xterra/srv/detail/capture_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace xterra
{

namespace srv
{

inline void to_flow_style_yaml(
  const CaptureImage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: camera_name
  {
    out << "camera_name: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_name, out);
    out << ", ";
  }

  // member: image_type
  {
    out << "image_type: ";
    rosidl_generator_traits::value_to_yaml(msg.image_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: camera_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_name: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_name, out);
    out << "\n";
  }

  // member: image_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image_type: ";
    rosidl_generator_traits::value_to_yaml(msg.image_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureImage_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace xterra

namespace rosidl_generator_traits
{

[[deprecated("use xterra::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xterra::srv::CaptureImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  xterra::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xterra::srv::to_yaml() instead")]]
inline std::string to_yaml(const xterra::srv::CaptureImage_Request & msg)
{
  return xterra::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xterra::srv::CaptureImage_Request>()
{
  return "xterra::srv::CaptureImage_Request";
}

template<>
inline const char * name<xterra::srv::CaptureImage_Request>()
{
  return "xterra/srv/CaptureImage_Request";
}

template<>
struct has_fixed_size<xterra::srv::CaptureImage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xterra::srv::CaptureImage_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<xterra::srv::CaptureImage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace xterra
{

namespace srv
{

inline void to_flow_style_yaml(
  const CaptureImage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: reply
  {
    out << "reply: ";
    rosidl_generator_traits::value_to_yaml(msg.reply, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: saved_path
  {
    out << "saved_path: ";
    rosidl_generator_traits::value_to_yaml(msg.saved_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reply
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reply: ";
    rosidl_generator_traits::value_to_yaml(msg.reply, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: saved_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "saved_path: ";
    rosidl_generator_traits::value_to_yaml(msg.saved_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureImage_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace xterra

namespace rosidl_generator_traits
{

[[deprecated("use xterra::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const xterra::srv::CaptureImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  xterra::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use xterra::srv::to_yaml() instead")]]
inline std::string to_yaml(const xterra::srv::CaptureImage_Response & msg)
{
  return xterra::srv::to_yaml(msg);
}

template<>
inline const char * data_type<xterra::srv::CaptureImage_Response>()
{
  return "xterra::srv::CaptureImage_Response";
}

template<>
inline const char * name<xterra::srv::CaptureImage_Response>()
{
  return "xterra/srv/CaptureImage_Response";
}

template<>
struct has_fixed_size<xterra::srv::CaptureImage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<xterra::srv::CaptureImage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<xterra::srv::CaptureImage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<xterra::srv::CaptureImage>()
{
  return "xterra::srv::CaptureImage";
}

template<>
inline const char * name<xterra::srv::CaptureImage>()
{
  return "xterra/srv/CaptureImage";
}

template<>
struct has_fixed_size<xterra::srv::CaptureImage>
  : std::integral_constant<
    bool,
    has_fixed_size<xterra::srv::CaptureImage_Request>::value &&
    has_fixed_size<xterra::srv::CaptureImage_Response>::value
  >
{
};

template<>
struct has_bounded_size<xterra::srv::CaptureImage>
  : std::integral_constant<
    bool,
    has_bounded_size<xterra::srv::CaptureImage_Request>::value &&
    has_bounded_size<xterra::srv::CaptureImage_Response>::value
  >
{
};

template<>
struct is_service<xterra::srv::CaptureImage>
  : std::true_type
{
};

template<>
struct is_service_request<xterra::srv::CaptureImage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<xterra::srv::CaptureImage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // XTERRA__SRV__DETAIL__CAPTURE_IMAGE__TRAITS_HPP_
