import json
import socket
import threading
from typing import Any, Dict

import rclpy
from gary_msgs.msg import AutoAIM
from rclpy.node import Node
from sensor_msgs.msg import JointState


class UdpBridgeNode(Node):
    def __init__(self) -> None:
        super().__init__("udp_bridge_node")

        self.declare_parameter("peer_ip", "192.168.1.50")
        self.declare_parameter("tx_port", 20000)
        self.declare_parameter("rx_port", 20000)
        self.declare_parameter("bind_ip", "0.0.0.0")
        self.declare_parameter("send_joint_states", True)
        self.declare_parameter("send_autoaim_target", True)
        self.declare_parameter("recv_joint_states", True)
        self.declare_parameter("recv_autoaim_target", True)

        self.peer_ip = str(self.get_parameter("peer_ip").value)
        self.tx_port = int(self.get_parameter("tx_port").value)
        self.rx_port = int(self.get_parameter("rx_port").value)
        self.bind_ip = str(self.get_parameter("bind_ip").value)

        self.send_joint_states = bool(self.get_parameter("send_joint_states").value)
        self.send_autoaim_target = bool(self.get_parameter("send_autoaim_target").value)
        self.recv_joint_states = bool(self.get_parameter("recv_joint_states").value)
        self.recv_autoaim_target = bool(self.get_parameter("recv_autoaim_target").value)

        self.bridge_id = f"{self.get_name()}_{self.get_clock().now().nanoseconds}"

        self.tx_sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.rx_sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.rx_sock.bind((self.bind_ip, self.rx_port))
        self.rx_sock.settimeout(0.2)

        qos = rclpy.qos.QoSProfile(depth=10)

        self.joint_pub = self.create_publisher(JointState, "/joint_states", qos)
        self.autoaim_pub = self.create_publisher(AutoAIM, "/autoaim/target", qos)

        self.joint_sub = self.create_subscription(
            JointState, "/joint_states", self._on_joint_states, qos
        )
        self.autoaim_sub = self.create_subscription(
            AutoAIM, "/autoaim/target", self._on_autoaim_target, qos
        )

        self._running = True
        self.rx_thread = threading.Thread(target=self._rx_loop, daemon=True)
        self.rx_thread.start()

        self.get_logger().info(
            f"UDP bridge started. peer={self.peer_ip}:{self.tx_port}, bind={self.bind_ip}:{self.rx_port}"
        )

    def destroy_node(self) -> bool:
        self._running = False
        try:
            self.rx_sock.close()
            self.tx_sock.close()
        except OSError:
            pass
        return super().destroy_node()

    def _on_joint_states(self, msg: JointState) -> None:
        if not self.send_joint_states:
            return
        payload = {
            "bridge_id": self.bridge_id,
            "topic": "/joint_states",
            "data": {
                "header": {
                    "stamp": {
                        "sec": int(msg.header.stamp.sec),
                        "nanosec": int(msg.header.stamp.nanosec),
                    },
                    "frame_id": msg.header.frame_id,
                },
                "name": list(msg.name),
                "position": list(msg.position),
                "velocity": list(msg.velocity),
                "effort": list(msg.effort),
            },
        }
        self._send_json(payload)

    def _on_autoaim_target(self, msg: AutoAIM) -> None:
        if not self.send_autoaim_target:
            return
        payload = {
            "bridge_id": self.bridge_id,
            "topic": "/autoaim/target",
            "data": {
                "header": {
                    "stamp": {
                        "sec": int(msg.header.stamp.sec),
                        "nanosec": int(msg.header.stamp.nanosec),
                    },
                    "frame_id": msg.header.frame_id,
                },
                "pitch": float(msg.pitch),
                "yaw": float(msg.yaw),
                "target_id": int(msg.target_id),
                "target_distance": float(msg.target_distance),
                "vision_mode": int(msg.vision_mode),
                "shoot_command": int(msg.shoot_command),
            },
        }
        self._send_json(payload)

    def _send_json(self, payload: Dict[str, Any]) -> None:
        try:
            data = json.dumps(payload, ensure_ascii=True, separators=(",", ":")).encode("utf-8")
            self.tx_sock.sendto(data, (self.peer_ip, self.tx_port))
        except Exception as exc:  # noqa: BLE001
            self.get_logger().warning(f"UDP send failed: {exc}")

    def _rx_loop(self) -> None:
        while self._running:
            try:
                data, _addr = self.rx_sock.recvfrom(65535)
            except socket.timeout:
                continue
            except OSError:
                break

            try:
                payload = json.loads(data.decode("utf-8"))
                if payload.get("bridge_id") == self.bridge_id:
                    continue
                topic = payload.get("topic", "")
                msg_data = payload.get("data", {})

                if topic == "/joint_states" and self.recv_joint_states:
                    msg = JointState()
                    header = msg_data.get("header", {})
                    stamp = header.get("stamp", {})
                    msg.header.stamp.sec = int(stamp.get("sec", 0))
                    msg.header.stamp.nanosec = int(stamp.get("nanosec", 0))
                    msg.header.frame_id = str(header.get("frame_id", ""))
                    msg.name = list(msg_data.get("name", []))
                    msg.position = list(msg_data.get("position", []))
                    msg.velocity = list(msg_data.get("velocity", []))
                    msg.effort = list(msg_data.get("effort", []))
                    self.joint_pub.publish(msg)

                elif topic == "/autoaim/target" and self.recv_autoaim_target:
                    msg = AutoAIM()
                    header = msg_data.get("header", {})
                    stamp = header.get("stamp", {})
                    msg.header.stamp.sec = int(stamp.get("sec", 0))
                    msg.header.stamp.nanosec = int(stamp.get("nanosec", 0))
                    msg.header.frame_id = str(header.get("frame_id", ""))
                    msg.pitch = float(msg_data.get("pitch", 0.0))
                    msg.yaw = float(msg_data.get("yaw", 0.0))
                    msg.target_id = int(msg_data.get("target_id", 0))
                    msg.target_distance = float(msg_data.get("target_distance", 0.0))
                    msg.vision_mode = int(msg_data.get("vision_mode", 0))
                    msg.shoot_command = int(msg_data.get("shoot_command", 0))
                    self.autoaim_pub.publish(msg)
            except Exception as exc:  # noqa: BLE001
                self.get_logger().warning(f"UDP parse/publish failed: {exc}")


def main() -> None:
    rclpy.init()
    node = UdpBridgeNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
