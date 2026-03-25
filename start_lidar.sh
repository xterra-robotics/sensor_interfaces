#!/bin/bash

set -e

echo "=== Starting Livox Setup & Launch Script ==="

# 1. Check if Livox-SDK2 is already installed system-wide
echo "[1/4] Checking Livox-SDK2 installation..."
if [ -f "/usr/local/lib/liblivox_lidar_sdk_shared.so" ]; then
    echo "Livox-SDK2 already installed. Skipping."
else
    echo "Error: Livox SDK not installed. Please run livox.sh first."
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

colcon build --packages-select livox_ros_driver2 \
    --cmake-args -DROS_EDITION=ROS2 -DHUMBLE_ROS=humble

echo "[3/4] Sourcing workspace..."
source install/setup.bash

# 4. Launch the Driver
echo "[4/4] Launching msg_MID360_launch.py..."
ros2 launch livox_ros_driver2 msg_MID360_launch.py
