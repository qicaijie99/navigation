// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sentry_msgs:msg/DR16Receiver.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__DR16_RECEIVER__STRUCT_HPP_
#define SENTRY_MSGS__MSG__DETAIL__DR16_RECEIVER__STRUCT_HPP_

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
# define DEPRECATED__sentry_msgs__msg__DR16Receiver __attribute__((deprecated))
#else
# define DEPRECATED__sentry_msgs__msg__DR16Receiver __declspec(deprecated)
#endif

namespace sentry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DR16Receiver_
{
  using Type = DR16Receiver_<ContainerAllocator>;

  explicit DR16Receiver_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ch_left_x = 0.0f;
      this->ch_left_y = 0.0f;
      this->ch_right_x = 0.0f;
      this->ch_right_y = 0.0f;
      this->ch_wheel = 0.0f;
      this->sw_left = 0;
      this->sw_right = 0;
      this->mouse_x = 0.0f;
      this->mouse_y = 0.0f;
      this->mouse_z = 0.0f;
      this->mouse_press_l = false;
      this->mouse_press_r = false;
      this->key_w = false;
      this->key_s = false;
      this->key_a = false;
      this->key_d = false;
      this->key_shift = false;
      this->key_ctrl = false;
      this->key_q = false;
      this->key_e = false;
      this->key_r = false;
      this->key_f = false;
      this->key_g = false;
      this->key_z = false;
      this->key_x = false;
      this->key_c = false;
      this->key_v = false;
      this->key_b = false;
    }
  }

  explicit DR16Receiver_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ch_left_x = 0.0f;
      this->ch_left_y = 0.0f;
      this->ch_right_x = 0.0f;
      this->ch_right_y = 0.0f;
      this->ch_wheel = 0.0f;
      this->sw_left = 0;
      this->sw_right = 0;
      this->mouse_x = 0.0f;
      this->mouse_y = 0.0f;
      this->mouse_z = 0.0f;
      this->mouse_press_l = false;
      this->mouse_press_r = false;
      this->key_w = false;
      this->key_s = false;
      this->key_a = false;
      this->key_d = false;
      this->key_shift = false;
      this->key_ctrl = false;
      this->key_q = false;
      this->key_e = false;
      this->key_r = false;
      this->key_f = false;
      this->key_g = false;
      this->key_z = false;
      this->key_x = false;
      this->key_c = false;
      this->key_v = false;
      this->key_b = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ch_left_x_type =
    float;
  _ch_left_x_type ch_left_x;
  using _ch_left_y_type =
    float;
  _ch_left_y_type ch_left_y;
  using _ch_right_x_type =
    float;
  _ch_right_x_type ch_right_x;
  using _ch_right_y_type =
    float;
  _ch_right_y_type ch_right_y;
  using _ch_wheel_type =
    float;
  _ch_wheel_type ch_wheel;
  using _sw_left_type =
    uint8_t;
  _sw_left_type sw_left;
  using _sw_right_type =
    uint8_t;
  _sw_right_type sw_right;
  using _mouse_x_type =
    float;
  _mouse_x_type mouse_x;
  using _mouse_y_type =
    float;
  _mouse_y_type mouse_y;
  using _mouse_z_type =
    float;
  _mouse_z_type mouse_z;
  using _mouse_press_l_type =
    bool;
  _mouse_press_l_type mouse_press_l;
  using _mouse_press_r_type =
    bool;
  _mouse_press_r_type mouse_press_r;
  using _key_w_type =
    bool;
  _key_w_type key_w;
  using _key_s_type =
    bool;
  _key_s_type key_s;
  using _key_a_type =
    bool;
  _key_a_type key_a;
  using _key_d_type =
    bool;
  _key_d_type key_d;
  using _key_shift_type =
    bool;
  _key_shift_type key_shift;
  using _key_ctrl_type =
    bool;
  _key_ctrl_type key_ctrl;
  using _key_q_type =
    bool;
  _key_q_type key_q;
  using _key_e_type =
    bool;
  _key_e_type key_e;
  using _key_r_type =
    bool;
  _key_r_type key_r;
  using _key_f_type =
    bool;
  _key_f_type key_f;
  using _key_g_type =
    bool;
  _key_g_type key_g;
  using _key_z_type =
    bool;
  _key_z_type key_z;
  using _key_x_type =
    bool;
  _key_x_type key_x;
  using _key_c_type =
    bool;
  _key_c_type key_c;
  using _key_v_type =
    bool;
  _key_v_type key_v;
  using _key_b_type =
    bool;
  _key_b_type key_b;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ch_left_x(
    const float & _arg)
  {
    this->ch_left_x = _arg;
    return *this;
  }
  Type & set__ch_left_y(
    const float & _arg)
  {
    this->ch_left_y = _arg;
    return *this;
  }
  Type & set__ch_right_x(
    const float & _arg)
  {
    this->ch_right_x = _arg;
    return *this;
  }
  Type & set__ch_right_y(
    const float & _arg)
  {
    this->ch_right_y = _arg;
    return *this;
  }
  Type & set__ch_wheel(
    const float & _arg)
  {
    this->ch_wheel = _arg;
    return *this;
  }
  Type & set__sw_left(
    const uint8_t & _arg)
  {
    this->sw_left = _arg;
    return *this;
  }
  Type & set__sw_right(
    const uint8_t & _arg)
  {
    this->sw_right = _arg;
    return *this;
  }
  Type & set__mouse_x(
    const float & _arg)
  {
    this->mouse_x = _arg;
    return *this;
  }
  Type & set__mouse_y(
    const float & _arg)
  {
    this->mouse_y = _arg;
    return *this;
  }
  Type & set__mouse_z(
    const float & _arg)
  {
    this->mouse_z = _arg;
    return *this;
  }
  Type & set__mouse_press_l(
    const bool & _arg)
  {
    this->mouse_press_l = _arg;
    return *this;
  }
  Type & set__mouse_press_r(
    const bool & _arg)
  {
    this->mouse_press_r = _arg;
    return *this;
  }
  Type & set__key_w(
    const bool & _arg)
  {
    this->key_w = _arg;
    return *this;
  }
  Type & set__key_s(
    const bool & _arg)
  {
    this->key_s = _arg;
    return *this;
  }
  Type & set__key_a(
    const bool & _arg)
  {
    this->key_a = _arg;
    return *this;
  }
  Type & set__key_d(
    const bool & _arg)
  {
    this->key_d = _arg;
    return *this;
  }
  Type & set__key_shift(
    const bool & _arg)
  {
    this->key_shift = _arg;
    return *this;
  }
  Type & set__key_ctrl(
    const bool & _arg)
  {
    this->key_ctrl = _arg;
    return *this;
  }
  Type & set__key_q(
    const bool & _arg)
  {
    this->key_q = _arg;
    return *this;
  }
  Type & set__key_e(
    const bool & _arg)
  {
    this->key_e = _arg;
    return *this;
  }
  Type & set__key_r(
    const bool & _arg)
  {
    this->key_r = _arg;
    return *this;
  }
  Type & set__key_f(
    const bool & _arg)
  {
    this->key_f = _arg;
    return *this;
  }
  Type & set__key_g(
    const bool & _arg)
  {
    this->key_g = _arg;
    return *this;
  }
  Type & set__key_z(
    const bool & _arg)
  {
    this->key_z = _arg;
    return *this;
  }
  Type & set__key_x(
    const bool & _arg)
  {
    this->key_x = _arg;
    return *this;
  }
  Type & set__key_c(
    const bool & _arg)
  {
    this->key_c = _arg;
    return *this;
  }
  Type & set__key_v(
    const bool & _arg)
  {
    this->key_v = _arg;
    return *this;
  }
  Type & set__key_b(
    const bool & _arg)
  {
    this->key_b = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SW_UP =
    1u;
  static constexpr uint8_t SW_DOWN =
    2u;
  static constexpr uint8_t SW_MID =
    3u;

  // pointer types
  using RawPtr =
    sentry_msgs::msg::DR16Receiver_<ContainerAllocator> *;
  using ConstRawPtr =
    const sentry_msgs::msg::DR16Receiver_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sentry_msgs::msg::DR16Receiver_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sentry_msgs::msg::DR16Receiver_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::DR16Receiver_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::DR16Receiver_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sentry_msgs::msg::DR16Receiver_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sentry_msgs::msg::DR16Receiver_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sentry_msgs::msg::DR16Receiver_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sentry_msgs::msg::DR16Receiver_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sentry_msgs__msg__DR16Receiver
    std::shared_ptr<sentry_msgs::msg::DR16Receiver_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sentry_msgs__msg__DR16Receiver
    std::shared_ptr<sentry_msgs::msg::DR16Receiver_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DR16Receiver_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ch_left_x != other.ch_left_x) {
      return false;
    }
    if (this->ch_left_y != other.ch_left_y) {
      return false;
    }
    if (this->ch_right_x != other.ch_right_x) {
      return false;
    }
    if (this->ch_right_y != other.ch_right_y) {
      return false;
    }
    if (this->ch_wheel != other.ch_wheel) {
      return false;
    }
    if (this->sw_left != other.sw_left) {
      return false;
    }
    if (this->sw_right != other.sw_right) {
      return false;
    }
    if (this->mouse_x != other.mouse_x) {
      return false;
    }
    if (this->mouse_y != other.mouse_y) {
      return false;
    }
    if (this->mouse_z != other.mouse_z) {
      return false;
    }
    if (this->mouse_press_l != other.mouse_press_l) {
      return false;
    }
    if (this->mouse_press_r != other.mouse_press_r) {
      return false;
    }
    if (this->key_w != other.key_w) {
      return false;
    }
    if (this->key_s != other.key_s) {
      return false;
    }
    if (this->key_a != other.key_a) {
      return false;
    }
    if (this->key_d != other.key_d) {
      return false;
    }
    if (this->key_shift != other.key_shift) {
      return false;
    }
    if (this->key_ctrl != other.key_ctrl) {
      return false;
    }
    if (this->key_q != other.key_q) {
      return false;
    }
    if (this->key_e != other.key_e) {
      return false;
    }
    if (this->key_r != other.key_r) {
      return false;
    }
    if (this->key_f != other.key_f) {
      return false;
    }
    if (this->key_g != other.key_g) {
      return false;
    }
    if (this->key_z != other.key_z) {
      return false;
    }
    if (this->key_x != other.key_x) {
      return false;
    }
    if (this->key_c != other.key_c) {
      return false;
    }
    if (this->key_v != other.key_v) {
      return false;
    }
    if (this->key_b != other.key_b) {
      return false;
    }
    return true;
  }
  bool operator!=(const DR16Receiver_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DR16Receiver_

// alias to use template instance with default allocator
using DR16Receiver =
  sentry_msgs::msg::DR16Receiver_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DR16Receiver_<ContainerAllocator>::SW_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DR16Receiver_<ContainerAllocator>::SW_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DR16Receiver_<ContainerAllocator>::SW_MID;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__DR16_RECEIVER__STRUCT_HPP_
