// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sentry_msgs:msg/DR16Receiver.idl
// generated code does not contain a copyright notice

#ifndef SENTRY_MSGS__MSG__DETAIL__DR16_RECEIVER__BUILDER_HPP_
#define SENTRY_MSGS__MSG__DETAIL__DR16_RECEIVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sentry_msgs/msg/detail/dr16_receiver__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sentry_msgs
{

namespace msg
{

namespace builder
{

class Init_DR16Receiver_key_b
{
public:
  explicit Init_DR16Receiver_key_b(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  ::sentry_msgs::msg::DR16Receiver key_b(::sentry_msgs::msg::DR16Receiver::_key_b_type arg)
  {
    msg_.key_b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_v
{
public:
  explicit Init_DR16Receiver_key_v(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_b key_v(::sentry_msgs::msg::DR16Receiver::_key_v_type arg)
  {
    msg_.key_v = std::move(arg);
    return Init_DR16Receiver_key_b(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_c
{
public:
  explicit Init_DR16Receiver_key_c(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_v key_c(::sentry_msgs::msg::DR16Receiver::_key_c_type arg)
  {
    msg_.key_c = std::move(arg);
    return Init_DR16Receiver_key_v(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_x
{
public:
  explicit Init_DR16Receiver_key_x(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_c key_x(::sentry_msgs::msg::DR16Receiver::_key_x_type arg)
  {
    msg_.key_x = std::move(arg);
    return Init_DR16Receiver_key_c(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_z
{
public:
  explicit Init_DR16Receiver_key_z(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_x key_z(::sentry_msgs::msg::DR16Receiver::_key_z_type arg)
  {
    msg_.key_z = std::move(arg);
    return Init_DR16Receiver_key_x(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_g
{
public:
  explicit Init_DR16Receiver_key_g(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_z key_g(::sentry_msgs::msg::DR16Receiver::_key_g_type arg)
  {
    msg_.key_g = std::move(arg);
    return Init_DR16Receiver_key_z(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_f
{
public:
  explicit Init_DR16Receiver_key_f(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_g key_f(::sentry_msgs::msg::DR16Receiver::_key_f_type arg)
  {
    msg_.key_f = std::move(arg);
    return Init_DR16Receiver_key_g(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_r
{
public:
  explicit Init_DR16Receiver_key_r(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_f key_r(::sentry_msgs::msg::DR16Receiver::_key_r_type arg)
  {
    msg_.key_r = std::move(arg);
    return Init_DR16Receiver_key_f(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_e
{
public:
  explicit Init_DR16Receiver_key_e(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_r key_e(::sentry_msgs::msg::DR16Receiver::_key_e_type arg)
  {
    msg_.key_e = std::move(arg);
    return Init_DR16Receiver_key_r(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_q
{
public:
  explicit Init_DR16Receiver_key_q(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_e key_q(::sentry_msgs::msg::DR16Receiver::_key_q_type arg)
  {
    msg_.key_q = std::move(arg);
    return Init_DR16Receiver_key_e(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_ctrl
{
public:
  explicit Init_DR16Receiver_key_ctrl(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_q key_ctrl(::sentry_msgs::msg::DR16Receiver::_key_ctrl_type arg)
  {
    msg_.key_ctrl = std::move(arg);
    return Init_DR16Receiver_key_q(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_shift
{
public:
  explicit Init_DR16Receiver_key_shift(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_ctrl key_shift(::sentry_msgs::msg::DR16Receiver::_key_shift_type arg)
  {
    msg_.key_shift = std::move(arg);
    return Init_DR16Receiver_key_ctrl(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_d
{
public:
  explicit Init_DR16Receiver_key_d(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_shift key_d(::sentry_msgs::msg::DR16Receiver::_key_d_type arg)
  {
    msg_.key_d = std::move(arg);
    return Init_DR16Receiver_key_shift(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_a
{
public:
  explicit Init_DR16Receiver_key_a(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_d key_a(::sentry_msgs::msg::DR16Receiver::_key_a_type arg)
  {
    msg_.key_a = std::move(arg);
    return Init_DR16Receiver_key_d(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_s
{
public:
  explicit Init_DR16Receiver_key_s(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_a key_s(::sentry_msgs::msg::DR16Receiver::_key_s_type arg)
  {
    msg_.key_s = std::move(arg);
    return Init_DR16Receiver_key_a(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_key_w
{
public:
  explicit Init_DR16Receiver_key_w(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_s key_w(::sentry_msgs::msg::DR16Receiver::_key_w_type arg)
  {
    msg_.key_w = std::move(arg);
    return Init_DR16Receiver_key_s(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_mouse_press_r
{
public:
  explicit Init_DR16Receiver_mouse_press_r(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_key_w mouse_press_r(::sentry_msgs::msg::DR16Receiver::_mouse_press_r_type arg)
  {
    msg_.mouse_press_r = std::move(arg);
    return Init_DR16Receiver_key_w(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_mouse_press_l
{
public:
  explicit Init_DR16Receiver_mouse_press_l(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_mouse_press_r mouse_press_l(::sentry_msgs::msg::DR16Receiver::_mouse_press_l_type arg)
  {
    msg_.mouse_press_l = std::move(arg);
    return Init_DR16Receiver_mouse_press_r(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_mouse_z
{
public:
  explicit Init_DR16Receiver_mouse_z(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_mouse_press_l mouse_z(::sentry_msgs::msg::DR16Receiver::_mouse_z_type arg)
  {
    msg_.mouse_z = std::move(arg);
    return Init_DR16Receiver_mouse_press_l(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_mouse_y
{
public:
  explicit Init_DR16Receiver_mouse_y(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_mouse_z mouse_y(::sentry_msgs::msg::DR16Receiver::_mouse_y_type arg)
  {
    msg_.mouse_y = std::move(arg);
    return Init_DR16Receiver_mouse_z(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_mouse_x
{
public:
  explicit Init_DR16Receiver_mouse_x(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_mouse_y mouse_x(::sentry_msgs::msg::DR16Receiver::_mouse_x_type arg)
  {
    msg_.mouse_x = std::move(arg);
    return Init_DR16Receiver_mouse_y(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_sw_right
{
public:
  explicit Init_DR16Receiver_sw_right(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_mouse_x sw_right(::sentry_msgs::msg::DR16Receiver::_sw_right_type arg)
  {
    msg_.sw_right = std::move(arg);
    return Init_DR16Receiver_mouse_x(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_sw_left
{
public:
  explicit Init_DR16Receiver_sw_left(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_sw_right sw_left(::sentry_msgs::msg::DR16Receiver::_sw_left_type arg)
  {
    msg_.sw_left = std::move(arg);
    return Init_DR16Receiver_sw_right(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_ch_wheel
{
public:
  explicit Init_DR16Receiver_ch_wheel(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_sw_left ch_wheel(::sentry_msgs::msg::DR16Receiver::_ch_wheel_type arg)
  {
    msg_.ch_wheel = std::move(arg);
    return Init_DR16Receiver_sw_left(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_ch_right_y
{
public:
  explicit Init_DR16Receiver_ch_right_y(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_ch_wheel ch_right_y(::sentry_msgs::msg::DR16Receiver::_ch_right_y_type arg)
  {
    msg_.ch_right_y = std::move(arg);
    return Init_DR16Receiver_ch_wheel(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_ch_right_x
{
public:
  explicit Init_DR16Receiver_ch_right_x(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_ch_right_y ch_right_x(::sentry_msgs::msg::DR16Receiver::_ch_right_x_type arg)
  {
    msg_.ch_right_x = std::move(arg);
    return Init_DR16Receiver_ch_right_y(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_ch_left_y
{
public:
  explicit Init_DR16Receiver_ch_left_y(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_ch_right_x ch_left_y(::sentry_msgs::msg::DR16Receiver::_ch_left_y_type arg)
  {
    msg_.ch_left_y = std::move(arg);
    return Init_DR16Receiver_ch_right_x(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_ch_left_x
{
public:
  explicit Init_DR16Receiver_ch_left_x(::sentry_msgs::msg::DR16Receiver & msg)
  : msg_(msg)
  {}
  Init_DR16Receiver_ch_left_y ch_left_x(::sentry_msgs::msg::DR16Receiver::_ch_left_x_type arg)
  {
    msg_.ch_left_x = std::move(arg);
    return Init_DR16Receiver_ch_left_y(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

class Init_DR16Receiver_header
{
public:
  Init_DR16Receiver_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DR16Receiver_ch_left_x header(::sentry_msgs::msg::DR16Receiver::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DR16Receiver_ch_left_x(msg_);
  }

private:
  ::sentry_msgs::msg::DR16Receiver msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sentry_msgs::msg::DR16Receiver>()
{
  return sentry_msgs::msg::builder::Init_DR16Receiver_header();
}

}  // namespace sentry_msgs

#endif  // SENTRY_MSGS__MSG__DETAIL__DR16_RECEIVER__BUILDER_HPP_
