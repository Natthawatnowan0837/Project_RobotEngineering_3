// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_command_pkg:srv/SendPosition.idl
// generated code does not contain a copyright notice

#ifndef MY_COMMAND_PKG__SRV__DETAIL__SEND_POSITION__STRUCT_HPP_
#define MY_COMMAND_PKG__SRV__DETAIL__SEND_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_command_pkg__srv__SendPosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_command_pkg__srv__SendPosition_Request __declspec(deprecated)
#endif

namespace my_command_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendPosition_Request_
{
  using Type = SendPosition_Request_<ContainerAllocator>;

  explicit SendPosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->send_x = 0l;
      this->send_y = 0l;
      this->send_z = 0l;
    }
  }

  explicit SendPosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->send_x = 0l;
      this->send_y = 0l;
      this->send_z = 0l;
    }
  }

  // field types and members
  using _send_x_type =
    int32_t;
  _send_x_type send_x;
  using _send_y_type =
    int32_t;
  _send_y_type send_y;
  using _send_z_type =
    int32_t;
  _send_z_type send_z;

  // setters for named parameter idiom
  Type & set__send_x(
    const int32_t & _arg)
  {
    this->send_x = _arg;
    return *this;
  }
  Type & set__send_y(
    const int32_t & _arg)
  {
    this->send_y = _arg;
    return *this;
  }
  Type & set__send_z(
    const int32_t & _arg)
  {
    this->send_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_command_pkg::srv::SendPosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_command_pkg::srv::SendPosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_command_pkg::srv::SendPosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_command_pkg::srv::SendPosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_command_pkg::srv::SendPosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_command_pkg::srv::SendPosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_command_pkg::srv::SendPosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_command_pkg::srv::SendPosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_command_pkg::srv::SendPosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_command_pkg::srv::SendPosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_command_pkg__srv__SendPosition_Request
    std::shared_ptr<my_command_pkg::srv::SendPosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_command_pkg__srv__SendPosition_Request
    std::shared_ptr<my_command_pkg::srv::SendPosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendPosition_Request_ & other) const
  {
    if (this->send_x != other.send_x) {
      return false;
    }
    if (this->send_y != other.send_y) {
      return false;
    }
    if (this->send_z != other.send_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendPosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendPosition_Request_

// alias to use template instance with default allocator
using SendPosition_Request =
  my_command_pkg::srv::SendPosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_command_pkg


#ifndef _WIN32
# define DEPRECATED__my_command_pkg__srv__SendPosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_command_pkg__srv__SendPosition_Response __declspec(deprecated)
#endif

namespace my_command_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendPosition_Response_
{
  using Type = SendPosition_Response_<ContainerAllocator>;

  explicit SendPosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  explicit SendPosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_command_pkg::srv::SendPosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_command_pkg::srv::SendPosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_command_pkg::srv::SendPosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_command_pkg::srv::SendPosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_command_pkg::srv::SendPosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_command_pkg::srv::SendPosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_command_pkg::srv::SendPosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_command_pkg::srv::SendPosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_command_pkg::srv::SendPosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_command_pkg::srv::SendPosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_command_pkg__srv__SendPosition_Response
    std::shared_ptr<my_command_pkg::srv::SendPosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_command_pkg__srv__SendPosition_Response
    std::shared_ptr<my_command_pkg::srv::SendPosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendPosition_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendPosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendPosition_Response_

// alias to use template instance with default allocator
using SendPosition_Response =
  my_command_pkg::srv::SendPosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_command_pkg

namespace my_command_pkg
{

namespace srv
{

struct SendPosition
{
  using Request = my_command_pkg::srv::SendPosition_Request;
  using Response = my_command_pkg::srv::SendPosition_Response;
};

}  // namespace srv

}  // namespace my_command_pkg

#endif  // MY_COMMAND_PKG__SRV__DETAIL__SEND_POSITION__STRUCT_HPP_
