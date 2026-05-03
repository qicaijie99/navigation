# Software PTP for Dual MID360

This directory contains a minimal `linuxptp` setup for the current host:

- NIC: `eno1`
- Time stamping mode: software only
- Role: onboard computer acts as the PTP master for the lidar subnet

## Install

```bash
sudo apt-get install -y linuxptp
```

## Start software PTP

```bash
bash pb2025_nav_bringup/config/reality/linuxptp/run_ptp4l_software_master.sh
```

If the lidar subnet is not on `eno1`, pass the interface name explicitly:

```bash
bash pb2025_nav_bringup/config/reality/linuxptp/run_ptp4l_software_master.sh eth0
```

## What changed in ROS params

- `force_ros_time_stamp: false`
  This lets `livox_ros_driver2` preserve lidar/PTP timestamps when the MID360 reports them.
- `require_timestamp_sync: false`
  This keeps the system runnable while software PTP is being validated. When sync is absent, the driver will still fall back to host system time instead of dropping packets.
- `dual_lidar_fuser.use_hardware_sync: false`
  Keep this disabled until both lidars are confirmed to output synchronized non-zero header stamps consistently.

## Validate

Run `ptp4l` and look for the port on `eno1` entering the server state. Then start the lidar driver and confirm:

```bash
ros2 topic echo /livox/lidar_192_168_1_124 --once --field header
ros2 topic echo /livox/lidar_192_168_1_177 --once --field header
```

If software PTP is actually being used by the lidars, the header stamps should advance on a common clock and the left/right stamp difference should become noticeably more stable than pure local-arrival timing.

## Next step after validation

After repeated runs confirm stable synchronized lidar stamps, tighten the pipeline in stages:

1. Set `dual_lidar_fuser.use_hardware_sync` to `true`.
2. If you want strict enforcement, set `require_timestamp_sync` to `true`.

Do not enable strict mode before validating the lidar timestamps, otherwise packets can be dropped immediately when PTP is absent or unstable.
