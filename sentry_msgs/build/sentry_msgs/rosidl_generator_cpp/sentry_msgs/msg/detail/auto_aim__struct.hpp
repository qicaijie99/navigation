// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentry_msgs:msg/AutoAIM.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__AUTO_AIM__STRUCT_HPP_
#define SENTRY_MSGS__MSG__DETAIL__AUTO_AIM__STRUCT_HPP_

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
# define DEPRECATED__sentry_msgs__msg__AutoAIM __attribute__((deprecated))
#else
# define DEPRECATED__sentry_msgs__msg__AutoAIM __declspec(deprecated)
#endif

namespace sentry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AutoAIM_
{
  using Type = AutoAIM_<ContainerAllocator>;

  explicit AutoAIM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->target_id = 0;
      this->target_distance = 0.0f;
      this->vision_mode = 0;
    }
  }

  explicit AutoAIM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      this->target_id = 0;
      this->target_distance = 0.0f;
      this->vision_mode = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _target_id_type =
    uint8_t;
  _target_id_type target_id;
  using _target_distance_type =
    float;
  _target_distance_type target_distance;
  using _vision_mode_type =
    uint8_t;
  _vision_mode_type vision_mode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__target_id(
    const uint8_t & _arg)
  {
    this->target_id = _arg;
    return *this;
  }
  Type & set__target_distance(
    const float & _arg)
  {
    this->target_distance = _arg;
    return *this;
  }
  Type & set__vision_mode(
    const uint8_t & _arg)
  {
    this->vision_mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TARGET_ID0_NONE =
    0u;
  static constexpr uint8_t TARGET_ID1_HERO =
    1u;
  static constexpr uint8_t TARGET_ID2_ENGINEER =
    2u;
  static constexpr uint8_t TARGET_ID3_INFANTRY =
    3u;
  static constexpr uint8_t TARGET_ID4_INFANTRY =
    4u;
  static constexpr uint8_t TARGET_ID5_INFANTRY =
    5u;
  static constexpr uint8_t TARGET_ID6_OUTPOST =
    6u;
  static constexpr uint8_t TARGET_ID7_SENTRY =
    7u;
  static constexpr uint8_t VISION_MODE_ARMOR =
    1u;
  static constexpr uint8_t VISION_MODE_SMALL =
    2u;
  static constexpr uint8_t VISION_MODE_BIG =
    3u;
  static constexpr uint8_t VISION_MODE_TAG =
    4u;

  // pointer types
  using RawPtr =
    sentry_msgs::msg::AutoAIM_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_msgs::msg::AutoAIM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_msgs::msg::AutoAIM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_msgs::msg::AutoAIM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::AutoAIM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::AutoAIM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::AutoAIM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::AutoAIM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_msgs::msg::AutoAIM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_msgs::msg::AutoAIM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_msgs__msg__AutoAIM
    std::shared_ptr<sentry_msgs::msg::AutoAIM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_msgs__msg__AutoAIM
    std::shared_ptr<sentry_msgs::msg::AutoAIM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoAIM_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->target_id != other.target_id) {
      return false;
    }
    if (this->target_distance != other.target_distance) {
      return false;
    }
    if (this->vision_mode != other.vision_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoAIM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoAIM_

// alias to use template instance with default allocator
using AutoAIM =
  sentry_msgs::msg::AutoAIM_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoAIM_<ContainerAllocator>::TARGET_ID0_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoAIM_<ContainerAllocator>::TARGET_ID1_HERO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoAIM_<ContainerAllocator>::TARGET_ID2_ENGINEER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoAIM_<ContainerAllocator>::TARGET_ID3_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoAIM_<ContainerAllocator>::TARGET_ID4_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoAIM_<ContainerAllocator>::TARGET_ID5_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoAIM_<ContainerAllocator>::TARGET_ID6_OUTPOST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoAIM_<ContainerAllocator>::TARGET_ID7_SENTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoAIM_<ContainerAllocator>::VISION_MODE_ARMOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoAIM_<ContainerAllocator>::VISION_MODE_SMALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoAIM_<ContainerAllocator>::VISION_MODE_BIG;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutoAIM_<ContainerAllocator>::VISION_MODE_TAG;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__AUTO_AIM__STRUCT_HPP_
