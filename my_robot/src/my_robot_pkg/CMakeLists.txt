cmake_minimum_required(VERSION 3.5)
project(my_robot_pkg)

# หา dependencies ของ ROS 2
find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)  # สำหรับ Python ROS 2

install(
  DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}/
)

ament_package()
