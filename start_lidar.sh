#!/bin/bash
# Exit immediately if any command fails
set -e

echo "=== Starting Livox Setup & Launch Script ==="

# 1. Verify Livox-SDK2 is installed (installed system-wide by livox.sh)
echo "[1/4] Checking Livox-SDK2 installation..."
if [ -f "/usr/local/lib/liblivox_lidar_sdk_shared.so" ]; then
    echo "Livox-SDK2 found. Refreshing linker cache..."
    ldconfig
    echo "Livox-SDK2 ready."
else
    echo "Error: Livox-SDK2 is not installed. Please run livox.sh first!"
    exit 1
fi

# 2. Source ROS 2 workspace
echo "[2/4] Sourcing ROS 2 and workspace..."
if [ -z "$ROS_DISTRO" ]; then
    echo "Warning: ROS_DISTRO is not set. Sourcing Humble..."
    source /opt/ros/humble/setup.bash
fi

# Source the colcon workspace so all packages (including realsense2_camera) are found
if [ -f "/home/ros2_ws/install/setup.bash" ]; then
    source /home/ros2_ws/install/setup.bash
    echo "Workspace sourced successfully."
else
    echo "Error: /home/ros2_ws/install/setup.bash not found. Did you build the workspace?"
    exit 1
fi

# 3. Build the ROS 2 Driver (if not already built)
echo "[3/4] Building livox_ros_driver2..."
cd /home/ros2_ws
colcon build --packages-select livox_ros_driver2 \
    --symlink-install \
    --cmake-args -DROS_EDITION=ROS2 -DHUMBLE_ROS=humble

# Re-source after build to pick up the freshly built driver
source /home/ros2_ws/install/setup.bash
echo "livox_ros_driver2 built and sourced."

# 4. Launch the Driver
echo "[4/4] Launching msg_MID360_launch.py..."
ros2 launch livox_ros_driver2 msg_MID360_launch.py