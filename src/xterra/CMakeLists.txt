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
  "msg/CameraFrame.msg"
  "srv/CaptureImage.srv"
  DEPENDENCIES std_msgs
)


# Export package
ament_package()
