#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
import matplotlib.pyplot as plt
import csv
import numpy as np
import os
from datetime import datetime

class ImuProcessor(Node):
    def __init__(self):
        super().__init__('imu_processor')
        self.subscription = self.create_subscription(
            Imu,
            '/livox/imu',
            self.imu_callback,
            10
        )
        self.timestamps = []
        self.ax_list = []
        self.ay_list = []
        self.az_list = []
        self.start_time = None
        self.get_logger().info("IMU 数据处理节点已启动...")

    def imu_callback(self, msg):
        # 获取时间戳（秒 + 纳秒）
        timestamp = msg.header.stamp.sec + msg.header.stamp.nanosec * 1e-9
        
        # 如果是第一个数据点，设置起始时间
        if self.start_time is None:
            self.start_time = timestamp
        
        # 计算相对于起始时间的时间
        relative_time = timestamp - self.start_time
        
        # 获取线加速度
        ax = msg.linear_acceleration.x
        ay = msg.linear_acceleration.y
        az = msg.linear_acceleration.z
        
        # 存储数据
        self.timestamps.append(relative_time)
        self.ax_list.append(ax)
        self.ay_list.append(ay)
        self.az_list.append(az)
        
        self.get_logger().debug(f"时间: {relative_time:.6f}s, ax={ax:.6f}, ay={ay:.6f}, az={az:.6f}")

    def process_and_save_data(self):
        if not self.timestamps:
            self.get_logger().warn("未接收到任何数据，无法处理")
            return
        
        # 1. 计算平均值
        avg_ax = np.mean(self.ax_list)
        avg_ay = np.mean(self.ay_list)
        avg_az = np.mean(self.az_list)
        
        # 2. 生成文件名（带时间戳）
        timestamp_str = datetime.now().strftime("%Y%m%d_%H%M%S")
        path = "$ROS_PACKAGE_PATH/"
        #"/home/nvidia/navi2/ros_ws/src/imu_record/"
        txt_filename = f"{path}imu_average_{timestamp_str}.txt"
        csv_filename = f"{path}imu_data_{timestamp_str}.csv"
        
        # 3. 保存平均值到文本文件
        with open(txt_filename, 'w') as f:
            f.write(f"加速度平均值 (基于 {len(self.timestamps)} 个数据点):\n")
            f.write(f"[ {avg_ax:.8f} , {avg_ay:.8f} , {avg_az:.8f} ]\n")
        
        # 4. 保存原始数据到CSV
        with open(csv_filename, 'w', newline='') as csvf:
            writer = csv.writer(csvf)
            writer.writerow(['时间(s)', 'ax(m/s²)', 'ay(m/s²)', 'az(m/s²)'])
            for t, ax, ay, az in zip(self.timestamps, self.ax_list, self.ay_list, self.az_list):
                writer.writerow([f"{t:.6f}", f"{ax:.8f}", f"{ay:.8f}", f"{az:.8f}"])
        
        # 5. 生成加速度-时间图
        plt.figure(figsize=(12, 8))
        
        # ax-t 图
        plt.subplot(3, 1, 1)
        plt.plot(self.timestamps, self.ax_list, 'r-')
        plt.ylabel('ax (m/s²)')
        plt.title('线加速度随时间变化')
        plt.grid(True)
        
        # ay-t 图
        plt.subplot(3, 1, 2)
        plt.plot(self.timestamps, self.ay_list, 'g-')
        plt.ylabel('ay (m/s²)')
        plt.grid(True)
        
        # az-t 图
        plt.subplot(3, 1, 3)
        plt.plot(self.timestamps, self.az_list, 'b-')
        plt.ylabel('az (m/s²)')
        plt.xlabel('时间 (s)')
        plt.grid(True)
        
        # 保存图像
        plot_filename = f"{path}acceleration_plots_{timestamp_str}.png"
        plt.tight_layout()
        plt.savefig(plot_filename)
        
        self.get_logger().info(f"数据已保存: {txt_filename}, {csv_filename}, {plot_filename}")
        self.get_logger().info(f"平均值: ax={avg_ax:.6f}, ay={avg_ay:.6f}, az={avg_az:.6f} m/s²")

def main(args=None):
    rclpy.init(args=args)
    node = ImuProcessor()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("检测到Ctrl+C，正在处理并保存数据...")
        node.process_and_save_data()
        node.destroy_node()
        rclpy.shutdown()
    except Exception as e:
        node.get_logger().error(f"发生错误: {str(e)}")
        node.process_and_save_data()
        node.destroy_node()
        rclpy.shutdown()
    finally:
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()

