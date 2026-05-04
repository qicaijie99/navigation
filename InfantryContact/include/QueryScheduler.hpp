#pragma once

#include <chrono>
#include <functional>
#include <limits>
#include <string>
#include <vector>

#include <rclcpp/rclcpp.hpp>

#include "CommPort.h"
#include "Content.hpp"
#include "RxMsg.hpp"
#include "TxMsg.hpp"

using namespace std::chrono_literals;

class QueryScheduler
{
public:
    struct PollTask
    {
        std::string               name;
        TxQueryMsgType            query_code;
        std::chrono::milliseconds period {100ms};

        std::chrono::steady_clock::time_point last_send {};
        std::chrono::steady_clock::time_point last_recv {};

        bool enabled      = true;
        bool waiting_resp = false;

        uint32_t retry_count = 0;
        uint32_t max_retry   = 3;
    };

public:
    QueryScheduler(rclcpp::Node& node, CommPort& comm_port)
        : node_(node), comm_port_(comm_port) {
        auto now = std::chrono::steady_clock::now();

        tasks_ = {
            {"SelfInfoQuery", TxQueryMsgType::SELF_INFO, 100ms, now - 100ms, now},
            {"EnemyHpQuery", TxQueryMsgType::ENEMY_HP, 500ms, now - 500ms, now},
            {"GameInfoQuery", TxQueryMsgType::GAME_INFO, 100ms, now - 100ms, now},
            {"BuffsQuery", TxQueryMsgType::BUFFS, 500ms, now - 500ms, now},
            {"PosQuery", TxQueryMsgType::POS, 100ms, now - 100ms, now},
        };
    }

    void set_publishers(const RxSelfInfoMsg::robotStatusPub_t&   robot_status_pub,
                        const RxEnemyHpMsg::enemy_hp_pub_t&      enemy_hp_pub,
                        const RxGameInfoMsg::game_status_pub_t&  game_status_pub,
                        const RxGameInfoMsg::field_events_pub_t& field_events_pub,
                        const RxGameInfoMsg::game_result_pub_t&  game_result_pub,
                        const RxBuffsMsg::robot_buff_pub_t&      robot_buff_pub,
                        const RxPosMsg::robot_pos_pub_t&         robot_pos_pub) {
        pub_robot_status_ = robot_status_pub;
        pub_robot_hp_     = enemy_hp_pub;
        pub_game_status_  = game_status_pub;
        pub_field_events_ = field_events_pub;
        pub_game_result_  = game_result_pub;
        pub_robot_buff_   = robot_buff_pub;
        pub_robot_pos_    = robot_pos_pub;
    }

    void set_rx_verbose(bool gimbal_status_verbose, bool response_verbose) {
        gimbal_status_verbose_ = gimbal_status_verbose;
        response_verbose_      = response_verbose;
    }

    void set_enabled(bool enabled) {
        enabled_ = enabled;
    }

    void set_autoaim_publishers(const RxAutoAimMsg::autoaim_pub_t&    autoaim_pub,
                                const RxAutoAimMsg::quat_pub_t&       samll_yaw_quat_pub,
                                const RxAutoAimMsg::quat_pub_t&       big_yaw_quat_pub,
                                const RxAutoAimMsg::quat_joint_pub_t& joint_state_pub) {
        pub_autoaim_              = autoaim_pub;
        small_yaw_pub_quaternion_ = samll_yaw_quat_pub;
        big_yaw_pub_quaternion_   = big_yaw_quat_pub;
        pub_joint_state_          = joint_state_pub;
    }

    void start() {
        comm_port_.setRxCallback(
            [this](const RxMsg& msg) {
                this->on_rx_msg(msg);
            });

        polling_timer_ = node_.create_wall_timer(
            polling_period_,
            std::bind(&QueryScheduler::polling_timer_callback, this));
    }

    void stop() {
        if (polling_timer_) {
            polling_timer_->cancel();
        }
    }

private:
    void polling_timer_callback() {
        if (!enabled_) {
            return;
        }
        if (comm_port_.isAutoaimRecent(autoaim_guard_)) {
            return;
        }

        auto now      = std::chrono::steady_clock::now();
        int  best_idx = pick_best_task(now);
        if (best_idx < 0) {
            return;
        }

        auto& task = tasks_[best_idx];
        comm_port_.WriteQuery(task.query_code, true);
        task.last_send = now;
        if (task.waiting_resp) {
            task.retry_count++;
        }
        else {
            task.retry_count = 0;
        }

        task.waiting_resp = true;

        RCLCPP_DEBUG(
            node_.get_logger(),
            "[QueryScheduler] send %s retry=%u",
            task.name.c_str(),
            task.retry_count);
    }

    void on_rx_msg(const RxMsg& msg) {
        if (msg.last_frame_type_ != RxMsg::FrameType::QUERY) {
            handle_non_query_msg(msg);
            return;
        }

        on_query_response_received(msg.last_query_code_);

        switch (msg.last_query_code_) {
            case TxQueryMsgType::SELF_INFO:
                if (pub_robot_status_) {
                    msg.loadSelfInfoMsgAndPub(pub_robot_status_, node_, response_verbose_);
                }
                break;
            case TxQueryMsgType::ENEMY_HP:
                if (pub_robot_hp_) {
                    msg.loadRxEnemyHpMsgAndPub(pub_robot_hp_, node_, response_verbose_);
                }
                break;
            case TxQueryMsgType::GAME_INFO:
                if (pub_game_status_) {
                    msg.loadRxGameInfoMsgAndPub(pub_game_status_, pub_field_events_, pub_game_result_, node_, response_verbose_);
                }
                break;
            case TxQueryMsgType::BUFFS:
                if (pub_robot_buff_) {
                    msg.loadRxBuffsMsgAndPub(pub_robot_buff_, node_, response_verbose_);
                }
                break;
            case TxQueryMsgType::POS:
                if (pub_robot_pos_) {
                    msg.loadRxPosMsgAndPub(pub_robot_pos_, node_, response_verbose_);
                }
                break;
            default:
                break;
        }
    }

    void on_query_response_received(TxQueryMsgType code) {
        auto now = std::chrono::steady_clock::now();

        for (auto& task : tasks_) {
            if (task.query_code != code) {
                continue;
            }

            task.last_recv    = now;
            task.waiting_resp = false;
            task.retry_count  = 0;

            RCLCPP_DEBUG(
                node_.get_logger(),
                "[QueryScheduler] recv %s",
                task.name.c_str());

            return;
        }
    }

    void handle_non_query_msg(const RxMsg& msg) {
        if (!pub_autoaim_ && !small_yaw_pub_quaternion_ && !pub_joint_state_ && !big_yaw_pub_quaternion_) {
            RCLCPP_WARN_THROTTLE(
                node_.get_logger(),
                *node_.get_clock(),
                5000,
                "[QueryScheduler] dropping RxAutoAimMsg because no autoaim publishers are configured");
            return;
        }
        if (!pub_autoaim_ || !small_yaw_pub_quaternion_ || !pub_joint_state_ || !big_yaw_pub_quaternion_) {
            RCLCPP_WARN_THROTTLE(
                node_.get_logger(),
                *node_.get_clock(),
                5000,
                "[QueryScheduler] RxAutoAimMsg received with some publishers missing; publishing available outputs only");
        }
        msg.loadAutoaimMsgAndPublish(pub_autoaim_, small_yaw_pub_quaternion_, big_yaw_pub_quaternion_, pub_joint_state_, node_, gimbal_status_verbose_);
    }

    int pick_best_task(const std::chrono::steady_clock::time_point& now) const {
        int     best_idx   = -1;
        int64_t best_score = std::numeric_limits<int64_t>::min();

        for (size_t i = 0; i < tasks_.size(); ++i) {
            int64_t score = calc_score(tasks_[i], now);
            if (score > best_score) {
                best_score = score;
                best_idx   = static_cast<int>(i);
            }
        }

        return best_idx;
    }

    int64_t calc_score(const PollTask&                              task,
                       const std::chrono::steady_clock::time_point& now) const {
        if (!task.enabled) {
            return std::numeric_limits<int64_t>::min();
        }

        const bool due_normal = (now - task.last_send) >= task.period;
        const bool due_retry =
            task.waiting_resp &&
            ((now - task.last_send) >= retry_gap_) &&
            (task.retry_count < task.max_retry);

        if (!due_normal && !due_retry) {
            return std::numeric_limits<int64_t>::min();
        }

        const auto overdue_ms =
            std::chrono::duration_cast<std::chrono::milliseconds>(
                (now - task.last_send) - task.period)
                .count();

        int64_t score = overdue_ms;

        if (due_retry) {
            score += 100000;
        }

        return score;
    }

private:
    rclcpp::Node&                node_;
    CommPort&                    comm_port_;
    rclcpp::TimerBase::SharedPtr polling_timer_;

    const std::chrono::milliseconds polling_period_ = 10ms;
    const std::chrono::milliseconds retry_gap_      = 100ms;
    const std::chrono::milliseconds autoaim_guard_  = 5ms;

    bool enabled_               = true;
    bool gimbal_status_verbose_ = false;
    bool response_verbose_      = false;

    RxAutoAimMsg::autoaim_pub_t       pub_autoaim_;
    RxAutoAimMsg::quat_pub_t          small_yaw_pub_quaternion_;
    RxAutoAimMsg::quat_pub_t          big_yaw_pub_quaternion_;
    RxAutoAimMsg::quat_joint_pub_t    pub_joint_state_;
    RxSelfInfoMsg::robotStatusPub_t   pub_robot_status_;
    RxEnemyHpMsg::enemy_hp_pub_t      pub_robot_hp_;
    RxGameInfoMsg::game_status_pub_t  pub_game_status_;
    RxGameInfoMsg::field_events_pub_t pub_field_events_;
    RxGameInfoMsg::game_result_pub_t  pub_game_result_;
    RxBuffsMsg::robot_buff_pub_t      pub_robot_buff_;
    RxPosMsg::robot_pos_pub_t         pub_robot_pos_;

    std::vector<PollTask> tasks_;
};
