# 双雷达 + 单 IMU LIO 适配指导方案

## 1. 核心结论

双雷达单 IMU LIO 的正确抽象是：

> 一个 IMU body 上挂了两个真实 LiDAR measurement source，  
> 而不是两个雷达先拼成一个假想虚拟 LiDAR。

不要把左右雷达点云强行时间同步成一帧、统一 `header.stamp`、统一 `frame_id`，再伪装成一个单雷达点云喂给原版 LIO。

正确做法是：

- 只选用一个 IMU：左雷达 IMU。
- 分别标定该 IMU 到左右两颗 LiDAR 的外参。
- 保留每个点的真实采样时间。
- 保留每个点的来源雷达 ID。
- 让 LIO 根据 `lidar_id` 选择对应外参，并根据 `point_time` 做去畸变、投影、匹配和滤波更新。

---

## 2. 正确数学模型

设：

```text
I  = 唯一 IMU 坐标系
L0 = 左 LiDAR 坐标系
L1 = 右 LiDAR 坐标系
W  = 世界系 / odom / map
```

每个点应该按如下模型处理：

```text
p_W = T_W_I(t_point) · T_I_Li · p_Li
```

含义：

```text
p_Li       = 点在第 i 个 LiDAR 坐标系下的坐标
T_I_Li     = 第 i 个 LiDAR 到唯一 IMU 坐标系的外参
T_W_I(t)   = IMU 在该点采样时刻的世界位姿
p_W        = 点变换到世界系后的坐标
```

其中：

```text
i = 0 表示左雷达
i = 1 表示右雷达
```

LIO 内部应该做：

```cpp
T_I_L = extrinsics[point.lidar_id];
p_I = T_I_L * p_L;
p_W = T_W_I(point.time) * p_I;
```

---

## 3. 不推荐的错误做法

不要这样：

```text
左雷达点云
+
右雷达点云
↓
按时间近似拼成一帧
↓
统一 header.stamp
↓
统一 frame_id
↓
伪装成一个虚拟雷达点云
↓
喂给原版单雷达 LIO
```

原因：

1. 左右雷达安装位置不同，杆臂不同。
2. 车体旋转时，左右雷达瞬时线速度不同。
3. 两颗雷达的点云畸变模型不同。
4. 两颗雷达相对 IMU 的时间偏移可能不同。
5. 强行合并会破坏每个点的真实采样时间。
6. 原版单雷达 LIO 通常只使用一套 `extrinsic_R/T`。

车体存在角速度时：

```text
v_Li = v_I + ω × r_I_Li
```

左右雷达的 `r_I_Li` 不同，所以它们不能共用一个虚拟雷达的运动补偿模型。

---

## 4. 正确系统架构


多雷达适配层职责：

1. 保留每个点的 `offset_time` / `timestamp`。
2. 标记每个点的 `lidar_id`。
3. 为每个 `lidar_id` 绑定对应的 `T_I_Li`。
4. 可按时间顺序组织点云。
5. 不提前做完整运动补偿。
6. 不把两颗雷达伪装成同一个传感器。

---

## 5. 需要标定的外参

最终需要两套外参：

```text
T_I_L0：左 LiDAR 到唯一 IMU 的外参
T_I_L1：右 LiDAR 到唯一 IMU 的外参
```

如果使用左 MID360 的 IMU：

```text
I  = 左 MID360 的 IMU
L0 = 左 MID360 的 LiDAR
L1 = 右 MID360 的 LiDAR
```

可以先求：

```text
T_I_L0
T_L0_L1
```

再计算：

```text
T_I_L1 = T_I_L0 · T_L0_L1
```

但 LIO 运行时仍应显式保存两套外参：

```text
lidar_id = 0 → T_I_L0
lidar_id = 1 → T_I_L1
```

不要把右雷达提前变换后伪装成左雷达。

---

## 6. IMU 选择建议

左雷达imu（左雷达就是front_mid360）

## 7. 外参标定流程

### 7.1 标定 IMU 到左 LiDAR



方法：

使用pb2025_sentry_robot.sdf.xmacro中按照物理世界刚性装配的真实位姿

验证标准：

- 单左雷达 + 单 IMU 时 odom 稳定。
- 静止时姿态不抖。
- 运动时地图不明显撕裂。
- TF 树无重复发布和冲突。

---

### 7.2 标定左右 LiDAR 外参

目标：

```text
求 T_L0_L1
```

推荐流程：

使用pb2025_sentry_robot.sdf.xmacro中按照物理世界刚性装配的真实位姿
由 `T_I_L1 = T_I_L0 · T_L0_L1` 得到右雷达到 IMU 的外参。

---

## 8. 时间同步原则

时间同步仍然需要，但不是把左右点云强行凑成一帧。

错误理解：

```text
时间同步 = 把左右点云拼成同一个 header.stamp 的虚拟点云
```

正确理解：

```text
时间同步 = 每个点的采样时刻都能准确映射到唯一 IMU 时间轴上
```

LIO 真正需要知道的是：

```text
这个点是在 IMU 时间轴的哪一刻采到的
```

因此需要保留：

- 左雷达点的 `offset_time`
- 右雷达点的 `offset_time`
- 两颗雷达各自相对 IMU 的 `time_offset`
- IMU 数据时间戳
- 点云包时间戳

---

## 9. 点云预处理边界

### 可以提前做

可以提前做：

1. 点类型转换。
2. 给点添加 `lidar_id`。
3. 保留或修正 `offset_time`。
4. 按时间排序。
5. 将点从各自 LiDAR 坐标系变换到 IMU/body 坐标系。

例如：

```text
p_I = T_I_L0 · p_L0
p_I = T_I_L1 · p_L1
```

前提是仍然保留：

```text
point.time
point.lidar_id
```

---

### 不应该提前做

不建议提前做：

1. 把两路点云统一成一个虚拟 LiDAR frame。
2. 丢弃 `lidar_id`。
3. 丢弃每点 `offset_time`。
4. 把所有点改成同一个 timestamp。
5. 直接用当前位姿把点变到 world/map。
6. 在 LIO 外部做完整运动补偿后再让 LIO 重复去畸变。

正确边界：

```text
外参变换可以提前做
运动补偿 / 去畸变应交给 LIO
```

---

## 10. LIO 代码修改方向

如果原版 LIO 只支持：

```yaml
extrinsic_T: [...]
extrinsic_R: [...]
```

说明它只支持一套 LiDAR-IMU 外参。

需要改成多套外参：

```yaml
lidars:
  - topic: /left/livox/lidar
    lidar_id: 0
    extrinsic_T: [tx0, ty0, tz0]
    extrinsic_R: [r00, r01, r02,
                  r10, r11, r12,
                  r20, r21, r22]

  - topic: /right/livox/lidar
    lidar_id: 1
    extrinsic_T: [tx1, ty1, tz1]
    extrinsic_R: [r00, r01, r02,
                  r10, r11, r12,
                  r20, r21, r22]

imu_topic: /left/livox/imu
```

点处理逻辑从：

```cpp
p_I = T_I_L * p_L;
```

改成：

```cpp
T_I_L = extrinsics[point.lidar_id];
p_I = T_I_L * p_L;
```

世界系投影逻辑：

```cpp
p_W = T_W_I(point.time) * T_I_L[point.lidar_id] * p_L;
```

---

## 11. 推荐点数据结构

每个点至少应包含：

```cpp
struct MultiLidarPoint
{
    float x;
    float y;
    float z;
    float intensity;
    double offset_time;
    uint8_t lidar_id;
};
```

对于 Livox 点云，尽量保留：

```text
x, y, z
reflectivity
offset_time
line
tag
lidar_id / source_id
```

如果消息格式不支持 `lidar_id`，推荐：

```text
方案 ：LIO 内部分别订阅 /left/livox/lidar 和 /right/livox/lidar

---

## ROS2 验证命令

检查 topic：

```bash
ros2 topic list | grep livox
ros2 topic echo /left/livox/imu --once
ros2 topic echo /left/livox/lidar --once
ros2 topic echo /right/livox/lidar --once
```

检查 frame：

```bash
ros2 topic echo /left/livox/imu --once | grep frame_id
ros2 topic echo /left/livox/lidar --once | grep frame_id
ros2 topic echo /right/livox/lidar --once | grep frame_id
```

检查 TF：

```bash
ros2 run tf2_ros tf2_echo base_link left_lidar_frame
ros2 run tf2_ros tf2_echo base_link right_lidar_frame
ros2 run tf2_ros tf2_echo left_lidar_frame right_lidar_frame
```

检查频率：

```bash
ros2 topic hz /left/livox/lidar
ros2 topic hz /right/livox/lidar
ros2 topic hz /left/livox/imu
```

检查 IMU 是否重复：

```bash
ros2 topic list | grep imu
ros2 topic info /left/livox/imu -v
ros2 topic info /right/livox/imu -v
```

---


## 最终目标形态

目标系统：

```text
唯一 IMU：
/left/livox/imu 或外置 IMU

两路 LiDAR：
/left/livox/lidar
/right/livox/lidar

两套外参：
T_I_L0
T_I_L1

每个点保留：
point_time
lidar_id
原始 xyz

LIO 内部：
根据 lidar_id 选择外参
根据 point_time 做去畸变
根据 IMU 预测位姿投影到世界系
再做地图匹配和滤波更新
```

最终一句话：

> 双雷达适配 LIO 的关键不是“把两路点云拼起来”，  
> 而是“让 LIO 知道每个点来自哪颗雷达、什么时候采到、该用哪套外参”。
