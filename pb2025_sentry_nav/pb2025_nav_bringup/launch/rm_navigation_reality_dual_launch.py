import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    ExecuteProcess,
    IncludeLaunchDescription,
    TimerAction,
)
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, TextSubstitution
from launch_ros.actions import Node


def generate_launch_description():
    bringup_dir = get_package_share_directory("pb2025_nav_bringup")
    launch_dir = os.path.join(bringup_dir, "launch")
    config_dir = os.path.join(bringup_dir, "config", "reality")
    #livox_left_params = os.path.join(
    #    bringup_dir, "config", "reality", "livox_left_params.yaml"
    #)
    #livox_right_params = os.path.join(
    #    bringup_dir, "config", "reality", "livox_right_params.yaml"
    #)
    livox_dual_params = os.path.join(
        bringup_dir, "config", "reality", "livox_dual_params.yaml"
    )

    dual_lidar_fuser_params = os.path.join(
        bringup_dir, "config", "reality", "dual_lidar_fuser.yaml"
    )

    namespace = LaunchConfiguration("namespace")
    slam = LaunchConfiguration("slam")
    world = LaunchConfiguration("world")
    map_yaml_file = LaunchConfiguration("map")
    prior_pcd_file = LaunchConfiguration("prior_pcd_file")
    use_sim_time = LaunchConfiguration("use_sim_time")
    params_file = LaunchConfiguration("params_file")
    autostart = LaunchConfiguration("autostart")
    use_composition = LaunchConfiguration("use_composition")
    use_respawn = LaunchConfiguration("use_respawn")
    rviz_config_file = LaunchConfiguration("rviz_config_file")
    use_robot_state_pub = LaunchConfiguration("use_robot_state_pub")
    use_rviz = LaunchConfiguration("use_rviz")
    start_ptp4l = LaunchConfiguration("start_ptp4l")
    ptp_interface = LaunchConfiguration("ptp_interface")
    ptp_startup_delay = LaunchConfiguration("ptp_startup_delay")

    declare_namespace_cmd = DeclareLaunchArgument(
        "namespace",
        default_value="",
        description="Top-level namespace",
    )

    declare_slam_cmd = DeclareLaunchArgument(
        "slam",
        default_value="False",
        description="Whether run a SLAM. If True, it will disable small_gicp and send static tf (map->odom)",
    )

    declare_world_cmd = DeclareLaunchArgument(
        "world",
        default_value="rmul_2024",
        description="Select world: 'rmul_2024' or 'rmuc_2024'",
    )

    declare_map_yaml_cmd = DeclareLaunchArgument(
        "map",
        default_value=[
            TextSubstitution(text=os.path.join(bringup_dir, "map", "reality", "")),
            world,
            TextSubstitution(text=".yaml"),
        ],
        description="Full path to map file to load",
    )

    declare_prior_pcd_file_cmd = DeclareLaunchArgument(
        "prior_pcd_file",
        default_value=[
            TextSubstitution(text=os.path.join(bringup_dir, "pcd", "reality", "")),
            world,
            TextSubstitution(text=".pcd"),
        ],
        description="Full path to prior pcd file to load",
    )

    declare_use_sim_time_cmd = DeclareLaunchArgument(
        "use_sim_time",
        default_value="False",
        description="Use simulation (Gazebo) clock if True",
    )

    declare_params_file_cmd = DeclareLaunchArgument(
        "params_file",
        default_value=os.path.join(bringup_dir, "config", "reality", "nav2_params.yaml"),
        description="Full path to the ROS2 parameters file to use for all launched nodes",
    )

    declare_autostart_cmd = DeclareLaunchArgument(
        "autostart",
        default_value="true",
        description="Automatically startup the nav2 stack",
    )

    declare_use_composition_cmd = DeclareLaunchArgument(
        "use_composition",
        default_value="True",
        description="Whether to use composed bringup",
    )

    declare_use_respawn_cmd = DeclareLaunchArgument(
        "use_respawn",
        default_value="False",
        description="Whether to respawn if a node crashes. Applied when composition is disabled.",
    )

    declare_use_robot_state_pub_cmd = DeclareLaunchArgument(
        "use_robot_state_pub",
        default_value="True",
        description="Whether to start the robot state publisher",
    )

    declare_rviz_config_file_cmd = DeclareLaunchArgument(
        "rviz_config_file",
        default_value=os.path.join(bringup_dir, "rviz", "nav2_default_view.rviz"),
        description="Full path to the RVIZ config file to use",
    )

    declare_use_rviz_cmd = DeclareLaunchArgument(
        "use_rviz",
        default_value="False",
        description="Whether to start RVIZ",
    )

    declare_start_ptp4l_cmd = DeclareLaunchArgument(
        "start_ptp4l",
        default_value="False",
        description="Whether to start software PTP grandmaster for the Livox lidars",
    )

    declare_ptp_interface_cmd = DeclareLaunchArgument(
        "ptp_interface",
        default_value="eno1",
        description="Network interface used by ptp4l software timestamping",
    )

    declare_ptp_startup_delay_cmd = DeclareLaunchArgument(
        "ptp_startup_delay",
        default_value="0.0",
        description="Seconds to wait before starting the Livox driver after ptp4l",
    )

    # 0) Optional software PTP grandmaster. Host ROS timestamps are the default
    # because software PTP is not stable enough on the current robot network.
    ptp4l_cmd = ExecuteProcess(
        cmd=[
            os.path.join(
                config_dir, "linuxptp", "run_ptp4l_software_master.sh"
            ),
            ptp_interface,
        ],
        name="ptp4l_software_master",
        output="screen",
        condition=IfCondition(start_ptp4l),
    )

    # 1) Left Livox driver
    #livox_left_driver_cmd = Node(
    #    package="livox_ros_driver2",
    #    executable="livox_ros_driver2_node",
    #    name="livox_ros_driver2_left",
    #    output="screen",
    #    parameters=[livox_left_params],
    #    remappings=[
    #        ("livox/lidar", "/livox/lidar_192_168_1_124"),
    #        ("livox/imu", "/livox/imu_192_168_1_124"),
    #    ],
    #)

    # 2) Right Livox driver
    #livox_right_driver_cmd = Node(
    #    package="livox_ros_driver2",
    #    executable="livox_ros_driver2_node",
    #    name="livox_ros_driver2_right",
    #    output="screen",
    #    parameters=[livox_right_params],
    #    remappings=[
    #        ("livox/lidar", "/livox/lidar_192_168_1_177"),
    #        ("livox/imu", "/livox/imu_192_168_1_177"),
    #    ],
    #)

    # 1) Dual Livox driver
    livox_dual_driver_cmd = Node(
        package="livox_ros_driver2",
        executable="livox_ros_driver2_node",
        name="livox_ros_driver2_dual",
        output="screen",
        parameters=[os.path.join(config_dir, "livox_dual_params.yaml")],
    )

    # Delay the data source so software PTP has time to create its socket and
    # settle before Livox publishes lidar/IMU stamps consumed by Point-LIO.
    delayed_livox_dual_driver_cmd = TimerAction(
        period=ptp_startup_delay,
        actions=[livox_dual_driver_cmd],
    )

    # 3) Dual lidar fuser
    dual_lidar_fuser_cmd = Node(
        package="dual_lidar_fuser",
        executable="dual_lidar_fuser_node",   
        name="dual_lidar_fuser",
        output="screen",
        parameters=[dual_lidar_fuser_params],
    )

    # 4) robot_state_publisher
    start_robot_state_publisher_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(launch_dir, "robot_state_publisher_launch.py")
        ),
        condition=IfCondition(use_robot_state_pub),
        launch_arguments={
            "namespace": namespace,
            "use_sim_time": use_sim_time,
        }.items(),
    )
	
    # 5) original navigation bringup
    bringup_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(launch_dir, "bringup_launch.py")),
        launch_arguments={
            "namespace": namespace,
            "slam": slam,
            "map": map_yaml_file,
            "prior_pcd_file": prior_pcd_file,
            "use_sim_time": use_sim_time,
            "params_file": params_file,
            "autostart": autostart,
            "use_composition": use_composition,
            "use_respawn": use_respawn,
        }.items(),
    )

    # 6) joy teleop
    joy_teleop_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(launch_dir, "joy_teleop_launch.py")),
        launch_arguments={
            "namespace": namespace,
            "use_sim_time": use_sim_time,
            "joy_config_file": params_file,
        }.items(),
    )

    # 7) rviz
    rviz_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(launch_dir, "rviz_launch.py")),
        condition=IfCondition(use_rviz),
        launch_arguments={
            "namespace": namespace,
            "use_sim_time": use_sim_time,
            "rviz_config": rviz_config_file,
        }.items(),
    )

    ld = LaunchDescription()

    ld.add_action(declare_namespace_cmd)
    ld.add_action(declare_slam_cmd)
    ld.add_action(declare_world_cmd)
    ld.add_action(declare_map_yaml_cmd)
    ld.add_action(declare_prior_pcd_file_cmd)
    ld.add_action(declare_use_sim_time_cmd)
    ld.add_action(declare_params_file_cmd)
    ld.add_action(declare_autostart_cmd)
    ld.add_action(declare_use_composition_cmd)
    ld.add_action(declare_rviz_config_file_cmd)
    ld.add_action(declare_use_robot_state_pub_cmd)
    ld.add_action(declare_use_rviz_cmd)
    ld.add_action(declare_use_respawn_cmd)
    ld.add_action(declare_start_ptp4l_cmd)
    ld.add_action(declare_ptp_interface_cmd)
    ld.add_action(declare_ptp_startup_delay_cmd)

    ld.add_action(ptp4l_cmd)
    ld.add_action(delayed_livox_dual_driver_cmd)
    #ld.add_action(livox_left_driver_cmd)
    #ld.add_action(livox_right_driver_cmd)
    ld.add_action(dual_lidar_fuser_cmd)
    ld.add_action(start_robot_state_publisher_cmd)
    ld.add_action(bringup_cmd)
    ld.add_action(joy_teleop_cmd)
    ld.add_action(rviz_cmd)

    return ld
