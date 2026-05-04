#ifndef ROBO_CV_COMMPORT_H
#define ROBO_CV_COMMPORT_H

#include <Checksum.h>
#include <serial/serial.h>
#include <spdlog/async.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>
#include <unistd.h>

#include <Content.hpp>
#include <RxMsg.hpp>
#include <TxMsg.hpp>
#include <atomic>
#include <chrono>
#include <cstdint>
#include <functional>
#include <mutex>
#include <thread>

class CommPort
{
private:
    RxMsg rx_msg_ {};
    TxMsg tx_msg_ {};

    std::atomic<bool> read_stop_flag_ {};
    std::atomic<bool> write_stop_flag_ {};
    std::atomic<bool> write_clear_flag_ {};
    std::atomic<bool> exception_handled_flag_ {};

    uint8_t        rx_buffer_[sizeof(RxAutoAimMsg)] {};
    serial::Serial port_;

    rclcpp::Logger                logger_ = rclcpp::get_logger("CommPort");
    std::vector<serial::PortInfo> serial_port_info_;
    std::string                   device_desc_;

public:
    enum SERIAL_MODE
    {
        TX_SYNC,
        TX_RX_ASYNC
    };
    using rx_callback_t = std::function<void(const RxMsg&)>;

    CommPort(const rclcpp::Node& node, const std::string& port_name = "/dev/ttyACM0", uint32_t baudrate = 115200);

    CommPort(const CommPort&)            = delete;
    CommPort& operator=(const CommPort&) = delete;

    ~CommPort();

    void RunAsync(SERIAL_MODE mode);

    void Start();

    void Stop();

    void Write(const uint8_t* tx_packet, size_t size, bool safe_write);

    void WriteQuery(TxQueryMsgType query_type, bool safe_write);

    bool isAutoaimRecent(std::chrono::milliseconds window) const;

    void Read();

    void SerialFailsafeCallback(bool reopen);

    void setRxCallback(rx_callback_t cb);

    void setTxVerbose(bool query_send_verbose);

    RxMsg snapshotRxMsg() const;

    TxMsg& tx_msg();

private:
    std::atomic<int64_t> last_autoaim_tx_ns_ {0};
    bool                 query_send_verbose_ {false};
    std::thread          read_thread_;

    mutable std::mutex rx_msg_mutex_;
    std::mutex    rx_cb_mutex_;
    rx_callback_t rx_callback_ {};
};

#endif // ROBO_CV_COMMPORT_H
