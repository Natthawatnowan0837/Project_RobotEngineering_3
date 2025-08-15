// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_command_pkg:srv/Command.idl
// generated code does not contain a copyright notice

#ifndef MY_COMMAND_PKG__SRV__DETAIL__COMMAND__STRUCT_HPP_
#define MY_COMMAND_PKG__SRV__DETAIL__COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_command_pkg__srv__Command_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_command_pkg__srv__Command_Request __declspec(deprecated)
#endif

namespace my_command_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Command_Request_
{
  using Type = Command_Request_<ContainerAllocator>;

  explicit Command_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  explicit Command_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_command_pkg::srv::Command_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_command_pkg::srv::Command_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_command_pkg::srv::Command_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_command_pkg::srv::Command_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_command_pkg::srv::Command_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_command_pkg::srv::Command_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_command_pkg::srv::Command_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_command_pkg::srv::Command_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_command_pkg::srv::Command_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_command_pkg::srv::Command_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_command_pkg__srv__Command_Request
    std::shared_ptr<my_command_pkg::srv::Command_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_command_pkg__srv__Command_Request
    std::shared_ptr<my_command_pkg::srv::Command_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_Request_

// alias to use template instance with default allocator
using Command_Request =
  my_command_pkg::srv::Command_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_command_pkg


#ifndef _WIN32
# define DEPRECATED__my_command_pkg__srv__Command_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_command_pkg__srv__Command_Response __declspec(deprecated)
#endif

namespace my_command_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Command_Response_
{
  using Type = Command_Response_<ContainerAllocator>;

  explicit Command_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0l;
      this->pos_y = 0l;
      this->pos_z = 0l;
    }
  }

  explicit Command_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pos_x = 0l;
      this->pos_y = 0l;
      this->pos_z = 0l;
    }
  }

  // field types and members
  using _pos_x_type =
    int32_t;
  _pos_x_type pos_x;
  using _pos_y_type =
    int32_t;
  _pos_y_type pos_y;
  using _pos_z_type =
    int32_t;
  _pos_z_type pos_z;

  // setters for named parameter idiom
  Type & set__pos_x(
    const int32_t & _arg)
  {
    this->pos_x = _arg;
    return *this;
  }
  Type & set__pos_y(
    const int32_t & _arg)
  {
    this->pos_y = _arg;
    return *this;
  }
  Type & set__pos_z(
    const int32_t & _arg)
  {
    this->pos_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_command_pkg::srv::Command_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_command_pkg::srv::Command_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_command_pkg::srv::Command_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_command_pkg::srv::Command_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_command_pkg::srv::Command_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_command_pkg::srv::Command_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_command_pkg::srv::Command_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_command_pkg::srv::Command_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_command_pkg::srv::Command_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_command_pkg::srv::Command_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_command_pkg__srv__Command_Response
    std::shared_ptr<my_command_pkg::srv::Command_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_command_pkg__srv__Command_Response
    std::shared_ptr<my_command_pkg::srv::Command_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Command_Response_ & other) const
  {
    if (this->pos_x != other.pos_x) {
      return false;
    }
    if (this->pos_y != other.pos_y) {
      return false;
    }
    if (this->pos_z != other.pos_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Command_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Command_Response_

// alias to use template instance with default allocator
using Command_Response =
  my_command_pkg::srv::Command_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_command_pkg

namespace my_command_pkg
{

namespace srv
{

struct Command
{
  using Request = my_command_pkg::srv::Command_Request;
  using Response = my_command_pkg::srv::Command_Response;
};

}  // namespace srv

}  // namespace my_command_pkg

#endif  // MY_COMMAND_PKG__SRV__DETAIL__COMMAND__STRUCT_HPP_
