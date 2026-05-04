from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution


def generate_launch_description() -> LaunchDescription:
    params_file = PathJoinSubstitution(
        [FindPackageShare("udp_bridge"), "config", "jetson.yaml"]
    )

    return LaunchDescription(
        [
            Node(
                package="udp_bridge",
                executable="udp_bridge_node",
                name="udp_bridge_node",
                output="screen",
                parameters=[params_file],
            )
        ]
    )
