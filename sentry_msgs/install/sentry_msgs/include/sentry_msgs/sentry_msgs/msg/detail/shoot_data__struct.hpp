// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentry_msgs:msg/ShootData.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__SHOOT_DATA__STRUCT_HPP_
#define SENTRY_MSGS__MSG__DETAIL__SHOOT_DATA__STRUCT_HPP_

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
# define DEPRECATED__sentry_msgs__msg__ShootData __attribute__((deprecated))
#else
# define DEPRECATED__sentry_msgs__msg__ShootData __declspec(deprecated)
#endif

namespace sentry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ShootData_
{
  using Type = ShootData_<ContainerAllocator>;

  explicit ShootData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bullet_type = 0;
      this->shooter_id = 0;
      this->bullet_freq = 0;
      this->bullet_speed = 0.0f;
    }
  }

  explicit ShootData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bullet_type = 0;
      this->shooter_id = 0;
      this->bullet_freq = 0;
      this->bullet_speed = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _bullet_type_type =
    uint8_t;
  _bullet_type_type bullet_type;
  using _shooter_id_type =
    uint8_t;
  _shooter_id_type shooter_id;
  using _bullet_freq_type =
    uint8_t;
  _bullet_freq_type bullet_freq;
  using _bullet_speed_type =
    float;
  _bullet_speed_type bullet_speed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__bullet_type(
    const uint8_t & _arg)
  {
    this->bullet_type = _arg;
    return *this;
  }
  Type & set__shooter_id(
    const uint8_t & _arg)
  {
    this->shooter_id = _arg;
    return *this;
  }
  Type & set__bullet_freq(
    const uint8_t & _arg)
  {
    this->bullet_freq = _arg;
    return *this;
  }
  Type & set__bullet_speed(
    const float & _arg)
  {
    this->bullet_speed = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BULLET_TYPE_17MM =
    1u;
  static constexpr uint8_t BULLET_TYPE_42MM =
    2u;
  static constexpr uint8_t SHOOTER_ID_17MM_ID1 =
    1u;
  static constexpr uint8_t SHOOTER_ID_17MM_ID2 =
    2u;
  static constexpr uint8_t SHOOTER_ID_42MM_ID1 =
    3u;

  // pointer types
  using RawPtr =
    sentry_msgs::msg::ShootData_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_msgs::msg::ShootData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_msgs::msg::ShootData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_msgs::msg::ShootData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::ShootData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::ShootData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::ShootData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::ShootData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_msgs::msg::ShootData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_msgs::msg::ShootData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_msgs__msg__ShootData
    std::shared_ptr<sentry_msgs::msg::ShootData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_msgs__msg__ShootData
    std::shared_ptr<sentry_msgs::msg::ShootData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ShootData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->bullet_type != other.bullet_type) {
      return false;
    }
    if (this->shooter_id != other.shooter_id) {
      return false;
    }
    if (this->bullet_freq != other.bullet_freq) {
      return false;
    }
    if (this->bullet_speed != other.bullet_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const ShootData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ShootData_

// alias to use template instance with default allocator
using ShootData =
  sentry_msgs::msg::ShootData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ShootData_<ContainerAllocator>::BULLET_TYPE_17MM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ShootData_<ContainerAllocator>::BULLET_TYPE_42MM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ShootData_<ContainerAllocator>::SHOOTER_ID_17MM_ID1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ShootData_<ContainerAllocator>::SHOOTER_ID_17MM_ID2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ShootData_<ContainerAllocator>::SHOOTER_ID_42MM_ID1;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__SHOOT_DATA__STRUCT_HPP_
