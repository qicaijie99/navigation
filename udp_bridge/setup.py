from setuptools import setup

package_name = "udp_bridge"

setup(
    name=package_name,
    version="0.0.1",
    packages=[package_name],
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
        ("share/" + package_name + "/launch", [
            "launch/jetson.launch.py",
            "launch/nuc.launch.py",
        ]),
        ("share/" + package_name + "/config", [
            "config/jetson.yaml",
            "config/nuc.yaml",
        ]),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="nuc02",
    maintainer_email="nuc02@example.com",
    description="UDP bridge node for selected ROS topics.",
    license="MIT",
    entry_points={
        "console_scripts": [
            "udp_bridge_node = udp_bridge.udp_bridge_node:main",
        ],
    },
)
