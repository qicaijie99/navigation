cmake_minimum_required(VERSION 3.8)
project(dual_lidar_fuser)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(message_filters REQUIRED)
find_package(PCL REQUIRED COMPONENTS common filters registration)

add_executable(dual_lidar_fuser_node src/dual_lidar_fuser_node.cpp)

add_definitions(${PCL_DEFINITIONS})
target_include_directories(dual_lidar_fuser_node PRIVATE ${PCL_INCLUDE_DIRS})
target_link_directories(dual_lidar_fuser_node PRIVATE ${PCL_LIBRARY_DIRS})
target_link_libraries(dual_lidar_fuser_node ${PCL_LIBRARIES})

ament_target_dependencies(
  dual_lidar_fuser_node
  rclcpp
  sensor_msgs
  tf2
  tf2_ros
  tf2_sensor_msgs
  geometry_msgs
  message_filters
)

install(
  TARGETS dual_lidar_fuser_node
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
