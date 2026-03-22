cmake_minimum_required(VERSION 3.8)
project(xterra_perception_api)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(yaml-cpp REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(OpenCV REQUIRED) 
find_package(cv_bridge REQUIRED) 
find_package(std_srvs REQUIRED) 
find_package(Threads REQUIRED)
find_package(ament_index_cpp REQUIRED)
#find_package(realsense2 REQUIRED)
find_package(PCL REQUIRED) 
#find_package(pcl_ros REQUIRED) 
find_package(pcl_conversions REQUIRED)


# ORBBEC SDK
find_package(OrbbecSDK REQUIRED)
link_directories(/usr/local/lib)


include_directories(include 
  ${PCL_INCLUDE_DIR}
  ${YAML_CPP_INCLUDE_DIR} 
  ${OpenCV_INCLUDE_DIRS}
  ${cv_bridge_INCLUDE_DIRS}
  /usr/local/include
)

link_directories(${PCL_LIBRARY_DIR})
add_definitions(${PCL_DEFINITIONS})


####################################
# Create Shared Library [BEGIN]
####################################
add_library(${PROJECT_NAME} SHARED
  src/camera_interface/base_camera.cpp
  src/orbbec/orbbec_camera.cpp
  src/orbbec/orbbec_multi_cam_manager.cpp
  # src/intel/intel_camera.cpp
  # src/intel/intel_multi_cam_manager.cpp
)

ament_target_dependencies(${PROJECT_NAME}
  rclcpp
  sensor_msgs
  cv_bridge
  yaml-cpp
 # pcl_ros
  pcl_conversions
)

target_include_directories(${PROJECT_NAME}
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

target_link_libraries(${PROJECT_NAME}
  yaml-cpp
  Threads::Threads
  ${OpenCV_LIBS}
  ${BLAS_LIBRARIES}
  ${LAPACK_LIBRARIES}
  ${PCL_LIBRARIES}
  OrbbecSDK
#  realsense2::realsense2
)

# Export the library
ament_export_targets(export_${PROJECT_NAME} HAS_LIBRARY_TARGET)
ament_export_dependencies(
  rclcpp
  sensor_msgs
  cv_bridge
  yaml-cpp
  #pcl_ros
  pcl_conversions
  OpenCV
  PCL
 # realsense2
)

# Install headers
install(
  DIRECTORY include/
  DESTINATION include
)

# Install library
install(
  TARGETS ${PROJECT_NAME}
  EXPORT export_${PROJECT_NAME}
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include
)
####################################
# Create Shared Library [END]
####################################

#add_executable(streaming_api_test 
 # src/test_cases/example_orbbec.cpp 
#)

#ament_target_dependencies(streaming_api_test
#  rclcpp
#  sensor_msgs
#  cv_bridge
#  yaml-cpp
#  pcl_ros
#  pcl_conversions
#)

#target_link_libraries(streaming_api_test
#  ${PROJECT_NAME}  # Link against our library
#)


#install(TARGETS
 # streaming_api_test
 # DESTINATION lib/${PROJECT_NAME}
#)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

install(DIRECTORY
  config 
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
