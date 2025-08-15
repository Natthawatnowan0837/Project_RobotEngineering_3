// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_command_pkg:srv/SendPosition.idl
// generated code does not contain a copyright notice

#ifndef MY_COMMAND_PKG__SRV__DETAIL__SEND_POSITION__TRAITS_HPP_
#define MY_COMMAND_PKG__SRV__DETAIL__SEND_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_command_pkg/srv/detail/send_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_command_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: send_x
  {
    out << "send_x: ";
    rosidl_generator_traits::value_to_yaml(msg.send_x, out);
    out << ", ";
  }

  // member: send_y
  {
    out << "send_y: ";
    rosidl_generator_traits::value_to_yaml(msg.send_y, out);
    out << ", ";
  }

  // member: send_z
  {
    out << "send_z: ";
    rosidl_generator_traits::value_to_yaml(msg.send_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: send_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "send_x: ";
    rosidl_generator_traits::value_to_yaml(msg.send_x, out);
    out << "\n";
  }

  // member: send_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "send_y: ";
    rosidl_generator_traits::value_to_yaml(msg.send_y, out);
    out << "\n";
  }

  // member: send_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "send_z: ";
    rosidl_generator_traits::value_to_yaml(msg.send_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendPosition_Request & msg, bool use_flow_style = false)
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

}  // namespace my_command_pkg

namespace rosidl_generator_traits
{

[[deprecated("use my_command_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_command_pkg::srv::SendPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_command_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_command_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_command_pkg::srv::SendPosition_Request & msg)
{
  return my_command_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_command_pkg::srv::SendPosition_Request>()
{
  return "my_command_pkg::srv::SendPosition_Request";
}

template<>
inline const char * name<my_command_pkg::srv::SendPosition_Request>()
{
  return "my_command_pkg/srv/SendPosition_Request";
}

template<>
struct has_fixed_size<my_command_pkg::srv::SendPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_command_pkg::srv::SendPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_command_pkg::srv::SendPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_command_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendPosition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendPosition_Response & msg, bool use_flow_style = false)
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

}  // namespace my_command_pkg

namespace rosidl_generator_traits
{

[[deprecated("use my_command_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_command_pkg::srv::SendPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_command_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_command_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_command_pkg::srv::SendPosition_Response & msg)
{
  return my_command_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_command_pkg::srv::SendPosition_Response>()
{
  return "my_command_pkg::srv::SendPosition_Response";
}

template<>
inline const char * name<my_command_pkg::srv::SendPosition_Response>()
{
  return "my_command_pkg/srv/SendPosition_Response";
}

template<>
struct has_fixed_size<my_command_pkg::srv::SendPosition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_command_pkg::srv::SendPosition_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_command_pkg::srv::SendPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_command_pkg::srv::SendPosition>()
{
  return "my_command_pkg::srv::SendPosition";
}

template<>
inline const char * name<my_command_pkg::srv::SendPosition>()
{
  return "my_command_pkg/srv/SendPosition";
}

template<>
struct has_fixed_size<my_command_pkg::srv::SendPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<my_command_pkg::srv::SendPosition_Request>::value &&
    has_fixed_size<my_command_pkg::srv::SendPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_command_pkg::srv::SendPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<my_command_pkg::srv::SendPosition_Request>::value &&
    has_bounded_size<my_command_pkg::srv::SendPosition_Response>::value
  >
{
};

template<>
struct is_service<my_command_pkg::srv::SendPosition>
  : std::true_type
{
};

template<>
struct is_service_request<my_command_pkg::srv::SendPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_command_pkg::srv::SendPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_COMMAND_PKG__SRV__DETAIL__SEND_POSITION__TRAITS_HPP_
