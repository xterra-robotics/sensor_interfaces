# cmake_minimum_required(VERSION 3.8)
# project(dds_utils)

# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# if(NOT CMAKE_BUILD_TYPE)
#   set(CMAKE_BUILD_TYPE Release)
# endif()

# if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
#   add_compile_options(-Wall -Wextra -Wpedantic -O3)
# endif()

# find_package(ament_cmake REQUIRED)

# # Create header-only library
# add_library(${PROJECT_NAME} INTERFACE)
# add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

# # Specify include directories - directly point to where headers are
# target_include_directories(${PROJECT_NAME} INTERFACE
#   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#   $<BUILD_INTERFACE:/opt/ros/humble/include/ddscxx>
#   $<INSTALL_INTERFACE:include>
# )

# # Link the Cyclone DDS library directly
# target_link_libraries(${PROJECT_NAME} INTERFACE 
#   /opt/ros/humble/lib/libddscxx.so
# )

# install(
#   DIRECTORY include/
#   DESTINATION include
# )

# install(
#   TARGETS ${PROJECT_NAME}
#   EXPORT export_${PROJECT_NAME}
#   LIBRARY DESTINATION lib
#   ARCHIVE DESTINATION lib
#   INCLUDES DESTINATION include
# )

# ament_export_targets(export_${PROJECT_NAME} HAS_LIBRARY_TARGET)

# message(STATUS "${PROJECT_NAME} - Header-only DDS utility library")
# message(STATUS "  C++ Standard: ${CMAKE_CXX_STANDARD}")
# message(STATUS "  Build Type: ${CMAKE_BUILD_TYPE}")
# message(STATUS "  Using CycloneDDS from: /opt/ros/humble")

# ament_package()










# new one
cmake_minimum_required(VERSION 3.8)
project(dds_utils)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -O3)
endif()

find_package(ament_cmake REQUIRED)
find_package(CycloneDDS-CXX REQUIRED)

# Create header-only library
add_library(${PROJECT_NAME} INTERFACE)
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

# Specify include directories
target_include_directories(${PROJECT_NAME} INTERFACE
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

# Link CycloneDDS C++ package
target_link_libraries(${PROJECT_NAME} INTERFACE
  CycloneDDS-CXX::ddscxx
)

install(
  DIRECTORY include/
  DESTINATION include
)

install(
  TARGETS ${PROJECT_NAME}
  EXPORT export_${PROJECT_NAME}
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  INCLUDES DESTINATION include
)

ament_export_targets(export_${PROJECT_NAME} HAS_LIBRARY_TARGET)
ament_export_dependencies(CycloneDDS-CXX)

message(STATUS "${PROJECT_NAME} - Header-only DDS utility library")
message(STATUS "  C++ Standard: ${CMAKE_CXX_STANDARD}")
message(STATUS "  Build Type: ${CMAKE_BUILD_TYPE}")
message(STATUS "  Using CycloneDDS-CXX package")

ament_package()

