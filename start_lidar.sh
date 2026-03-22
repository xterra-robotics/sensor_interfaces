#!/bin/bash

# Exit immediately if any command fails
set -e

echo "=== Starting Livox Setup & Launch Script ==="

# 1. Install Livox-SDK2
echo "[1/4] Installing Livox-SDK2..."
if [ -d "/home/ros2_ws/Livox-SDK2/build" ]; then
    cd /home/ros2_ws/Livox-SDK2/build
    sudo make install
    sudo ldconfig
    echo "Livox-SDK2 installed successfully."
else
    echo "Error: Directory /home/ros2_ws/Livox-SDK2/build not found!"
    exit 1
fi

# 2. Source ROS 2 (Safety check)
if [ -z "$ROS_DISTRO" ]; then
    echo "Warning: ROS_DISTRO is not set. Sourcing Humble..."
    source /opt/ros/humble/setup.bash
fi

# 3. Build the ROS 2 Driver
echo "[2/4] Building livox_ros_driver2..."
cd /home/ros2_ws

# Clean previous build of this package to ensure CMake args are applied correctly
# (Optional but recommended when changing CMake flags)
# rm -rf build/livox_ros_driver2 install/livox_ros_driver2

colcon build --packages-select livox_ros_driver2 \
    --symlink-install \
    --cmake-args -DROS_EDITION=ROS2 -DHUMBLE_ROS=humble

echo "[3/4] Sourcing workspace..."
source install/setup.bash

# 4. Launch the Driver
echo "[4/4] Launching msg_MID360_launch.py..."
ros2 launch livox_ros_driver2 msg_MID360_launch.py


