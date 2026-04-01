cmake_minimum_required(VERSION 3.8)
project(xterra)

if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()


# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(gazebo_ros REQUIRED)
find_package(gazebo_dev REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(ignition-math6 REQUIRED)
find_package(yaml-cpp REQUIRED)


# this is for custom msg part
# For ROS2 message generation
find_package(rosidl_default_generators REQUIRED)
# List message files
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/JointData.msg"
  "msg/SensorData.msg"
  "msg/MotorGainMultiplier.msg"
  "msg/QuadLog.msg"
  "msg/Point3D.msg"
  "msg/Quaternion.msg"
  "msg/SolverStats.msg"
  "msg/RGBFrame.msg"
  "msg/IndicatorData.msg"
  "msg/BaseOrientationWrenchDebug.msg"
  "msg/FloatScalar.msg"
  "msg/JoyData.msg"
  "srv/CaptureImage.srv"
  DEPENDENCIES std_msgs
)

# Include directories
include_directories(
  ${EIGEN3_INCLUDE_DIRS}
  ${GAZEBO_INCLUDE_DIRS}
  ${YAML_CPP_INCLUDE_DIR}
)

# Add plugin library
add_library(MotorController SHARED
  src/MotorController.cpp
  src/robot_config_parser.cpp
)
target_include_directories(MotorController PUBLIC include)
ament_target_dependencies(MotorController
  rclcpp
  std_msgs
  gazebo_ros
  gazebo_dev
  yaml-cpp
)
ament_export_libraries(MotorController)

target_link_libraries(MotorController
  ${GAZEBO_LIBRARIES}
  ${rclcpp_LIBRARIES}
  yaml-cpp
  xterra__rosidl_typesupport_cpp
)

# Specify dependencies for the target


# Install the plugin
install(TARGETS MotorController
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

# Export package
ament_package()