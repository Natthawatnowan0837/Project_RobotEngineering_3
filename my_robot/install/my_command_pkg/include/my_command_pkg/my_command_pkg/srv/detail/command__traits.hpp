// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_command_pkg:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef MY_COMMAND_PKG__SRV__DETAIL__COMMAND__TRAITS_HPP_
#define MY_COMMAND_PKG__SRV__DETAIL__COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_command_pkg/srv/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_command_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const Command_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Command_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Command_Request & msg, bool use_flow_style = false)
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
  const my_command_pkg::srv::Command_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_command_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_command_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_command_pkg::srv::Command_Request & msg)
{
  return my_command_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_command_pkg::srv::Command_Request>()
{
  return "my_command_pkg::srv::Command_Request";
}

template<>
inline const char * name<my_command_pkg::srv::Command_Request>()
{
  return "my_command_pkg/srv/Command_Request";
}

template<>
struct has_fixed_size<my_command_pkg::srv::Command_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_command_pkg::srv::Command_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_command_pkg::srv::Command_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_command_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const Command_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos_x
  {
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << ", ";
  }

  // member: pos_y
  {
    out << "pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_y, out);
    out << ", ";
  }

  // member: pos_z
  {
    out << "pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Command_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << "\n";
  }

  // member: pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_y, out);
    out << "\n";
  }

  // member: pos_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Command_Response & msg, bool use_flow_style = false)
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
  const my_command_pkg::srv::Command_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_command_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_command_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_command_pkg::srv::Command_Response & msg)
{
  return my_command_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_command_pkg::srv::Command_Response>()
{
  return "my_command_pkg::srv::Command_Response";
}

template<>
inline const char * name<my_command_pkg::srv::Command_Response>()
{
  return "my_command_pkg/srv/Command_Response";
}

template<>
struct has_fixed_size<my_command_pkg::srv::Command_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_command_pkg::srv::Command_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_command_pkg::srv::Command_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_command_pkg::srv::Command>()
{
  return "my_command_pkg::srv::Command";
}

template<>
inline const char * name<my_command_pkg::srv::Command>()
{
  return "my_command_pkg/srv/Command";
}

template<>
struct has_fixed_size<my_command_pkg::srv::Command>
  : std::integral_constant<
    bool,
    has_fixed_size<my_command_pkg::srv::Command_Request>::value &&
    has_fixed_size<my_command_pkg::srv::Command_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_command_pkg::srv::Command>
  : std::integral_constant<
    bool,
    has_bounded_size<my_command_pkg::srv::Command_Request>::value &&
    has_bounded_size<my_command_pkg::srv::Command_Response>::value
  >
{
};

template<>
struct is_service<my_command_pkg::srv::Command>
  : std::true_type
{
};

template<>
struct is_service_request<my_command_pkg::srv::Command_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_command_pkg::srv::Command_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_COMMAND_PKG__SRV__DETAIL__COMMAND__TRAITS_HPP_
