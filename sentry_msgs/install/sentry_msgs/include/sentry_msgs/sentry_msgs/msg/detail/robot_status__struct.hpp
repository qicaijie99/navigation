// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentry_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
#define SENTRY_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_

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
# define DEPRECATED__sentry_msgs__msg__RobotStatus __attribute__((deprecated))
#else
# define DEPRECATED__sentry_msgs__msg__RobotStatus __declspec(deprecated)
#endif

namespace sentry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotStatus_
{
  using Type = RobotStatus_<ContainerAllocator>;

  explicit RobotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0;
      this->robot_level = 0;
      this->remain_hp = 0;
      this->max_hp = 0;
      this->shooter_17mm_id1_cooling_rate = 0;
      this->shooter_17mm_id1_cooling_limit = 0;
      this->shooter_17mm_id1_speed_limit = 0;
      this->shooter_17mm_id2_cooling_rate = 0;
      this->shooter_17mm_id2_cooling_limit = 0;
      this->shooter_17mm_id2_speed_limit = 0;
      this->shooter_42mm_id1_cooling_rate = 0;
      this->shooter_42mm_id1_cooling_limit = 0;
      this->shooter_42mm_id1_speed_limit = 0;
      this->chassis_power_limit = 0;
      this->gimbal_power_output = false;
      this->chassis_power_output = false;
      this->shooter_power_output = false;
    }
  }

  explicit RobotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0;
      this->robot_level = 0;
      this->remain_hp = 0;
      this->max_hp = 0;
      this->shooter_17mm_id1_cooling_rate = 0;
      this->shooter_17mm_id1_cooling_limit = 0;
      this->shooter_17mm_id1_speed_limit = 0;
      this->shooter_17mm_id2_cooling_rate = 0;
      this->shooter_17mm_id2_cooling_limit = 0;
      this->shooter_17mm_id2_speed_limit = 0;
      this->shooter_42mm_id1_cooling_rate = 0;
      this->shooter_42mm_id1_cooling_limit = 0;
      this->shooter_42mm_id1_speed_limit = 0;
      this->chassis_power_limit = 0;
      this->gimbal_power_output = false;
      this->chassis_power_output = false;
      this->shooter_power_output = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _robot_id_type =
    uint8_t;
  _robot_id_type robot_id;
  using _robot_level_type =
    uint8_t;
  _robot_level_type robot_level;
  using _remain_hp_type =
    uint16_t;
  _remain_hp_type remain_hp;
  using _max_hp_type =
    uint16_t;
  _max_hp_type max_hp;
  using _shooter_17mm_id1_cooling_rate_type =
    uint16_t;
  _shooter_17mm_id1_cooling_rate_type shooter_17mm_id1_cooling_rate;
  using _shooter_17mm_id1_cooling_limit_type =
    uint16_t;
  _shooter_17mm_id1_cooling_limit_type shooter_17mm_id1_cooling_limit;
  using _shooter_17mm_id1_speed_limit_type =
    uint16_t;
  _shooter_17mm_id1_speed_limit_type shooter_17mm_id1_speed_limit;
  using _shooter_17mm_id2_cooling_rate_type =
    uint16_t;
  _shooter_17mm_id2_cooling_rate_type shooter_17mm_id2_cooling_rate;
  using _shooter_17mm_id2_cooling_limit_type =
    uint16_t;
  _shooter_17mm_id2_cooling_limit_type shooter_17mm_id2_cooling_limit;
  using _shooter_17mm_id2_speed_limit_type =
    uint16_t;
  _shooter_17mm_id2_speed_limit_type shooter_17mm_id2_speed_limit;
  using _shooter_42mm_id1_cooling_rate_type =
    uint16_t;
  _shooter_42mm_id1_cooling_rate_type shooter_42mm_id1_cooling_rate;
  using _shooter_42mm_id1_cooling_limit_type =
    uint16_t;
  _shooter_42mm_id1_cooling_limit_type shooter_42mm_id1_cooling_limit;
  using _shooter_42mm_id1_speed_limit_type =
    uint16_t;
  _shooter_42mm_id1_speed_limit_type shooter_42mm_id1_speed_limit;
  using _chassis_power_limit_type =
    uint16_t;
  _chassis_power_limit_type chassis_power_limit;
  using _gimbal_power_output_type =
    bool;
  _gimbal_power_output_type gimbal_power_output;
  using _chassis_power_output_type =
    bool;
  _chassis_power_output_type chassis_power_output;
  using _shooter_power_output_type =
    bool;
  _shooter_power_output_type shooter_power_output;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__robot_id(
    const uint8_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__robot_level(
    const uint8_t & _arg)
  {
    this->robot_level = _arg;
    return *this;
  }
  Type & set__remain_hp(
    const uint16_t & _arg)
  {
    this->remain_hp = _arg;
    return *this;
  }
  Type & set__max_hp(
    const uint16_t & _arg)
  {
    this->max_hp = _arg;
    return *this;
  }
  Type & set__shooter_17mm_id1_cooling_rate(
    const uint16_t & _arg)
  {
    this->shooter_17mm_id1_cooling_rate = _arg;
    return *this;
  }
  Type & set__shooter_17mm_id1_cooling_limit(
    const uint16_t & _arg)
  {
    this->shooter_17mm_id1_cooling_limit = _arg;
    return *this;
  }
  Type & set__shooter_17mm_id1_speed_limit(
    const uint16_t & _arg)
  {
    this->shooter_17mm_id1_speed_limit = _arg;
    return *this;
  }
  Type & set__shooter_17mm_id2_cooling_rate(
    const uint16_t & _arg)
  {
    this->shooter_17mm_id2_cooling_rate = _arg;
    return *this;
  }
  Type & set__shooter_17mm_id2_cooling_limit(
    const uint16_t & _arg)
  {
    this->shooter_17mm_id2_cooling_limit = _arg;
    return *this;
  }
  Type & set__shooter_17mm_id2_speed_limit(
    const uint16_t & _arg)
  {
    this->shooter_17mm_id2_speed_limit = _arg;
    return *this;
  }
  Type & set__shooter_42mm_id1_cooling_rate(
    const uint16_t & _arg)
  {
    this->shooter_42mm_id1_cooling_rate = _arg;
    return *this;
  }
  Type & set__shooter_42mm_id1_cooling_limit(
    const uint16_t & _arg)
  {
    this->shooter_42mm_id1_cooling_limit = _arg;
    return *this;
  }
  Type & set__shooter_42mm_id1_speed_limit(
    const uint16_t & _arg)
  {
    this->shooter_42mm_id1_speed_limit = _arg;
    return *this;
  }
  Type & set__chassis_power_limit(
    const uint16_t & _arg)
  {
    this->chassis_power_limit = _arg;
    return *this;
  }
  Type & set__gimbal_power_output(
    const bool & _arg)
  {
    this->gimbal_power_output = _arg;
    return *this;
  }
  Type & set__chassis_power_output(
    const bool & _arg)
  {
    this->chassis_power_output = _arg;
    return *this;
  }
  Type & set__shooter_power_output(
    const bool & _arg)
  {
    this->shooter_power_output = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ROBOT_ID_RED1_HERO =
    1u;
  static constexpr uint8_t ROBOT_ID_RED2_ENGINEER =
    2u;
  static constexpr uint8_t ROBOT_ID_RED3_INFANTRY =
    3u;
  static constexpr uint8_t ROBOT_ID_RED4_INFANTRY =
    4u;
  static constexpr uint8_t ROBOT_ID_RED5_INFANTRY =
    5u;
  static constexpr uint8_t ROBOT_ID_RED6_AERIAL =
    6u;
  static constexpr uint8_t ROBOT_ID_RED7_SENTRY =
    7u;
  static constexpr uint8_t ROBOT_ID_RED8_DART =
    8u;
  static constexpr uint8_t ROBOT_ID_RED9_RADAR =
    9u;
  static constexpr uint8_t ROBOT_ID_BLUE1_HERO =
    101u;
  static constexpr uint8_t ROBOT_ID_BLUE2_ENGINEER =
    102u;
  static constexpr uint8_t ROBOT_ID_BLUE3_INFANTRY =
    103u;
  static constexpr uint8_t ROBOT_ID_BLUE4_INFANTRY =
    104u;
  static constexpr uint8_t ROBOT_ID_BLUE5_INFANTRY =
    105u;
  static constexpr uint8_t ROBOT_ID_BLUE6_AERIAL =
    106u;
  static constexpr uint8_t ROBOT_ID_BLUE7_SENTRY =
    107u;
  static constexpr uint8_t ROBOT_ID_BLUE8_DART =
    108u;
  static constexpr uint8_t ROBOT_ID_BLUE9_RADAR =
    109u;

  // pointer types
  using RawPtr =
    sentry_msgs::msg::RobotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_msgs::msg::RobotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_msgs::msg::RobotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_msgs::msg::RobotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::RobotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::RobotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::RobotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::RobotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_msgs::msg::RobotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_msgs::msg::RobotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_msgs__msg__RobotStatus
    std::shared_ptr<sentry_msgs::msg::RobotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_msgs__msg__RobotStatus
    std::shared_ptr<sentry_msgs::msg::RobotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->robot_level != other.robot_level) {
      return false;
    }
    if (this->remain_hp != other.remain_hp) {
      return false;
    }
    if (this->max_hp != other.max_hp) {
      return false;
    }
    if (this->shooter_17mm_id1_cooling_rate != other.shooter_17mm_id1_cooling_rate) {
      return false;
    }
    if (this->shooter_17mm_id1_cooling_limit != other.shooter_17mm_id1_cooling_limit) {
      return false;
    }
    if (this->shooter_17mm_id1_speed_limit != other.shooter_17mm_id1_speed_limit) {
      return false;
    }
    if (this->shooter_17mm_id2_cooling_rate != other.shooter_17mm_id2_cooling_rate) {
      return false;
    }
    if (this->shooter_17mm_id2_cooling_limit != other.shooter_17mm_id2_cooling_limit) {
      return false;
    }
    if (this->shooter_17mm_id2_speed_limit != other.shooter_17mm_id2_speed_limit) {
      return false;
    }
    if (this->shooter_42mm_id1_cooling_rate != other.shooter_42mm_id1_cooling_rate) {
      return false;
    }
    if (this->shooter_42mm_id1_cooling_limit != other.shooter_42mm_id1_cooling_limit) {
      return false;
    }
    if (this->shooter_42mm_id1_speed_limit != other.shooter_42mm_id1_speed_limit) {
      return false;
    }
    if (this->chassis_power_limit != other.chassis_power_limit) {
      return false;
    }
    if (this->gimbal_power_output != other.gimbal_power_output) {
      return false;
    }
    if (this->chassis_power_output != other.chassis_power_output) {
      return false;
    }
    if (this->shooter_power_output != other.shooter_power_output) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotStatus_

// alias to use template instance with default allocator
using RobotStatus =
  sentry_msgs::msg::RobotStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_RED1_HERO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_RED2_ENGINEER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_RED3_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_RED4_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_RED5_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_RED6_AERIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_RED7_SENTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_RED8_DART;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_RED9_RADAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_BLUE1_HERO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_BLUE2_ENGINEER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_BLUE3_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_BLUE4_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_BLUE5_INFANTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_BLUE6_AERIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_BLUE7_SENTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_BLUE8_DART;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RobotStatus_<ContainerAllocator>::ROBOT_ID_BLUE9_RADAR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
