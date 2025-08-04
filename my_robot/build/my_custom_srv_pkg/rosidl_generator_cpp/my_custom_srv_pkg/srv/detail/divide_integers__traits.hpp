// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_custom_srv_pkg:srv/DivideIntegers.idl
// generated code does not contain a copyright notice

#ifndef MY_CUSTOM_SRV_PKG__SRV__DETAIL__DIVIDE_INTEGERS__TRAITS_HPP_
#define MY_CUSTOM_SRV_PKG__SRV__DETAIL__DIVIDE_INTEGERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_custom_srv_pkg/srv/detail/divide_integers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_custom_srv_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const DivideIntegers_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: dividend
  {
    out << "dividend: ";
    rosidl_generator_traits::value_to_yaml(msg.dividend, out);
    out << ", ";
  }

  // member: divisor
  {
    out << "divisor: ";
    rosidl_generator_traits::value_to_yaml(msg.divisor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DivideIntegers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dividend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dividend: ";
    rosidl_generator_traits::value_to_yaml(msg.dividend, out);
    out << "\n";
  }

  // member: divisor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "divisor: ";
    rosidl_generator_traits::value_to_yaml(msg.divisor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DivideIntegers_Request & msg, bool use_flow_style = false)
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

}  // namespace my_custom_srv_pkg

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_srv_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_srv_pkg::srv::DivideIntegers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_srv_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_srv_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_srv_pkg::srv::DivideIntegers_Request & msg)
{
  return my_custom_srv_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_srv_pkg::srv::DivideIntegers_Request>()
{
  return "my_custom_srv_pkg::srv::DivideIntegers_Request";
}

template<>
inline const char * name<my_custom_srv_pkg::srv::DivideIntegers_Request>()
{
  return "my_custom_srv_pkg/srv/DivideIntegers_Request";
}

template<>
struct has_fixed_size<my_custom_srv_pkg::srv::DivideIntegers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_custom_srv_pkg::srv::DivideIntegers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_custom_srv_pkg::srv::DivideIntegers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace my_custom_srv_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const DivideIntegers_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DivideIntegers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DivideIntegers_Response & msg, bool use_flow_style = false)
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

}  // namespace my_custom_srv_pkg

namespace rosidl_generator_traits
{

[[deprecated("use my_custom_srv_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_custom_srv_pkg::srv::DivideIntegers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_custom_srv_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_custom_srv_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const my_custom_srv_pkg::srv::DivideIntegers_Response & msg)
{
  return my_custom_srv_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<my_custom_srv_pkg::srv::DivideIntegers_Response>()
{
  return "my_custom_srv_pkg::srv::DivideIntegers_Response";
}

template<>
inline const char * name<my_custom_srv_pkg::srv::DivideIntegers_Response>()
{
  return "my_custom_srv_pkg/srv/DivideIntegers_Response";
}

template<>
struct has_fixed_size<my_custom_srv_pkg::srv::DivideIntegers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_custom_srv_pkg::srv::DivideIntegers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_custom_srv_pkg::srv::DivideIntegers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_custom_srv_pkg::srv::DivideIntegers>()
{
  return "my_custom_srv_pkg::srv::DivideIntegers";
}

template<>
inline const char * name<my_custom_srv_pkg::srv::DivideIntegers>()
{
  return "my_custom_srv_pkg/srv/DivideIntegers";
}

template<>
struct has_fixed_size<my_custom_srv_pkg::srv::DivideIntegers>
  : std::integral_constant<
    bool,
    has_fixed_size<my_custom_srv_pkg::srv::DivideIntegers_Request>::value &&
    has_fixed_size<my_custom_srv_pkg::srv::DivideIntegers_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_custom_srv_pkg::srv::DivideIntegers>
  : std::integral_constant<
    bool,
    has_bounded_size<my_custom_srv_pkg::srv::DivideIntegers_Request>::value &&
    has_bounded_size<my_custom_srv_pkg::srv::DivideIntegers_Response>::value
  >
{
};

template<>
struct is_service<my_custom_srv_pkg::srv::DivideIntegers>
  : std::true_type
{
};

template<>
struct is_service_request<my_custom_srv_pkg::srv::DivideIntegers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_custom_srv_pkg::srv::DivideIntegers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_CUSTOM_SRV_PKG__SRV__DETAIL__DIVIDE_INTEGERS__TRAITS_HPP_
