nvidia@nvidia-desktop:~/navi2/ros_ws$ ros2 launch pb2025_nav_bringup rm_navigation_reality_dual_launch.py slam:=True use_robot_state_pub:=True
[INFO] [launch]: All log files can be found below /home/nvidia/.ros/log/2026-05-03-04-25-45-973560-nvidia-desktop-197837
[INFO] [launch]: Default logging verbosity is set to INFO
[INFO] [ptp4l_software_master-1]: process started with pid [197966]
[INFO] [dual_lidar_fuser_node-2]: process started with pid [197969]
[INFO] [joint_state_publisher-3]: process started with pid [197971]
[INFO] [robot_state_publisher-4]: process started with pid [197973]
[INFO] [component_container_isolated-5]: process started with pid [197975]
[INFO] [map_saver_server-6]: process started with pid [197978]
[INFO] [lifecycle_manager-7]: process started with pid [197981]
[INFO] [pointcloud_to_laserscan_node-8]: process started with pid [197983]
[INFO] [sync_slam_toolbox_node-9]: process started with pid [197987]
[INFO] [pointlio_mapping-10]: process started with pid [197999]
[INFO] [static_transform_publisher-11]: process started with pid [198034]
[INFO] [terrainAnalysis-12]: process started with pid [198045]
[INFO] [terrainAnalysisExt-13]: process started with pid [198056]
[INFO] [joy_node-14]: process started with pid [198060]
[INFO] [pb_teleop_twist_joy_node-15]: process started with pid [198070]
[INFO] [rviz2-16]: process started with pid [198082]
[ptp4l_software_master-1] ptp4l[5676.308]: port 1: INITIALIZING to MASTER on INIT_COMPLETE
[ptp4l_software_master-1] ptp4l[5676.308]: port 0: INITIALIZING to LISTENING on INIT_COMPLETE
[dual_lidar_fuser_node-2] [INFO] [1777753548.889665098] [dual_lidar_fuser]: dual_lidar_fuser started as multi-lidar mux. left=/livox/lidar_192_168_1_124 id=0 frame=front_mid360 right=/livox/lidar_192_168_1_177 id=1 frame=back_mid360 output=/livox/multi_lidar_points frame_policy=source_frame_per_message reorder_wait=0.015s queue=32 drop_zero=1 qos=best_effort
[robot_state_publisher-4] [INFO] [1777753548.862149137] [robot_state_publisher]: got segment armor_0
[robot_state_publisher-4] [INFO] [1777753548.862480633] [robot_state_publisher]: got segment armor_1
[robot_state_publisher-4] [INFO] [1777753548.862505018] [robot_state_publisher]: got segment armor_2
[robot_state_publisher-4] [INFO] [1777753548.862515066] [robot_state_publisher]: got segment armor_3
[robot_state_publisher-4] [INFO] [1777753548.862538587] [robot_state_publisher]: got segment armor_support_frame_0
[robot_state_publisher-4] [INFO] [1777753548.862547739] [robot_state_publisher]: got segment armor_support_frame_1
[robot_state_publisher-4] [INFO] [1777753548.862554011] [robot_state_publisher]: got segment armor_support_frame_2
[robot_state_publisher-4] [INFO] [1777753548.862560283] [robot_state_publisher]: got segment armor_support_frame_3
[robot_state_publisher-4] [INFO] [1777753548.862566779] [robot_state_publisher]: got segment back_mid360
[robot_state_publisher-4] [INFO] [1777753548.862572923] [robot_state_publisher]: got segment base_footprint
[robot_state_publisher-4] [INFO] [1777753548.862578940] [robot_state_publisher]: got segment chassis
[robot_state_publisher-4] [INFO] [1777753548.862584924] [robot_state_publisher]: got segment front_industrial_camera
[robot_state_publisher-4] [INFO] [1777753548.862591292] [robot_state_publisher]: got segment front_industrial_camera_optical_frame
[robot_state_publisher-4] [INFO] [1777753548.862597980] [robot_state_publisher]: got segment front_left_wheel
[robot_state_publisher-4] [INFO] [1777753548.862604124] [robot_state_publisher]: got segment front_mid360
[robot_state_publisher-4] [INFO] [1777753548.862610364] [robot_state_publisher]: got segment front_right_wheel
[robot_state_publisher-4] [INFO] [1777753548.862616444] [robot_state_publisher]: got segment gimbal_pitch
[robot_state_publisher-4] [INFO] [1777753548.862622205] [robot_state_publisher]: got segment gimbal_pitch_odom
[robot_state_publisher-4] [INFO] [1777753548.862627901] [robot_state_publisher]: got segment gimbal_yaw
[robot_state_publisher-4] [INFO] [1777753548.862633693] [robot_state_publisher]: got segment gimbal_yaw_odom
[robot_state_publisher-4] [INFO] [1777753548.862639933] [robot_state_publisher]: got segment light_indicator
[robot_state_publisher-4] [INFO] [1777753548.862645629] [robot_state_publisher]: got segment rear_left_wheel
[robot_state_publisher-4] [INFO] [1777753548.862651133] [robot_state_publisher]: got segment rear_right_wheel
[robot_state_publisher-4] [INFO] [1777753548.862656925] [robot_state_publisher]: got segment speed_monitor
[map_saver_server-6] [INFO] [1777753548.856504329] [map_saver]: 
[map_saver_server-6] 	map_saver lifecycle node launched. 
[map_saver_server-6] 	Waiting on external lifecycle transitions to activate
[map_saver_server-6] 	See https://design.ros2.org/articles/node_lifecycle.html for more information.
[map_saver_server-6] [INFO] [1777753548.856852849] [map_saver]: Creating
[map_saver_server-6] [INFO] [1777753548.872579501] [map_saver]: Configuring
[map_saver_server-6] [INFO] [1777753548.878312951] [map_saver]: Activating
[map_saver_server-6] [INFO] [1777753548.878384537] [map_saver]: Creating bond (map_saver) to lifecycle manager.
[lifecycle_manager-7] [INFO] [1777753548.848513576] [lifecycle_manager_slam]: Creating
[lifecycle_manager-7] [INFO] [1777753548.860793264] [lifecycle_manager_slam]: Creating and initializing lifecycle service clients
[lifecycle_manager-7] [INFO] [1777753548.871895164] [lifecycle_manager_slam]: Starting managed nodes bringup...
[lifecycle_manager-7] [INFO] [1777753548.872003391] [lifecycle_manager_slam]: Configuring map_saver
[lifecycle_manager-7] [INFO] [1777753548.876541645] [lifecycle_manager_slam]: Activating map_saver
[sync_slam_toolbox_node-9] [INFO] [1777753548.864711759] [slam_toolbox]: Node using stack size 40000000
[static_transform_publisher-11] [INFO] [1777753548.908448783] [static_transform_publisher_map2odom]: Spinning until stopped - publishing transform
[static_transform_publisher-11] translation: ('0.000000', '0.000000', '0.000000')
[static_transform_publisher-11] rotation: ('0.000000', '0.000000', '0.000000', '1.000000')
[static_transform_publisher-11] from 'map' to 'odom'
[pointcloud_to_laserscan_node-8] [INFO] [1777753548.949766485] [pointcloud_to_laserscan]: Got a subscriber to laserscan, starting pointcloud subscriber
[lifecycle_manager-7] [INFO] [1777753548.998466797] [lifecycle_manager_slam]: Server map_saver connected with bond.
[lifecycle_manager-7] [INFO] [1777753548.998558127] [lifecycle_manager_slam]: Managed nodes are active
[lifecycle_manager-7] [INFO] [1777753548.998578896] [lifecycle_manager_slam]: Creating bond timer...
[component_container_isolated-5] [INFO] [1777753549.005641498] [nav2_container]: Load Library: /home/nvidia/navi2/ros_ws/install/loam_interface/lib/libloam_interface.so
[component_container_isolated-5] [INFO] [1777753549.017806432] [nav2_container]: Found class: rclcpp_components::NodeFactoryTemplate<loam_interface::LoamInterfaceNode>
[component_container_isolated-5] [INFO] [1777753549.020017462] [nav2_container]: Instantiate class: rclcpp_components::NodeFactoryTemplate<loam_interface::LoamInterfaceNode>
[sync_slam_toolbox_node-9] [INFO] [1777753549.058680091] [slam_toolbox]: Using solver plugin solver_plugins::CeresSolver
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.087190636] [pb_teleop_twist_joy_node]: Starting Teleop Twist Joy
[sync_slam_toolbox_node-9] [INFO] [1777753549.104868695] [slam_toolbox]: CeresSolver: Using SCHUR_JACOBI preconditioner.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270454037] [pb_teleop_twist_joy_node]: Teleop enable button 4.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270551416] [pb_teleop_twist_joy_node]: Turbo on button 5.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270564152] [pb_teleop_twist_joy_node]: Teleop enable inverted reverse.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270617081] [pb_teleop_twist_joy_node]: Linear axis x on 1 at scale 2.500000.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270640506] [pb_teleop_twist_joy_node]: Turbo for linear axis x is scale 4.000000.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270672347] [pb_teleop_twist_joy_node]: Linear axis y on 0 at scale 2.500000.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270683739] [pb_teleop_twist_joy_node]: Turbo for linear axis y is scale 4.000000.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270693275] [pb_teleop_twist_joy_node]: Linear axis yaw on 6 at scale 3.000000.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270702235] [pb_teleop_twist_joy_node]: Turbo for linear axis yaw is scale 6.000000.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270711868] [pb_teleop_twist_joy_node]: Angular axis pitch on 4 at scale -1.000000.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270722972] [pb_teleop_twist_joy_node]: Turbo for angular axis pitch is scale -1.500000.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270733052] [pb_teleop_twist_joy_node]: Angular axis shoot on 5 at scale 1.000000.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270741884] [pb_teleop_twist_joy_node]: Turbo for angular axis shoot is scale 1.000000.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270750781] [pb_teleop_twist_joy_node]: Angular axis yaw on 3 at scale 2.500000.
[pb_teleop_twist_joy_node-15] [INFO] [1777753549.270759485] [pb_teleop_twist_joy_node]: Turbo for angular axis yaw is scale 3.500000.
[INFO] [launch_ros.actions.load_composable_nodes]: Loaded node '/loam_interface' in container '/nav2_container'
[component_container_isolated-5] [INFO] [1777753549.310099315] [nav2_container]: Load Library: /home/nvidia/navi2/ros_ws/install/sensor_scan_generation/lib/libsensor_scan_generation.so
[component_container_isolated-5] [INFO] [1777753549.320273512] [nav2_container]: Found class: rclcpp_components::NodeFactoryTemplate<sensor_scan_generation::SensorScanGenerationNode>
[component_container_isolated-5] [INFO] [1777753549.320376011] [nav2_container]: Instantiate class: rclcpp_components::NodeFactoryTemplate<sensor_scan_generation::SensorScanGenerationNode>
[INFO] [launch_ros.actions.load_composable_nodes]: Loaded node '/sensor_scan_generation' in container '/nav2_container'
[component_container_isolated-5] [INFO] [1777753549.453437976] [nav2_container]: Load Library: /home/nvidia/navi2/ros_ws/install/fake_vel_transform/lib/libfake_vel_transform.so
[component_container_isolated-5] [INFO] [1777753549.461288886] [nav2_container]: Found class: rclcpp_components::NodeFactoryTemplate<fake_vel_transform::FakeVelTransform>
[component_container_isolated-5] [INFO] [1777753549.461412697] [nav2_container]: Instantiate class: rclcpp_components::NodeFactoryTemplate<fake_vel_transform::FakeVelTransform>
[component_container_isolated-5] [INFO] [1777753549.484048315] [fake_vel_transform]: Start FakeVelTransform!
[INFO] [launch_ros.actions.load_composable_nodes]: Loaded node '/fake_vel_transform' in container '/nav2_container'
[component_container_isolated-5] [INFO] [1777753549.534345210] [nav2_container]: Load Library: /opt/ros/humble/lib/libcontroller_server_core.so
[component_container_isolated-5] [INFO] [1777753549.543222032] [nav2_container]: Found class: rclcpp_components::NodeFactoryTemplate<nav2_controller::ControllerServer>
[component_container_isolated-5] [INFO] [1777753549.543338803] [nav2_container]: Instantiate class: rclcpp_components::NodeFactoryTemplate<nav2_controller::ControllerServer>
[component_container_isolated-5] [INFO] [1777753549.590355843] [controller_server]: 
[component_container_isolated-5] 	controller_server lifecycle node launched. 
[component_container_isolated-5] 	Waiting on external lifecycle transitions to activate
[component_container_isolated-5] 	See https://design.ros2.org/articles/node_lifecycle.html for more information.
[component_container_isolated-5] [INFO] [1777753549.605301260] [controller_server]: Creating controller server
[component_container_isolated-5] [INFO] [1777753549.646687251] [local_costmap.local_costmap]: 
[component_container_isolated-5] 	local_costmap lifecycle node launched. 
[component_container_isolated-5] 	Waiting on external lifecycle transitions to activate
[component_container_isolated-5] 	See https://design.ros2.org/articles/node_lifecycle.html for more information.
[component_container_isolated-5] [INFO] [1777753549.649293074] [local_costmap.local_costmap]: Creating Costmap
[INFO] [launch_ros.actions.load_composable_nodes]: Loaded node '/controller_server' in container '/nav2_container'
[component_container_isolated-5] [INFO] [1777753549.662648596] [nav2_container]: Load Library: /opt/ros/humble/lib/libsmoother_server_core.so
[component_container_isolated-5] [INFO] [1777753549.665115504] [nav2_container]: Found class: rclcpp_components::NodeFactoryTemplate<nav2_smoother::SmootherServer>
[component_container_isolated-5] [INFO] [1777753549.665194546] [nav2_container]: Instantiate class: rclcpp_components::NodeFactoryTemplate<nav2_smoother::SmootherServer>
[component_container_isolated-5] [INFO] [1777753549.698470102] [smoother_server]: 
[component_container_isolated-5] 	smoother_server lifecycle node launched. 
[component_container_isolated-5] 	Waiting on external lifecycle transitions to activate
[component_container_isolated-5] 	See https://design.ros2.org/articles/node_lifecycle.html for more information.
[component_container_isolated-5] [INFO] [1777753549.704205920] [smoother_server]: Creating smoother server
[INFO] [launch_ros.actions.load_composable_nodes]: Loaded node '/smoother_server' in container '/nav2_container'
[component_container_isolated-5] [INFO] [1777753549.714590619] [nav2_container]: Load Library: /opt/ros/humble/lib/libplanner_server_core.so
[component_container_isolated-5] [INFO] [1777753549.715961084] [nav2_container]: Found class: rclcpp_components::NodeFactoryTemplate<nav2_planner::PlannerServer>
[component_container_isolated-5] [INFO] [1777753549.716023229] [nav2_container]: Instantiate class: rclcpp_components::NodeFactoryTemplate<nav2_planner::PlannerServer>
[component_container_isolated-5] [INFO] [1777753549.757380164] [planner_server]: 
[component_container_isolated-5] 	planner_server lifecycle node launched. 
[component_container_isolated-5] 	Waiting on external lifecycle transitions to activate
[component_container_isolated-5] 	See https://design.ros2.org/articles/node_lifecycle.html for more information.
[component_container_isolated-5] [INFO] [1777753549.765348005] [planner_server]: Creating
[component_container_isolated-5] [INFO] [1777753549.816699965] [global_costmap.global_costmap]: 
[component_container_isolated-5] 	global_costmap lifecycle node launched. 
[component_container_isolated-5] 	Waiting on external lifecycle transitions to activate
[component_container_isolated-5] 	See https://design.ros2.org/articles/node_lifecycle.html for more information.
[component_container_isolated-5] [INFO] [1777753549.818627179] [global_costmap.global_costmap]: Creating Costmap
[INFO] [launch_ros.actions.load_composable_nodes]: Loaded node '/planner_server' in container '/nav2_container'
[component_container_isolated-5] [INFO] [1777753549.841386993] [nav2_container]: Load Library: /opt/ros/humble/lib/libbehavior_server_core.so
[component_container_isolated-5] [INFO] [1777753549.849527157] [nav2_container]: Found class: rclcpp_components::NodeFactoryTemplate<behavior_server::BehaviorServer>
[component_container_isolated-5] [INFO] [1777753549.849630168] [nav2_container]: Instantiate class: rclcpp_components::NodeFactoryTemplate<behavior_server::BehaviorServer>
[component_container_isolated-5] [INFO] [1777753549.897958183] [behavior_server]: 
[component_container_isolated-5] 	behavior_server lifecycle node launched. 
[component_container_isolated-5] 	Waiting on external lifecycle transitions to activate
[component_container_isolated-5] 	See https://design.ros2.org/articles/node_lifecycle.html for more information.
[INFO] [launch_ros.actions.load_composable_nodes]: Loaded node '/behavior_server' in container '/nav2_container'
[component_container_isolated-5] [INFO] [1777753549.913235320] [nav2_container]: Load Library: /opt/ros/humble/lib/libbt_navigator_core.so
[component_container_isolated-5] [INFO] [1777753549.916362755] [nav2_container]: Found class: rclcpp_components::NodeFactoryTemplate<nav2_bt_navigator::BtNavigator>
[component_container_isolated-5] [INFO] [1777753549.916447941] [nav2_container]: Instantiate class: rclcpp_components::NodeFactoryTemplate<nav2_bt_navigator::BtNavigator>
[component_container_isolated-5] [INFO] [1777753549.958090931] [bt_navigator]: 
[INFO] [launch_ros.actions.load_composable_nodes]: Loaded node '/bt_navigator' in container '/nav2_container'
[component_container_isolated-5] 	bt_navigator lifecycle node launched. 
[component_container_isolated-5] 	Waiting on external lifecycle transitions to activate
[component_container_isolated-5] 	See https://design.ros2.org/articles/node_lifecycle.html for more information.
[component_container_isolated-5] [INFO] [1777753549.958233655] [bt_navigator]: Creating
[component_container_isolated-5] [INFO] [1777753549.966130453] [nav2_container]: Load Library: /opt/ros/humble/lib/libwaypoint_follower_core.so
[component_container_isolated-5] [INFO] [1777753549.967445461] [nav2_container]: Found class: rclcpp_components::NodeFactoryTemplate<nav2_waypoint_follower::WaypointFollower>
[component_container_isolated-5] [INFO] [1777753549.967501046] [nav2_container]: Instantiate class: rclcpp_components::NodeFactoryTemplate<nav2_waypoint_follower::WaypointFollower>
[component_container_isolated-5] [INFO] [1777753549.999319767] [waypoint_follower]: 
[component_container_isolated-5] 	waypoint_follower lifecycle node launched. 
[component_container_isolated-5] 	Waiting on external lifecycle transitions to activate
[component_container_isolated-5] 	See https://design.ros2.org/articles/node_lifecycle.html for more information.
[INFO] [launch_ros.actions.load_composable_nodes]: Loaded node '/waypoint_follower' in container '/nav2_container'
[component_container_isolated-5] [INFO] [1777753550.001062817] [waypoint_follower]: Creating
[component_container_isolated-5] [INFO] [1777753550.010602535] [nav2_container]: Load Library: /opt/ros/humble/lib/libvelocity_smoother_core.so
[component_container_isolated-5] [INFO] [1777753550.012112428] [nav2_container]: Found class: rclcpp_components::NodeFactoryTemplate<nav2_velocity_smoother::VelocitySmoother>
[component_container_isolated-5] [INFO] [1777753550.012174669] [nav2_container]: Instantiate class: rclcpp_components::NodeFactoryTemplate<nav2_velocity_smoother::VelocitySmoother>
[component_container_isolated-5] [INFO] [1777753550.051211164] [velocity_smoother]: 
[component_container_isolated-5] 	velocity_smoother lifecycle node launched. 
[INFO] [launch_ros.actions.load_composable_nodes]: Loaded node '/velocity_smoother' in container '/nav2_container'
[component_container_isolated-5] 	Waiting on external lifecycle transitions to activate
[component_container_isolated-5] 	See https://design.ros2.org/articles/node_lifecycle.html for more information.
[component_container_isolated-5] [INFO] [1777753550.056547165] [nav2_container]: Load Library: /opt/ros/humble/lib/libnav2_lifecycle_manager_core.so
[component_container_isolated-5] [INFO] [1777753550.057820347] [nav2_container]: Found class: rclcpp_components::NodeFactoryTemplate<nav2_lifecycle_manager::LifecycleManager>
[component_container_isolated-5] [INFO] [1777753550.057876477] [nav2_container]: Instantiate class: rclcpp_components::NodeFactoryTemplate<nav2_lifecycle_manager::LifecycleManager>
[component_container_isolated-5] [INFO] [1777753550.088067286] [lifecycle_manager_navigation]: Creating
[component_container_isolated-5] [INFO] [1777753550.097629949] [lifecycle_manager_navigation]: Creating and initializing lifecycle service clients
[INFO] [launch_ros.actions.load_composable_nodes]: Loaded node '/lifecycle_manager_navigation' in container '/nav2_container'
[component_container_isolated-5] [INFO] [1777753550.143828120] [lifecycle_manager_navigation]: Starting managed nodes bringup...
[component_container_isolated-5] [INFO] [1777753550.143977948] [lifecycle_manager_navigation]: Configuring controller_server
[component_container_isolated-5] [INFO] [1777753550.144536554] [controller_server]: Configuring controller interface
[component_container_isolated-5] [INFO] [1777753550.145308124] [controller_server]: getting goal checker plugins..
[component_container_isolated-5] [INFO] [1777753550.145731078] [controller_server]: Controller frequency set to 20.0000Hz
[component_container_isolated-5] [INFO] [1777753550.145830825] [local_costmap.local_costmap]: Configuring
[component_container_isolated-5] [INFO] [1777753550.165661064] [local_costmap.local_costmap]: Using plugin "static_layer"
[component_container_isolated-5] [INFO] [1777753550.179375475] [local_costmap.local_costmap]: Subscribing to the map topic (/map) with transient local durability
[rviz2-16] [INFO] [1777753550.180167942] [rviz2]: Stereo is NOT SUPPORTED
[rviz2-16] [INFO] [1777753550.180384747] [rviz2]: OpenGl version: 4.6 (GLSL 4.6)
[component_container_isolated-5] [INFO] [1777753550.183253936] [local_costmap.local_costmap]: Initialized plugin "static_layer"
[component_container_isolated-5] [INFO] [1777753550.183369715] [local_costmap.local_costmap]: Using plugin "intensity_voxel_layer"
[component_container_isolated-5] [INFO] [1777753550.197520873] [local_costmap.local_costmap]: Subscribed to Topics: terrain_map
[component_container_isolated-5] [INFO] [1777753550.231287960] [local_costmap.local_costmap]: Initialized plugin "intensity_voxel_layer"
[component_container_isolated-5] [INFO] [1777753550.231380539] [local_costmap.local_costmap]: Using plugin "inflation_layer"
[component_container_isolated-5] [INFO] [1777753550.236543639] [local_costmap.local_costmap]: Initialized plugin "inflation_layer"
[component_container_isolated-5] [INFO] [1777753550.276316024] [controller_server]: Created progress_checker : progress_checker of type nav2_controller::SimpleProgressChecker
[component_container_isolated-5] [INFO] [1777753550.279196765] [controller_server]: Created goal checker : general_goal_checker of type nav2_controller::SimpleGoalChecker
[component_container_isolated-5] [INFO] [1777753550.280165621] [controller_server]: Controller Server has general_goal_checker  goal checkers available.
[component_container_isolated-5] [INFO] [1777753550.282502093] [controller_server]: Created controller : FollowPath of type pb_omni_pid_pursuit_controller::OmniPidPursuitController
[rviz2-16] [INFO] [1777753550.304146616] [rviz2]: Stereo is NOT SUPPORTED
[component_container_isolated-5] [INFO] [1777753550.338005770] [controller_server]: Controller Server has FollowPath  controllers available.
[component_container_isolated-5] [INFO] [1777753550.374378712] [lifecycle_manager_navigation]: Configuring smoother_server
[component_container_isolated-5] [INFO] [1777753550.374660959] [smoother_server]: Configuring smoother server
[component_container_isolated-5] [INFO] [1777753550.396696595] [smoother_server]: Created smoother : simple_smoother of type nav2_smoother::SimpleSmoother
[component_container_isolated-5] [INFO] [1777753550.404176263] [smoother_server]: Smoother Server has simple_smoother  smoothers available.
[component_container_isolated-5] [INFO] [1777753550.421997942] [lifecycle_manager_navigation]: Configuring planner_server
[component_container_isolated-5] [INFO] [1777753550.422287069] [planner_server]: Configuring
[component_container_isolated-5] [INFO] [1777753550.422373855] [global_costmap.global_costmap]: Configuring
[component_container_isolated-5] [INFO] [1777753550.438099003] [global_costmap.global_costmap]: Using plugin "static_layer"
[component_container_isolated-5] [INFO] [1777753550.445343946] [global_costmap.global_costmap]: Subscribing to the map topic (/map) with transient local durability
[component_container_isolated-5] [INFO] [1777753550.449071556] [global_costmap.global_costmap]: Initialized plugin "static_layer"
[component_container_isolated-5] [INFO] [1777753550.449343114] [global_costmap.global_costmap]: Using plugin "intensity_voxel_layer"
[component_container_isolated-5] [INFO] [1777753550.457758773] [global_costmap.global_costmap]: Subscribed to Topics: terrain_map_ext
[component_container_isolated-5] [INFO] [1777753550.492952903] [global_costmap.global_costmap]: Initialized plugin "intensity_voxel_layer"
[component_container_isolated-5] [INFO] [1777753550.493049386] [global_costmap.global_costmap]: Using plugin "inflation_layer"
[component_container_isolated-5] [INFO] [1777753550.497341841] [global_costmap.global_costmap]: Initialized plugin "inflation_layer"
[component_container_isolated-5] [INFO] [1777753550.517570970] [planner_server]: Created global planner plugin GridBased of type nav2_theta_star_planner/ThetaStarPlanner
[component_container_isolated-5] [INFO] [1777753550.522537362] [planner_server]: Planner Server has GridBased  planners available.
[component_container_isolated-5] [INFO] [1777753550.552702602] [lifecycle_manager_navigation]: Configuring behavior_server
[component_container_isolated-5] [INFO] [1777753550.553004625] [behavior_server]: Configuring
[component_container_isolated-5] [INFO] [1777753550.572718445] [behavior_server]: Creating behavior plugin spin of type nav2_behaviors/Spin
[component_container_isolated-5] [INFO] [1777753550.575243370] [behavior_server]: Configuring spin
[component_container_isolated-5] [INFO] [1777753550.594659135] [behavior_server]: Creating behavior plugin backup of type pb_nav2_behaviors/BackUpFreeSpace
[component_container_isolated-5] [INFO] [1777753550.598057361] [behavior_server]: Configuring backup
[component_container_isolated-5] [INFO] [1777753550.623512152] [behavior_server]: Creating behavior plugin drive_on_heading of type nav2_behaviors/DriveOnHeading
[component_container_isolated-5] [INFO] [1777753550.625563274] [behavior_server]: Configuring drive_on_heading
[component_container_isolated-5] [INFO] [1777753550.647986183] [behavior_server]: Creating behavior plugin assisted_teleop of type nav2_behaviors/AssistedTeleop
[component_container_isolated-5] [INFO] [1777753550.650975471] [behavior_server]: Configuring assisted_teleop
[pointcloud_to_laserscan_node-8] [WARN] [1777753550.660122572] [pointcloud_to_laserscan]: New subscription discovered on topic '/obstacle_scan', requesting incompatible QoS. No messages will be sent to it. Last incompatible policy: RELIABILITY_QOS_POLICY
[component_container_isolated-5] [INFO] [1777753550.676205712] [behavior_server]: Creating behavior plugin wait of type nav2_behaviors/Wait
[component_container_isolated-5] [INFO] [1777753550.678073950] [behavior_server]: Configuring wait
[component_container_isolated-5] [INFO] [1777753550.705432786] [lifecycle_manager_navigation]: Configuring bt_navigator
[component_container_isolated-5] [INFO] [1777753550.707101947] [bt_navigator]: Configuring
[component_container_isolated-5] [INFO] [1777753551.079612606] [lifecycle_manager_navigation]: Configuring waypoint_follower
[component_container_isolated-5] [INFO] [1777753551.080117322] [waypoint_follower]: Configuring
[component_container_isolated-5] [INFO] [1777753551.119920427] [waypoint_follower]: Created waypoint_task_executor : wait_at_waypoint of type nav2_waypoint_follower::WaitAtWaypoint
[component_container_isolated-5] [INFO] [1777753551.126207235] [lifecycle_manager_navigation]: Configuring velocity_smoother
[component_container_isolated-5] [INFO] [1777753551.126577484] [velocity_smoother]: Configuring velocity smoother
[component_container_isolated-5] [INFO] [1777753551.144653505] [lifecycle_manager_navigation]: Activating controller_server
[component_container_isolated-5] [INFO] [1777753551.144962856] [controller_server]: Activating
[component_container_isolated-5] [INFO] [1777753551.145053194] [local_costmap.local_costmap]: Activating
[component_container_isolated-5] [INFO] [1777753551.145132492] [local_costmap.local_costmap]: Checking transform
[component_container_isolated-5] [INFO] [1777753551.145271568] [local_costmap.local_costmap]: Timed out waiting for transform from gimbal_yaw_fake to odom to become available, tf error: Could not find a connection between 'odom' and 'gimbal_yaw_fake' because they are not part of the same tree.Tf has two or more unconnected trees.
[component_container_isolated-5] [INFO] [1777753551.645321851] [local_costmap.local_costmap]: Timed out waiting for transform from gimbal_yaw_fake to odom to become available, tf error: Could not find a connection between 'odom' and 'gimbal_yaw_fake' because they are not part of the same tree.Tf has two or more unconnected trees.
[INFO] [livox_ros_driver2_node-17]: process started with pid [198267]
[livox_ros_driver2_node-17] [INFO] [1777753551.798726899] [livox_ros_driver2_dual]: Livox Ros Driver2 Version: 1.2.4
[livox_ros_driver2_node-17] [INFO] [1777753551.803229024] [livox_ros_driver2_dual]: Require timestamp sync: false
[livox_ros_driver2_node-17] [INFO] [1777753551.806112677] [livox_ros_driver2_dual]: Force ROS system timestamp: false
[livox_ros_driver2_node-17] [INFO] [1777753551.807683691] [livox_ros_driver2_dual]: Data Source is raw lidar.
[livox_ros_driver2_node-17] [INFO] [1777753551.809060845] [livox_ros_driver2_dual]: Config file : /home/nvidia/navi2/ros_ws/src/pb2025_sentry_nav/pb2025_nav_bringup/config/reality/mid360_dual_user_config.json
[livox_ros_driver2_node-17] LdsLidar *GetInstance
[livox_ros_driver2_node-17] config lidar type: 8
[livox_ros_driver2_node-17] successfully parse base config, counts: 2
[livox_ros_driver2_node-17] [INFO] [1777753551.819934227] [livox_ros_driver2_dual]: Init lds lidar success!
[component_container_isolated-5] [INFO] [1777753552.145379526] [local_costmap.local_costmap]: Timed out waiting for transform from gimbal_yaw_fake to odom to become available, tf error: Could not find a connection between 'odom' and 'gimbal_yaw_fake' because they are not part of the same tree.Tf has two or more unconnected trees.
[component_container_isolated-5] [INFO] [1777753552.645291725] [local_costmap.local_costmap]: Timed out waiting for transform from gimbal_yaw_fake to odom to become available, tf error: Could not find a connection between 'odom' and 'gimbal_yaw_fake' because they are not part of the same tree.Tf has two or more unconnected trees.
[component_container_isolated-5] [INFO] [1777753553.145307159] [local_costmap.local_costmap]: Timed out waiting for transform from gimbal_yaw_fake to odom to become available, tf error: Could not find a connection between 'odom' and 'gimbal_yaw_fake' because they are not part of the same tree.Tf has two or more unconnected trees.
[component_container_isolated-5] [INFO] [1777753553.645312737] [local_costmap.local_costmap]: Timed out waiting for transform from gimbal_yaw_fake to odom to become available, tf error: Could not find a connection between 'odom' and 'gimbal_yaw_fake' because they are not part of the same tree.Tf has two or more unconnected trees.
[livox_ros_driver2_node-17] GetFreeIndex key:livox_lidar_2080483520.
[livox_ros_driver2_node-17] GetFreeIndex key:livox_lidar_2969675968.
[livox_ros_driver2_node-17] extrinsic rpy 0 0 0
[livox_ros_driver2_node-17] extrinsic rpy 0 0 0
[livox_ros_driver2_node-17] Init queue, real query size:64.
[livox_ros_driver2_node-17] Lidar[1] storage queue size: 41
[livox_ros_driver2_node-17] Init queue, real query size:64.
[livox_ros_driver2_node-17] Lidar[0] storage queue size: 41
[livox_ros_driver2_node-17] set pcl data type, handle: 2969675968, data type: 1
[livox_ros_driver2_node-17] set scan pattern, handle: 2969675968, scan pattern: 0
[livox_ros_driver2_node-17] begin to change work mode to 'Normal', handle: 2969675968
[livox_ros_driver2_node-17] set pcl data type, handle: 2080483520, data type: 1
[livox_ros_driver2_node-17] set scan pattern, handle: 2080483520, scan pattern: 0
[livox_ros_driver2_node-17] begin to change work mode to 'Normal', handle: 2080483520
[livox_ros_driver2_node-17] successfully set data type, handle: 2969675968, set_bit: 2
[livox_ros_driver2_node-17] successfully set pattern mode, handle: 2969675968, set_bit: 0
[livox_ros_driver2_node-17] successfully set lidar attitude, ip: 192.168.1.177
[livox_ros_driver2_node-17] successfully change work mode, handle: 2969675968
[livox_ros_driver2_node-17] successfully set data type, handle: 2080483520, set_bit: 2
[livox_ros_driver2_node-17] successfully set pattern mode, handle: 2080483520, set_bit: 0
[livox_ros_driver2_node-17] successfully set lidar attitude, ip: 192.168.1.124
[livox_ros_driver2_node-17] successfully change work mode, handle: 2080483520
[livox_ros_driver2_node-17] successfully enable Livox Lidar imu, ip: 192.168.1.124
[component_container_isolated-5] [INFO] [1777753554.145301226] [local_costmap.local_costmap]: Timed out waiting for transform from gimbal_yaw_fake to odom to become available, tf error: Could not find a connection between 'odom' and 'gimbal_yaw_fake' because they are not part of the same tree.Tf has two or more unconnected trees.
[component_container_isolated-5] [INFO] [1777753554.645291218] [local_costmap.local_costmap]: Timed out waiting for transform from gimbal_yaw_fake to odom to become available, tf error: Could not find a connection between 'odom' and 'gimbal_yaw_fake' because they are not part of the same tree.Tf has two or more unconnected trees.
[livox_ros_driver2_node-17] [INFO] [1777753554.823580931] [livox_ros_driver2_dual]: livox/lidar_192_168_1_124 publish use PointCloud2 format
[livox_ros_driver2_node-17] [INFO] [1777753554.823729767] [livox_ros_driver2_dual]: livox/imu_192_168_1_124 publish use imu format
[dual_lidar_fuser_node-2] [INFO] [1777753554.861129294] [dual_lidar_fuser]: Published multi-lidar cloud: stamp=1777753551.819722 frame=front_mid360 points=5851
[pointlio_mapping-10] [INFO] [1777753554.864090902] [li_initialization]: [DBG] standard_pcl_cbk: msg_width=5851 frame=front_mid360 ptr_size=680 first_xyz=(0.666, 0.867, 0.079) first_curv=0.034560
[pointlio_mapping-10] [INFO] [1777753554.867641419] [ImuProcess]: IMU Initializing: 1.0 %
[pointlio_mapping-10] [WARN] [1777753554.869209713] [ImuProcess]: reset ImuProcess
[pointlio_mapping-10] [INFO] [1777753554.877357206] [ImuProcess]: IMU Initializing: 2.0 %
[livox_ros_driver2_node-17] [INFO] [1777753554.879412904] [livox_ros_driver2_dual]: livox/lidar_192_168_1_177 publish use PointCloud2 format
[pointlio_mapping-10] [INFO] [1777753554.880286557] [ImuProcess]: IMU Initializing: 4.0 %
[pointlio_mapping-10] [INFO] [1777753554.880880843] [ImuProcess]: IMU Initializing: 6.0 %
[pointlio_mapping-10] [INFO] [1777753554.881472153] [ImuProcess]: IMU Initializing: 9.0 %
[dual_lidar_fuser_node-2] [WARN] [1777753554.891217989] [dual_lidar_fuser]: Override right cloud frame_id from front_mid360 to back_mid360
[pointlio_mapping-10] [INFO] [1777753554.892536996] [ImuProcess]: IMU Initializing: 13.0 %
[component_container_isolated-5] [WARN] [1777753554.914188559] []: Messages of type 1 arrived out of order (will print only once)
[pointlio_mapping-10] [ERROR] [1777753554.914887168] [li_initialization]: lidar loop back, clear buffer
[pointlio_mapping-10] [ERROR] [1777753554.922921154] [li_initialization]: lidar loop back, clear buffer
[pointlio_mapping-10] [INFO] [1777753554.932299013] [ImuProcess]: IMU Initializing: 20.0 %
[pointlio_mapping-10] [INFO] [1777753554.935375695] [ImuProcess]: IMU Initializing: 30.0 %
[pointlio_mapping-10] [INFO] [1777753554.936142625] [ImuProcess]: IMU Initializing: 42.0 %
[pointlio_mapping-10] [INFO] [1777753554.943404753] [ImuProcess]: IMU Initializing: 54.0 %
[pointlio_mapping-10] [INFO] [1777753554.944376680] [ImuProcess]: IMU Initializing: 66.0 %
[pointlio_mapping-10] [INFO] [1777753554.948414314] [ImuProcess]: IMU Initializing: 78.0 %
[pointlio_mapping-10] [INFO] [1777753554.949376449] [ImuProcess]: IMU Initializing: 90.0 %
[pointlio_mapping-10] [INFO] [1777753554.949415554] [ImuProcess]: IMU Initializing: 100.0 %
[component_container_isolated-5] [WARN] [1777753554.990183450] []: Messages of type 0 arrived out of order (will print only once)
[pointlio_mapping-10] [INFO] [1777753555.023869320] [li_initialization]: [DBG] standard_pcl_cbk: msg_width=3992 frame=back_mid360 ptr_size=373 first_xyz=(-3.868, -3.021, 0.018) first_curv=0.282112
[sync_slam_toolbox_node-9] [WARN] [1777753555.067989041] [slam_toolbox]: minimum laser range setting (0.3 m) exceeds the capabilities of the used Lidar (0.3 m)
[sync_slam_toolbox_node-9] Info: clipped range threshold to be within minimum and maximum range!
[sync_slam_toolbox_node-9] Registering sensor: [Custom Described Lidar]
[component_container_isolated-5] [WARN] [1777753555.083841456] []: Messages of type 0 arrived out of order (will print only once)
[component_container_isolated-5] [INFO] [1777753555.145472960] [local_costmap.local_costmap]: start
[component_container_isolated-5] [INFO] [1777753555.186132117] [local_costmap.local_costmap]: StaticLayer: Resizing static layer to 325 X 94 at 0.050000 m/pix
[component_container_isolated-5] [INFO] [1777753555.186649922] [global_costmap.global_costmap]: StaticLayer: Resizing costmap to 325 X 94 at 0.050000 m/pix
[rviz2-16] [INFO] [1777753555.208585524] [rviz2]: Trying to create a map of size 325 x 94 using 1 swatches
[component_container_isolated-5] [INFO] [1777753555.250784175] [controller_server]: Activating controller: FollowPath of type regulated_pure_pursuit_controller::OmniPidPursuitController
[component_container_isolated-5] [INFO] [1777753555.251145015] [controller_server]: Creating bond (controller_server) to lifecycle manager.
[rviz2-16] [INFO] [1777753555.272866404] [rviz2]: Trying to create a map of size 100 x 100 using 1 swatches
[pointlio_mapping-10] [INFO] [1777753555.286570031] [li_initialization]: [DBG] standard_pcl_cbk: msg_width=4284 frame=front_mid360 ptr_size=456 first_xyz=(-0.856, -0.268, -0.034) first_curv=0.133632
[component_container_isolated-5] [INFO] [1777753555.362258546] [lifecycle_manager_navigation]: Server controller_server connected with bond.
[component_container_isolated-5] [INFO] [1777753555.362483928] [lifecycle_manager_navigation]: Activating smoother_server
[component_container_isolated-5] [INFO] [1777753555.363170120] [smoother_server]: Activating
[component_container_isolated-5] [INFO] [1777753555.363260842] [smoother_server]: Creating bond (smoother_server) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753555.479183289] [lifecycle_manager_navigation]: Server smoother_server connected with bond.
[component_container_isolated-5] [INFO] [1777753555.479299804] [lifecycle_manager_navigation]: Activating planner_server
[component_container_isolated-5] [INFO] [1777753555.480074575] [planner_server]: Activating
[component_container_isolated-5] [INFO] [1777753555.480203474] [global_costmap.global_costmap]: Activating
[component_container_isolated-5] [INFO] [1777753555.480229715] [global_costmap.global_costmap]: Checking transform
[component_container_isolated-5] [INFO] [1777753555.480418551] [global_costmap.global_costmap]: start
[component_container_isolated-5] [INFO] [1777753555.481681974] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.172 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.495898701] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.190 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.533128048] [planner_server]: Activating plugin GridBased of type nav2_theta_star_planner
[component_container_isolated-5] [INFO] [1777753555.537650653] [planner_server]: Creating bond (planner_server) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753555.550863068] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.247 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[rviz2-16] [INFO] [1777753555.558944511] [rviz2]: Trying to create a map of size 325 x 94 using 1 swatches
[component_container_isolated-5] [INFO] [1777753555.586876514] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.285 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.618617312] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.316 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.642767335] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.339 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.647268084] [lifecycle_manager_navigation]: Server planner_server connected with bond.
[component_container_isolated-5] [INFO] [1777753555.647375606] [lifecycle_manager_navigation]: Activating behavior_server
[component_container_isolated-5] [INFO] [1777753555.648277708] [behavior_server]: Activating
[component_container_isolated-5] [INFO] [1777753555.648344430] [behavior_server]: Activating spin
[component_container_isolated-5] [INFO] [1777753555.648400495] [behavior_server]: Activating backup
[component_container_isolated-5] [INFO] [1777753555.648497809] [behavior_server]: Activating drive_on_heading
[component_container_isolated-5] [INFO] [1777753555.648524626] [behavior_server]: Activating assisted_teleop
[component_container_isolated-5] [INFO] [1777753555.648544179] [behavior_server]: Activating wait
[component_container_isolated-5] [INFO] [1777753555.648574387] [behavior_server]: Creating bond (behavior_server) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753555.669305672] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.365 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[pointlio_mapping-10] [INFO] [1777753555.697393838] [li_initialization]: [DBG] standard_pcl_cbk: msg_width=4761 frame=front_mid360 ptr_size=552 first_xyz=(-2.838, 2.595, 0.840) first_curv=0.034560
[component_container_isolated-5] [INFO] [1777753555.719873549] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.415 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.750953339] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.449 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.756060215] [lifecycle_manager_navigation]: Server behavior_server connected with bond.
[component_container_isolated-5] [INFO] [1777753555.756164313] [lifecycle_manager_navigation]: Activating bt_navigator
[component_container_isolated-5] [INFO] [1777753555.756872298] [bt_navigator]: Activating
[component_container_isolated-5] [INFO] [1777753555.785234679] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.480 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.797459166] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.495 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.819403216] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.516 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.828344840] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.527 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.847491286] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.541 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.878844203] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.571 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.896061739] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.593 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.913430830] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.608 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.919149624] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.616 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.944079186] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.642 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.945052970] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.643 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.971140416] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.668 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.994212589] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.692 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753555.995798899] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.693 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.015979066] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.712 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.026676605] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.726 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.035297325] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.732 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.050490620] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.748 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.055880318] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.753 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.077677932] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.776 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.078721925] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.777 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.100168587] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.796 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.105354664] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.804 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.134284643] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.827 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.161361937] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.860 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.168758915] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.860 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.184576129] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.882 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.194308972] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.887 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.208867244] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.907 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.214176300] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.910 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.233145110] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.929 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.242482903] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.937 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[pointlio_mapping-10] [INFO] [1777753556.244422118] [li_initialization]: [DBG] standard_pcl_cbk: msg_width=4774 frame=front_mid360 ptr_size=541 first_xyz=(0.433, -0.571, 0.606) first_curv=0.034560
[component_container_isolated-5] [INFO] [1777753556.263032839] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.958 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.263781594] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.962 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.287503734] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.980 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.303313364] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.002 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.304229034] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753555.995 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.321412425] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.019 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.340658682] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.036 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.348784126] [bt_navigator]: Creating bond (bt_navigator) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753556.349218280] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.047 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.372313942] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.070 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.399037755] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.097 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.414310444] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.113 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
^C[WARNING] [launch]: user interrupted with ctrl-c (SIGINT)
[terrainAnalysis-12] [INFO] [1777753556.449423676] [rclcpp]: signal_handler(signum=2)
[INFO] [ptp4l_software_master-1]: process has finished cleanly [pid 197966]
[INFO] [static_transform_publisher-11]: process has finished cleanly [pid 198034]
[INFO] [dual_lidar_fuser_node-2]: process has finished cleanly [pid 197969]
[INFO] [robot_state_publisher-4]: process has finished cleanly [pid 197973]
[INFO] [map_saver_server-6]: process has finished cleanly [pid 197978]
[INFO] [lifecycle_manager-7]: process has finished cleanly [pid 197981]
[INFO] [joy_node-14]: process has finished cleanly [pid 198060]
[INFO] [terrainAnalysis-12]: process has finished cleanly [pid 198045]
[INFO] [sync_slam_toolbox_node-9]: process has finished cleanly [pid 197987]
[INFO] [pb_teleop_twist_joy_node-15]: process has finished cleanly [pid 198070]
[INFO] [terrainAnalysisExt-13]: process has finished cleanly [pid 198056]
[INFO] [pointlio_mapping-10]: process has finished cleanly [pid 197999]
[INFO] [joint_state_publisher-3]: process has finished cleanly [pid 197971]
[livox_ros_driver2_node-17] [INFO] [1777753556.449421500] [rclcpp]: signal_handler(signum=2)
[pb_teleop_twist_joy_node-15] [INFO] [1777753556.449430012] [rclcpp]: signal_handler(signum=2)
[lifecycle_manager-7] [INFO] [1777753556.449448636] [rclcpp]: signal_handler(signum=2)
[lifecycle_manager-7] [INFO] [1777753556.449669762] [lifecycle_manager_slam]: Running Nav2 LifecycleManager rcl preshutdown (lifecycle_manager_slam)
[lifecycle_manager-7] [INFO] [1777753556.449750884] [lifecycle_manager_slam]: Terminating bond timer...
[joy_node-14] [INFO] [1777753556.449424572] [rclcpp]: signal_handler(signum=2)
[sync_slam_toolbox_node-9] [INFO] [1777753556.449549631] [rclcpp]: signal_handler(signum=2)
[static_transform_publisher-11] [INFO] [1777753556.449550591] [rclcpp]: signal_handler(signum=2)
[pointcloud_to_laserscan_node-8] [INFO] [1777753556.449566399] [rclcpp]: signal_handler(signum=2)
[robot_state_publisher-4] [INFO] [1777753556.449655777] [rclcpp]: signal_handler(signum=2)
[map_saver_server-6] [INFO] [1777753556.449718627] [rclcpp]: signal_handler(signum=2)
[map_saver_server-6] [INFO] [1777753556.451146789] [map_saver]: Running Nav2 LifecycleNode rcl preshutdown (map_saver)
[map_saver_server-6] [INFO] [1777753556.451291049] [map_saver]: Deactivating
[map_saver_server-6] [INFO] [1777753556.451316618] [map_saver]: Destroying bond (map_saver) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753556.449796933] [rclcpp]: signal_handler(signum=2)
[component_container_isolated-5] [INFO] [1777753556.449929640] [behavior_server]: Running Nav2 LifecycleNode rcl preshutdown (behavior_server)
[component_container_isolated-5] [INFO] [1777753556.450069227] [behavior_server]: Deactivating
[component_container_isolated-5] [INFO] [1777753556.450210479] [behavior_server]: Destroying bond (behavior_server) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753556.451838038] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.147 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[dual_lidar_fuser_node-2] [INFO] [1777753556.453863207] [rclcpp]: signal_handler(signum=2)
[rviz2-16] [INFO] [1777753556.457597281] [rclcpp]: signal_handler(signum=2)
[rviz2-16] 
[rviz2-16] >>> [rcutils|error_handling.c:108] rcutils_set_error_state()
[rviz2-16] This error state is being overwritten:
[rviz2-16] 
[rviz2-16]   'rcl node's context is invalid, at ./src/rcl/node.c:428'
[rviz2-16] 
[rviz2-16] with this new error message:
[rviz2-16] 
[rviz2-16]   'the given context is not valid, either rcl_init() was not called or rcl_shutdown() was called., at ./src/rcl/wait.c:130'
[rviz2-16] 
[rviz2-16] rcutils_reset_error() should be called after error handling to avoid this.
[rviz2-16] <<<
[rviz2-16] terminate called after throwing an instance of 'rclcpp::exceptions::RCLError'
[rviz2-16]   what():  failed to initialize wait set: the given context is not valid, either rcl_init() was not called or rcl_shutdown() was called., at ./src/rcl/wait.c:130
[pointlio_mapping-10] [WARN] [1777753556.457782342] [laserMapping]: catch sig 2
[terrainAnalysisExt-13] [INFO] [1777753556.460172927] [rclcpp]: signal_handler(signum=2)
[component_container_isolated-5] [INFO] [1777753556.460960498] [behavior_server]: Cleaning up
[component_container_isolated-5] [INFO] [1777753556.464254850] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.151 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.481240668] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.178 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.481576388] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.180 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.492112611] [lifecycle_manager_navigation]: Server bt_navigator connected with bond.
[component_container_isolated-5] [INFO] [1777753556.492223493] [lifecycle_manager_navigation]: Activating waypoint_follower
[component_container_isolated-5] [INFO] [1777753556.492918582] [waypoint_follower]: Activating
[component_container_isolated-5] [INFO] [1777753556.492988344] [waypoint_follower]: Creating bond (waypoint_follower) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753556.516394029] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.215 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.538285757] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.233 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.545846420] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.238 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.563491070] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.258 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.576933635] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.273 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.582942612] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.282 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.595494243] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.292 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.610294344] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.308 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.613093260] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.312 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.626626546] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.325 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.649031759] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.344 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.634696021] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.333 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.651064192] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.350 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.651880020] [lifecycle_manager_navigation]: Server waypoint_follower connected with bond.
[component_container_isolated-5] [INFO] [1777753556.651979191] [lifecycle_manager_navigation]: Activating velocity_smoother
[component_container_isolated-5] [INFO] [1777753556.652591557] [velocity_smoother]: Activating
[component_container_isolated-5] [INFO] [1777753556.652734185] [velocity_smoother]: Creating bond (velocity_smoother) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753556.663808596] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.362 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.671175526] [behavior_server]: Destroying bond (behavior_server) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753556.671281673] [lifecycle_manager_navigation]: Running Nav2 LifecycleManager rcl preshutdown (lifecycle_manager_navigation)
[component_container_isolated-5] [INFO] [1777753556.672723723] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.371 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.688324580] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.382 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.696191650] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.389 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.725399875] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.423 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.726102708] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.423 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.745423271] [local_costmap.local_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.445 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.746274523] [global_costmap.global_costmap]: Message Filter dropping message: frame 'odom' at time 1777753556.443 for reason 'the timestamp on the message is earlier than all the data in the transform cache'
[component_container_isolated-5] [INFO] [1777753556.781181702] [lifecycle_manager_navigation]: Server velocity_smoother connected with bond.
[component_container_isolated-5] [INFO] [1777753556.781297545] [lifecycle_manager_navigation]: Managed nodes are active
[component_container_isolated-5] [INFO] [1777753556.781349674] [lifecycle_manager_navigation]: Creating bond timer...
[component_container_isolated-5] [INFO] [1777753556.913267003] [bt_navigator]: Running Nav2 LifecycleNode rcl preshutdown (bt_navigator)
[component_container_isolated-5] [INFO] [1777753556.913441279] [bt_navigator]: Deactivating
[component_container_isolated-5] [INFO] [1777753556.913493505] [bt_navigator]: Destroying bond (bt_navigator) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753556.923749592] [bt_navigator]: Cleaning up
[component_container_isolated-5] [INFO] [1777753557.079044126] [bt_navigator]: Completed Cleaning up
[component_container_isolated-5] [INFO] [1777753557.079189377] [bt_navigator]: Destroying bond (bt_navigator) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753557.079215458] [planner_server]: Running Nav2 LifecycleNode rcl preshutdown (planner_server)
[component_container_isolated-5] [INFO] [1777753557.079257603] [planner_server]: Deactivating
[component_container_isolated-5] [INFO] [1777753557.079320901] [global_costmap.global_costmap]: Deactivating
[component_container_isolated-5] [INFO] [1777753557.083355366] [planner_server]: Deactivating plugin GridBased of type nav2_theta_star_planner
[component_container_isolated-5] [INFO] [1777753557.083441128] [planner_server]: Destroying bond (planner_server) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753557.093683743] [planner_server]: Cleaning up
[component_container_isolated-5] [INFO] [1777753557.120062300] [global_costmap.global_costmap]: Cleaning up
[map_saver_server-6] [INFO] [1777753556.462922690] [map_saver]: Cleaning up
[map_saver_server-6] [INFO] [1777753556.463010884] [map_saver]: Destroying bond (map_saver) to lifecycle manager.
[map_saver_server-6] [INFO] [1777753556.484514923] [map_saver]: Destroying
[lifecycle_manager-7] [INFO] [1777753556.470040046] [lifecycle_manager_slam]: Destroying lifecycle_manager_slam
[pointcloud_to_laserscan_node-8] terminate called after throwing an instance of 'rclcpp::exceptions::RCLError'
[pointcloud_to_laserscan_node-8]   what():  Couldn't initialize rcl timer handle: the given context is not valid, either rcl_init() was not called or rcl_shutdown() was called., at ./src/rcl/guard_condition.c:67
[pointlio_mapping-10] lidar_type: 5
[pointlio_mapping-10] ~~~~/home/nvidia/navi2/ros_ws/src/pb2025_sentry_nav/point_lio/ file opened
[pointlio_mapping-10] first imu time: 1777753551.932328
[livox_ros_driver2_node-17] Livox Lidar SDK Deinit completely!
[livox_ros_driver2_node-17] lddc destory!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
[component_container_isolated-5] [INFO] [1777753557.131516433] [planner_server]: CleaningUp plugin GridBased of type nav2_theta_star_planner
[component_container_isolated-5] [INFO] [1777753557.147103305] [planner_server]: Destroying bond (planner_server) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753557.147219148] [smoother_server]: Running Nav2 LifecycleNode rcl preshutdown (smoother_server)
[component_container_isolated-5] [INFO] [1777753557.147268845] [smoother_server]: Deactivating
[component_container_isolated-5] [INFO] [1777753557.147310798] [smoother_server]: Destroying bond (smoother_server) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753557.157686473] [smoother_server]: Cleaning up
[component_container_isolated-5] [INFO] [1777753557.174740932] [smoother_server]: Destroying bond (smoother_server) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753557.174843271] [velocity_smoother]: Running Nav2 LifecycleNode rcl preshutdown (velocity_smoother)
[component_container_isolated-5] [INFO] [1777753557.174895784] [velocity_smoother]: Deactivating
[component_container_isolated-5] [INFO] [1777753557.174954634] [velocity_smoother]: Destroying bond (velocity_smoother) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753557.185213217] [velocity_smoother]: Cleaning up
[component_container_isolated-5] [INFO] [1777753557.185320388] [velocity_smoother]: Destroying bond (velocity_smoother) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753557.185359493] [waypoint_follower]: Running Nav2 LifecycleNode rcl preshutdown (waypoint_follower)
[component_container_isolated-5] [INFO] [1777753557.185405830] [waypoint_follower]: Deactivating
[component_container_isolated-5] [INFO] [1777753557.185438471] [waypoint_follower]: Destroying bond (waypoint_follower) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753557.195768160] [waypoint_follower]: Cleaning up
[component_container_isolated-5] [INFO] [1777753557.203872580] [waypoint_follower]: Destroying bond (waypoint_follower) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753557.203966406] [controller_server]: Running Nav2 LifecycleNode rcl preshutdown (controller_server)
[component_container_isolated-5] [INFO] [1777753557.204017063] [controller_server]: Deactivating
[component_container_isolated-5] [INFO] [1777753557.204045032] [controller_server]: Deactivating controller: FollowPath of type regulated_pure_pursuit_controller::OmniPidPursuitController
[component_container_isolated-5] [INFO] [1777753557.204160011] [local_costmap.local_costmap]: Deactivating
[component_container_isolated-5] [INFO] [1777753557.245938907] [controller_server]: Destroying bond (controller_server) to lifecycle manager.
[component_container_isolated-5] [INFO] [1777753557.256240532] [controller_server]: Cleaning up
[component_container_isolated-5] [INFO] [1777753557.256321110] [controller_server]: Cleaning up controller: FollowPath of type pb_omni_pid_pursuit_controller::OmniPidPursuitController
[component_container_isolated-5] [INFO] [1777753557.256994278] [local_costmap.local_costmap]: Cleaning up
[component_container_isolated-5] [INFO] [1777753557.290926298] [controller_server]: Destroying bond (controller_server) to lifecycle manager.
[ERROR] [rviz2-16]: process has died [pid 198082, exit code -6, cmd '/opt/ros/humble/lib/rviz2/rviz2 -d /home/nvidia/navi2/ros_ws/install/pb2025_nav_bringup/share/pb2025_nav_bringup/rviz/nav2_default_view.rviz --ros-args -r __ns:=/ -r /tf:=tf -r /tf_static:=tf_static'].
[ERROR] [launch]: Caught exception in launch (see debug for traceback): Cannot shutdown a ROS adapter that is not running
[ERROR] [pointcloud_to_laserscan_node-8]: process has died [pid 197983, exit code -6, cmd '/home/nvidia/navi2/ros_ws/install/pointcloud_to_laserscan/lib/pointcloud_to_laserscan/pointcloud_to_laserscan_node --ros-args --log-level info --ros-args -r __node:=pointcloud_to_laserscan -r __ns:=/ --params-file /tmp/launch_params_ookqnvd7 -r /tf:=tf -r /tf_static:=tf_static -r cloud_in:=terrain_map_ext -r scan:=obstacle_scan'].
[ERROR] [livox_ros_driver2_node-17]: process has died [pid 198267, exit code -11, cmd '/home/nvidia/navi2/ros_ws/install/livox_ros_driver2/lib/livox_ros_driver2/livox_ros_driver2_node --ros-args -r __node:=livox_ros_driver2_dual --params-file /home/nvidia/navi2/ros_ws/install/pb2025_nav_bringup/share/pb2025_nav_bringup/config/reality/livox_dual_params.yaml'].
[ERROR] [component_container_isolated-5]: process[component_container_isolated-5] failed to terminate '5' seconds after receiving 'SIGINT', escalating to 'SIGTERM'
[INFO] [component_container_isolated-5]: sending signal 'SIGTERM' to process[component_container_isolated-5]
[component_container_isolated-5] [INFO] [1777753562.140095243] [rclcpp]: signal_handler(signum=15)
[ERROR] [component_container_isolated-5]: process[component_container_isolated-5] failed to terminate '10.0' seconds after receiving 'SIGTERM', escalating to 'SIGKILL'
[INFO] [component_container_isolated-5]: sending signal 'SIGKILL' to process[component_container_isolated-5]
[ERROR] [component_container_isolated-5]: process has died [pid 197975, exit code -9, cmd '/opt/ros/humble/lib/rclcpp_components/component_container_isolated --ros-args --log-level info --ros-args -r __node:=nav2_container -r __ns:=/ --params-file /tmp/launch_params_l_i601zc --params-file /tmp/launch_params_nds6aada -r /tf:=tf -r /tf_static:=tf_static'].
