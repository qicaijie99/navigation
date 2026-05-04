#include "CommPort.h"

#include <array>
#include <cstring>
#include <iostream>

#include "Checksum.h"

namespace
{
    constexpr uint8_t       kAutoaimHeader = 0x3A;
    constexpr uint8_t       kIgnoreHeader  = 0xF8;
    constexpr unsigned char kCrc8Init      = 0xff;

    constexpr size_t max_size(size_t a, size_t b) {
        return a > b ? a : b;
    }

    constexpr size_t kMaxQueryPayload =
        max_size(sizeof(RxSelfInfoMsg),
                 max_size(sizeof(RxEnemyHpMsg),
                          max_size(sizeof(RxGameInfoMsg),
                                   max_size(sizeof(RxBuffsMsg), sizeof(RxPosMsg)))));

    bool is_query_header(uint8_t header) {
        return header >= static_cast<uint8_t>(TxQueryMsgType::SELF_INFO) &&
               header <= static_cast<uint8_t>(TxQueryMsgType::POS);
    }

    size_t query_payload_size(TxQueryMsgType code) {
        switch (code) {
            case TxQueryMsgType::SELF_INFO:
                return sizeof(RxSelfInfoMsg);
            case TxQueryMsgType::ENEMY_HP:
                return sizeof(RxEnemyHpMsg);
            case TxQueryMsgType::GAME_INFO:
                return sizeof(RxGameInfoMsg);
            case TxQueryMsgType::BUFFS:
                return sizeof(RxBuffsMsg);
            case TxQueryMsgType::POS:
                return sizeof(RxPosMsg);
            default:
                return 0;
        }
    }

    template <typename MsgT>
    bool has_valid_crc8(const uint8_t* frame) {
        constexpr size_t kPayloadOffset = sizeof(MsgT::header);
        constexpr size_t kPayloadLength = sizeof(MsgT) - sizeof(MsgT::header) - sizeof(MsgT::checksum);
        const auto       expected_crc   = Crc8Checksum(const_cast<unsigned char*>(frame) + kPayloadOffset,
                                               kPayloadLength,
                                               kCrc8Init);
        return expected_crc == frame[sizeof(MsgT) - 1];
    }
} // namespace

CommPort::CommPort(const rclcpp::Node& node, const std::string& port_name, uint32_t baudrate) {
    constexpr uint32_t kReadTimeoutMs = 10;
    port_.setPort(port_name);
    port_.setBaudrate(baudrate);
    logger_ = node.get_logger();

    // TODO: scan the ttyACM*(d) if failed to open or segment fault
    // catch is needed
    try {
        port_.open();
    }
    catch (const serial::IOException& ex) {
        RCLCPP_INFO(logger_, "Failed to open serial port by index %s", port_name.c_str());
        exit(-2);
    }
    catch (const serial::PortNotOpenedException& ex) {
        RCLCPP_INFO(logger_, "Failed to open serial port by index %s", port_name.c_str());
        exit(-2);
    }
    catch (const serial::SerialException& ex) {
        RCLCPP_INFO(logger_, "Failed to open serial port by index %s", port_name.c_str());
        exit(-2);
    }

    {
        auto timeout                    = port_.getTimeout();
        timeout.inter_byte_timeout      = serial::Timeout::max();
        timeout.read_timeout_constant   = kReadTimeoutMs;
        timeout.read_timeout_multiplier = 0;
        port_.setTimeout(timeout);
    }

    // Start on a clean boundary instead of inheriting stale bytes from an earlier run.
    port_.flushInput();

    read_stop_flag_         = false;
    write_stop_flag_        = false;
    write_clear_flag_       = true;
    exception_handled_flag_ = true;

    memset(rx_buffer_, 0, sizeof(rx_buffer_));
}

CommPort::~CommPort() {
    Stop();
}

void CommPort::Read() {
    constexpr auto kFrameReadTimeout = std::chrono::milliseconds(50);

    auto read_exact = [this, kFrameReadTimeout](uint8_t* dst, size_t len) -> bool {
        const auto deadline = std::chrono::steady_clock::now() + kFrameReadTimeout;
        size_t     received = 0;

        while (!read_stop_flag_ && received < len) {
            if (std::chrono::steady_clock::now() >= deadline) {
                return false;
            }
            if (!port_.waitReadable()) {
                continue;
            }

            const size_t n = port_.read(dst + received, len - received);
            if (n == 0) {
                continue;
            }
            received += n;
        }

        return received == len;
    };

    auto emit_snapshot = [this]() {
        rx_callback_t cb;
        {
            std::lock_guard<std::mutex> lock(rx_cb_mutex_);
            cb = rx_callback_;
        }
        if (!cb) {
            return;
        }

        RxMsg snapshot;
        {
            std::lock_guard<std::mutex> lock(rx_msg_mutex_);
            snapshot = rx_msg_;
        }
        cb(snapshot);
    };

    auto resync_rx = [this]() {
        try {
            port_.flushInput();
        }
        catch (const serial::SerialException&) {
        }
        catch (const serial::IOException&) {
        }
        catch (const serial::PortNotOpenedException&) {
        }
    };

    while (!read_stop_flag_) {
        try {
            if (!port_.waitReadable()) {
                continue;
            }
            uint8_t      header     = 0;
            const size_t bytes_read = port_.read(&header, 1);
            if (bytes_read != 0) {
                // TODO: this switch logic is a PIECE OF SHIT, REMEMBER TO INRROVE IT.
                switch (header) {
                    case kAutoaimHeader: {
                        rx_buffer_[0] = header;
                        if (!read_exact(rx_buffer_ + 1, sizeof(RxAutoAimMsg) - 1)) {
                            RCLCPP_WARN(logger_, "[RxMsg] timeout while reading gimbal status frame");
                            resync_rx();
                            break;
                        }
                        if (!has_valid_crc8<RxAutoAimMsg>(rx_buffer_)) {
                            RCLCPP_WARN(logger_, "[RxMsg] dropping autoaim frame with invalid CRC8");
                            break;
                        }

                        {
                            std::lock_guard<std::mutex> lock(rx_msg_mutex_);
                            std::memcpy(rx_msg_.rx_buffer_, rx_buffer_, sizeof(RxAutoAimMsg));
                            std::memcpy(&rx_msg_.rx_autoaim_msg_, rx_buffer_, sizeof(RxAutoAimMsg));
                            rx_msg_.last_frame_type_ = RxMsg::FrameType::AUTOAIM;
                        }
                        emit_snapshot();
                        break;
                    }

                    case kIgnoreHeader: {
                        break;
                    }

                    default: {
                        if (!is_query_header(header)) {
                            break;
                        }

                        const auto   code       = static_cast<TxQueryMsgType>(header);
                        const size_t payload_sz = query_payload_size(code);
                        if (payload_sz <= 1) {
                            break;
                        }

                        std::array<uint8_t, kMaxQueryPayload> payload {};
                        payload[0] = header;
                        if (!read_exact(payload.data() + 1, payload_sz - 1)) {
                            RCLCPP_WARN(logger_,
                                        "[RxMsg] timeout while reading query response code=%u",
                                        static_cast<unsigned int>(header));
                            resync_rx();
                            break;
                        }

                        bool crc_ok = false;
                        switch (code) {
                            case TxQueryMsgType::SELF_INFO:
                                crc_ok = has_valid_crc8<RxSelfInfoMsg>(payload.data());
                                break;
                            case TxQueryMsgType::ENEMY_HP:
                                crc_ok = has_valid_crc8<RxEnemyHpMsg>(payload.data());
                                break;
                            case TxQueryMsgType::GAME_INFO:
                                crc_ok = has_valid_crc8<RxGameInfoMsg>(payload.data());
                                break;
                            case TxQueryMsgType::BUFFS:
                                crc_ok = has_valid_crc8<RxBuffsMsg>(payload.data());
                                break;
                            case TxQueryMsgType::POS:
                                crc_ok = has_valid_crc8<RxPosMsg>(payload.data());
                                break;
                            default:
                                break;
                        }
                        if (!crc_ok) {
                            RCLCPP_WARN(logger_,
                                        "[RxMsg] dropping query response code=%u with invalid CRC8",
                                        static_cast<unsigned int>(header));
                            break;
                        }

                        {
                            std::lock_guard<std::mutex> lock(rx_msg_mutex_);
                            switch (code) {
                                case TxQueryMsgType::SELF_INFO:
                                    std::memcpy(&rx_msg_.rx_self_info_msg_, payload.data(), sizeof(RxSelfInfoMsg));
                                    break;
                                case TxQueryMsgType::ENEMY_HP:
                                    std::memcpy(&rx_msg_.rx_enemy_hp_msg_, payload.data(), sizeof(RxEnemyHpMsg));
                                    break;
                                case TxQueryMsgType::GAME_INFO:
                                    std::memcpy(&rx_msg_.rx_game_info_msg_, payload.data(), sizeof(RxGameInfoMsg));
                                    break;
                                case TxQueryMsgType::BUFFS:
                                    std::memcpy(&rx_msg_.rx_buffs_msg_, payload.data(), sizeof(RxBuffsMsg));
                                    break;
                                case TxQueryMsgType::POS:
                                    std::memcpy(&rx_msg_.rx_pos_msg_, payload.data(), sizeof(RxPosMsg));
                                    break;
                                default:
                                    break;
                            }
                            rx_msg_.last_frame_type_ = RxMsg::FrameType::QUERY;
                            rx_msg_.last_query_code_ = code;
                        }
                        emit_snapshot();
                        break;
                    }
                }
            }
        }
        catch (const serial::SerialException& ex) {
            if (read_stop_flag_) {
                break;
            }
            SerialFailsafeCallback(true);
        }
        catch (const serial::IOException& ex) {
            if (read_stop_flag_) {
                break;
            }
            SerialFailsafeCallback(true);
        }
        catch (const serial::PortNotOpenedException& ex) {
            if (read_stop_flag_) {
                break;
            }
            SerialFailsafeCallback(true);
        }
    }
}

void CommPort::Write(const uint8_t* tx_packet, size_t size, bool safe_write) {
    while (!write_clear_flag_)
        ;
    if (safe_write) {
        try {
            port_.write(tx_packet, size);
        }
        catch (const serial::SerialException& ex) {
            SerialFailsafeCallback(true);
        }
        catch (const serial::IOException& ex) {
            SerialFailsafeCallback(true);
        }
    }
    else {
        port_.write(tx_packet, size);
    }

    if (tx_packet != nullptr &&
        size == sizeof(TxAutoaimNaviMsg) &&
        tx_packet[0] == kAutoaimHeader) {
        const int64_t now_ns =
            std::chrono::duration_cast<std::chrono::nanoseconds>(
                std::chrono::steady_clock::now().time_since_epoch())
                .count();
        last_autoaim_tx_ns_.store(now_ns);
    }
}

void CommPort::WriteQuery(TxQueryMsgType query_type, bool safe_write) {
    tx_msg_.sendQuery(
        query_type,
        [this, safe_write](uint8_t* buffer, size_t size, bool) {
            Write(buffer, size, safe_write);
        },
        query_send_verbose_,
        &logger_);
}

bool CommPort::isAutoaimRecent(std::chrono::milliseconds window) const {
    const int64_t last_ns = last_autoaim_tx_ns_.load();
    if (last_ns == 0) {
        return false;
    }

    const int64_t now_ns =
        std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::steady_clock::now().time_since_epoch())
            .count();
    const int64_t window_ns =
        std::chrono::duration_cast<std::chrono::nanoseconds>(window).count();
    return (now_ns - last_ns) < window_ns;
}

// sentry only
void CommPort::RunAsync(SERIAL_MODE mode) {
    if (mode == TX_SYNC) {
        RCLCPP_INFO(logger_, "Serial mode: TX_SYNC");
    }
    else if (mode == TX_RX_ASYNC) {
        RCLCPP_INFO(logger_, "Serial mode: TX_SYNC & RX_ASYNC");
        Start();
    }
}

void CommPort::Start() {
    if (read_thread_.joinable()) {
        return;
    }
    read_stop_flag_  = false;
    write_stop_flag_ = false;
    read_thread_     = std::thread(&CommPort::Read, this);
}

void CommPort::Stop() {
    write_stop_flag_ = true;
    read_stop_flag_  = true;
    if (read_thread_.joinable()) {
        read_thread_.join();
    }
    if (port_.isOpen()) {
        port_.close();
    }
}

void CommPort::SerialFailsafeCallback(bool reopen) {
    exception_handled_flag_   = false;
    std::string target_device = port_.getPort();
    RCLCPP_INFO(logger_, "IO failed at serial device, retrying");
    bool new_device_found = false;

    // Serial exception handling
    while (true) {
#define MS 1000000
        usleep(MS);
#undef MS
        serial_port_info_ = serial::list_ports();
        for (auto& i : serial_port_info_) {
            if (i.description.find("STMicroelectronics") != std::string::npos) {
                target_device    = i.port;
                new_device_found = true;
                break;
            }
        }
        if (new_device_found) {
            break;
        }
    }
    if (reopen) {
        port_.close();
    }
    port_.setPort(target_device);
    port_.open();
    RCLCPP_INFO(logger_, "Serial open failsafe succeeded at port");
    exception_handled_flag_ = true;
}

void CommPort::setRxCallback(rx_callback_t cb) {
    std::lock_guard<std::mutex> lock(rx_cb_mutex_);
    rx_callback_ = std::move(cb);
}

void CommPort::setTxVerbose(bool query_send_verbose) {
    query_send_verbose_ = query_send_verbose;
}

RxMsg CommPort::snapshotRxMsg() const {
    std::lock_guard<std::mutex> lock(rx_msg_mutex_);
    return rx_msg_;
}

TxMsg& CommPort::tx_msg() {
    return tx_msg_;
}
