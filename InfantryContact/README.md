<!-- ──────────────── HEADER ──────────────── -->
<h1 align="center">⚙️ Contact Node</h1>
<p align="center"><em>串联 ROS 2 自瞄算法与下位机固件的高可靠通信枢纽</em></p>

<p align="center">
  <a href="#-项目概览">📘 项目概览</a> •
  <a href="#-功能亮点">✨ 功能亮点</a> •
  <a href="#-消息流转">📡 消息流转</a> •
  <a href="#-参数配置">⚙️ 参数配置</a> •
  <a href="#-构建与运行">🚀 构建与运行</a> •
  <a href="#-通信协议备注">🛰️ 协议备注</a> •
  <a href="#-todo--建议方向">🧭 TODO</a>
</p>

---

<!-- ──────────────── BADGES ──────────────── -->
<p align="center">
  <img alt="ROS2" src="https://img.shields.io/badge/ROS2-Humble-blueviolet?style=flat-square">
  <img alt="Serial" src="https://img.shields.io/badge/Serial-115200-orange?style=flat-square">
  <img alt="Status" src="https://img.shields.io/badge/status-Active-success?style=flat-square">
</p>

---

## 📘 项目概览
>
> Contact Node 基于 ROS 2 构建，用于将 <code>/autoaim/target</code> 话题中的自瞄指令实时发送到下位机
> 控制板，并把云台姿态与裁判系统查询结果回传到 ROS 系统。当前实现同时覆盖两类通信：
> 一类是下位机周期上报的 <code>GimbalState</code>，另一类是上位机按需/按调度发送的 <code>QueryType</code>
> 查询请求与对应响应。

---

## ✨ 功能亮点

| 特性 | 说明 |
| ---- | ---- |
| **ROS 2 ↔ MCU 桥接** | 订阅 <code>gary_msgs/msg/AutoAIM</code>，向下位机发送姿态；回传关节角、四元数以及裁判系统查询结果。 |
| **可组合控制中间件** | 依次执行单位换算、PID 补偿、低通滤波与安全限幅，可按需替换回调。 |
| **异步串口驱动** | <code>CommPort</code> 常驻监听 <code>/dev/ttyACM0</code>，掉线时自动扫描 STMicroelectronics 设备重连。 |
| **结构化二进制协议** | <code>TxMsg</code>/<code>RxMsg</code> 使用 packed 结构体与下位机 USB 原样内存发送逻辑保持一致。 |
| **参数化行为** | <code>config/contact_node.yaml</code> 管理 PID、滤波与日志开关，运行时即可调参。 |
| **开箱即用** | <code>launch/contact_node.launch.py</code> 载入默认参数并启动节点，方便测试部署。 |

---

## 📡 消息流转

<h3>输入链路</h3>
<ol>
  <li>订阅 <code>/autoaim/target</code>（<code>gary_msgs/msg/AutoAIM</code>）。</li>
  <li>将 pitch/yaw 从弧度转换为角度。</li>
  <li>结合最新回传数据运行 PID 控制器。</li>
  <li>对航向应用一阶低通滤波，对俯仰/航向做安全限幅。</li>
  <li>写入 <code>TxAutoaimNaviMsg</code>（当前首字节为 <code>0x3A</code>，随后是 pitch / yaw / chassis twist / 状态位）并通过 <code>CommPort</code> 原样发送。</li>
  <li>若启用 <code>QueryScheduler</code>，上位机会额外发送单字节查询码 <code>1..5</code>，请求下位机返回对应裁判系统信息。</li>
</ol>

<h3>输出链路</h3>
<p>串口读线程收到下位机原始二进制数据后，立即解析并发布：</p>
<ul>
  <li><code>/autoaim/status</code>（<code>gary_msgs/msg/AutoAIM</code>）</li>
  <li><code>/joint_states</code>（<code>sensor_msgs/msg/JointState</code>）</li>
  <li><code>/quaternion</code>（<code>geometry_msgs/msg/Quaternion</code>）</li>
  <li><code>/navi_decision/robot_status</code>（<code>gary_msgs/msg/RobotStatus</code>）</li>
  <li><code>/navi_decision/robot_hp</code>（<code>gary_msgs/msg/RobotHP</code>）</li>
  <li><code>/navi_decision/game_status</code>（<code>gary_msgs/msg/GameStatus</code>）</li>
  <li><code>/navi_decision/game_result</code>（<code>gary_msgs/msg/GameResult</code>）</li>
  <li><code>/navi_decision/field_events</code>（<code>gary_msgs/msg/FieldEvents</code>）</li>
  <li><code>/navi_decision/robot_buff</code>（<code>gary_msgs/msg/RobotBuff</code>）</li>
  <li><code>/navi_decision/robot_pos</code>（<code>gary_msgs/msg/RobotPosition</code>）</li>
</ul>

---

## ⚙️ 参数配置

<p>参数集中在 <code>config/contact_node.yaml</code>，由 <code>Params</code> 结构声明：</p>
<table>
  <thead>
    <tr>
      <th>参数键</th>
      <th>含义</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code>pid.yaw.*</code> / <code>pid.pitch.*</code></td>
      <td>俯仰与航向 PID 增益、积分限幅，对应 <code>pid.h</code> 控制器。</td>
    </tr>
    <tr>
      <td><code>filter.yaw_cutoff</code></td>
      <td>航向低通滤波器的截止频率（Hz），影响 <code>LowPassFilter</code> 响应速度。</td>
    </tr>
    <tr>
      <td><code>rx.timerwall_ms</code></td>
      <td>历史参数，当前接收主路径已经改为独立串口读线程；保留该参数主要用于兼容说明与日志展示。</td>
    </tr>
    <tr>
      <td><code>rx.gimbal_status_verbose</code></td>
      <td>控制 <code>GimbalState</code> 发布日志，建议高频场景关闭。</td>
    </tr>
    <tr>
      <td><code>rx.response_verbose</code></td>
      <td>控制 query response 发布日志。</td>
    </tr>
    <tr>
      <td><code>tx.query_send_verbose</code> / <code>tx.send_cmd_verbose</code></td>
      <td>控制查询发送与控制命令发送日志。</td>
    </tr>
    <tr>
      <td><code>tx.query_scheduler_enabled</code></td>
      <td>控制是否启用上位机查询调度器。若下位机发送逻辑优先处理 query，再发送云台状态，开启后可能压低 <code>GimbalState</code> 频率。</td>
    </tr>
  </tbody>
</table>
<p>修改参数后重新启动节点即可生效；PID 目标角度由实时消息动态赋值。</p>

---

## 🚀 构建与运行

```bash
# 构建
colcon build --packages-select contact

# 环境变量
source install/setup.bash

# 启动节点
ros2 launch contact contact_node.launch.py
```

<p>确保 <code>/dev/ttyACM0</code> 指向下位机串口。如需使用其他设备，可在 <code>CommPort::CommPort()</code> 中修改或结合 TODO 中的参数化方案。</p>

<h3>依赖组件</h3>
<ul>
  <li>ROS 2（rclcpp 及常用消息包）</li>
  <li><code>gary_msgs</code></li>
  <li><code>serial</code> 库（随仓库提供于 <code>serial/lib</code>）</li>
  <li><code>spdlog</code></li>
</ul>

---

## 🛰️ 通信协议备注

<ul>
  <li><strong>GimbalState 帧</strong>：当前按下位机 <code>sendBuffer(&amp;m_gimbalStateMsg, sizeof(m_gimbalStateMsg))</code> 的实现对齐，线上布局为 <code>header(0x3A) + imuRoll + imuPitch + imuYaw + imuQuad[4] + bulletSpeed</code>，总计 33 字节。</li>
  <li><strong>Query 请求帧</strong>：上位机发送单字节查询码 <code>1..5</code>，分别对应 <code>SELF_INFO / ENEMY_HP / GAME_INFO / BUFFS / POS</code>。</li>
  <li><strong>Query 响应帧</strong>：下位机直接发送对应 packed 结构体原始内存，首字节就是各自 <code>SOF</code> / header，当前没有额外长度字段、CRC 字段，也没有统一尾字节。</li>
  <li><strong>Autoaim 命令帧</strong>：上位机当前发送 <code>TxAutoaimNaviMsg</code> 的原始内存，首字节为 <code>0x3A</code>。</li>
  <li><strong>频率注意事项</strong>：若下位机调度逻辑对 query 采用“先处理查询，再发送云台状态”的优先级策略，则启用 <code>QueryScheduler</code> 可能显著压低 <code>/joint_states</code> / <code>/autoaim/status</code> 的发布频率。</li>
</ul>

---

## 🧭 TODO / 建议方向

<ul>
  <li>[ ] 接入 CRC 校验流程，提升帧错误检测与容错能力。</li>
  <li>[ ] 设计基于 Launch/rostest 的串口数据模拟测试，覆盖关键消息流。</li>
  <li>[ ] 支持运行时 PID 调参，可通过参数事件回调或诊断话题发布。</li>
  <li>[ ] 补充协议文档，如帧格式示意或状态机时序图，便于跨团队协作。</li>
</ul>

---

<p align="center"><sub>© 2025 XJTLU GMaster</sub></p>
