// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentry_msgs:msg/ClientReceive.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__CLIENT_RECEIVE__STRUCT_HPP_
#define SENTRY_MSGS__MSG__DETAIL__CLIENT_RECEIVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sentry_msgs__msg__ClientReceive __attribute__((deprecated))
#else
# define DEPRECATED__sentry_msgs__msg__ClientReceive __declspec(deprecated)
#endif

namespace sentry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClientReceive_
{
  using Type = ClientReceive_<ContainerAllocator>;

  explicit ClientReceive_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_position_x = 0.0f;
      this->target_position_y = 0.0f;
      this->target_robot_id = 0;
    }
  }

  explicit ClientReceive_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_position_x = 0.0f;
      this->target_position_y = 0.0f;
      this->target_robot_id = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _target_position_x_type =
    float;
  _target_position_x_type target_position_x;
  using _target_position_y_type =
    float;
  _target_position_y_type target_position_y;
  using _target_robot_id_type =
    uint16_t;
  _target_robot_id_type target_robot_id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__target_position_x(
    const float & _arg)
  {
    this->target_position_x = _arg;
    return *this;
  }
  Type & set__target_position_y(
    const float & _arg)
  {
    this->target_position_y = _arg;
    return *this;
  }
  Type & set__target_robot_id(
    const uint16_t & _arg)
  {
    this->target_robot_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t TARGET_ROBOT_ID_RED1_HERO =
    1u;
  static constexpr uint16_t TARGET_ROBOT_ID_RED2_ENGINEER =
    2u;
  static constexpr uint16_t TARGET_ROBOT_ID_RED3_INFANTRY =
    3u;
  static constexpr uint16_t TARGET_ROBOT_ID_RED4_INFANTRY =
    4u;
  static constexpr uint16_t TARGET_ROBOT_ID_RED5_INFANTRY =
    5u;
  static constexpr uint16_t TARGET_ROBOT_ID_RED6_AERIAL =
    6u;
  static constexpr uint16_t TARGET_ROBOT_ID_RED7_SENTRY =
    7u;
  static constexpr uint16_t TARGET_ROBOT_ID_RED9_RADAR =
    9u;
  static constexpr uint16_t TARGET_ROBOT_ID_RED10_OUTPOST =
    10u;
  static constexpr uint16_t TARGET_ROBOT_ID_RED11_BASE =
    11u;
  static constexpr uint16_t TARGET_ROBOT_ID_BLUE1_HERO =
    101u;
  static constexpr uint16_t TARGET_ROBOT_ID_BLUE2_ENGINEER =
    102u;
  static constexpr uint16_t TARGET_ROBOT_ID_BLUE3_INFANTRY =
    103u;
  static constexpr uint16_t TARGET_ROBOT_ID_BLUE4_INFANTRY =
    104u;
  static constexpr uint16_t TARGET_ROBOT_ID_BLUE5_INFANTRY =
    105u;
  static constexpr uint16_t TARGET_ROBOT_ID_BLUE6_AERIAL =
    106u;
  static constexpr uint16_t TARGET_ROBOT_ID_BLUE7_SENTRY =
    107u;
  static constexpr uint16_t TARGET_ROBOT_ID_BLUE9_RADAR =
    109u;
  static constexpr uint16_t TARGET_ROBOT_ID_BLUE10_OUTPOST =
    110u;
  static constexpr uint16_t TARGET_ROBOT_ID_BLUE11_BASE =
    111u;

  // pointer types
  using RawPtr =
    sentry_msgs::msg::ClientReceive_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_msgs::msg::ClientReceive_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_msgs::msg::ClientReceive_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_msgs::msg::ClientReceive_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::ClientReceive_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::ClientReceive_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::ClientReceive_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::ClientReceive_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_msgs::msg::ClientReceive_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_msgs::msg::ClientReceive_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_msgs__msg__ClientReceive
    std::shared_ptr<sentry_msgs::msg::ClientReceive_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_msgs__msg__ClientReceive
    std::shared_ptr<sentry_msgs::msg::ClientReceive_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClientReceive_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->target_position_x != other.target_position_x) {
      return false;
    }
    if (this->target_position_y != other.target_position_y) {
      return false;
    }
    if (this->target_robot_id != other.target_robot_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClientReceive_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClientReceive_

// alias to use template instance with default allocator
using ClientReceive =
  sentry_msgs::msg::ClientReceive_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_RED1_HERO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_RED2_ENGINEER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_RED3_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_RED4_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_RED5_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_RED6_AERIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_RED7_SENTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_RED9_RADAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_RED10_OUTPOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_RED11_BASE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_BLUE1_HERO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_BLUE2_ENGINEER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_BLUE3_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_BLUE4_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_BLUE5_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_BLUE6_AERIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_BLUE7_SENTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_BLUE9_RADAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_BLUE10_OUTPOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ClientReceive_<ContainerAllocator>::TARGET_ROBOT_ID_BLUE11_BASE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__CLIENT_RECEIVE__STRUCT_HPP_
