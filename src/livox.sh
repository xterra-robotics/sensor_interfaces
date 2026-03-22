#!/bin/bash
# -------------------------------------------------------------------------
# Livox Full Stack Installation Script (SDK2 + Driver)
# Targeted for ROS 2 Humble | Docker Environment
# -------------------------------------------------------------------------
set -e  # Exit immediately if a command exits with a non-zero status

WORKSPACE_DIR="/home/ros2_ws"
SRC_DIR="$WORKSPACE_DIR/src"

echo "========================================================"
echo "[1/4] Setting up Environment..."
echo "========================================================"
source /opt/ros/humble/setup.bash
cd "$WORKSPACE_DIR"

# -------------------------------------------------------------------------
# STEP 2: LIVOX SDK2 (System Dependency)
# -------------------------------------------------------------------------
echo "========================================================"
echo "[2/4] Installing Livox-SDK2 (System Level)..."
echo "========================================================"

# Check if already installed to save time
if [ -f "/usr/local/lib/liblivox_lidar_sdk_shared.so" ]; then
    echo "-> Livox-SDK2 already found in /usr/local/lib. Skipping install."
else
    # Clone into workspace root temporarily
    cd "$WORKSPACE_DIR"
    if [ -d "Livox-SDK2" ]; then rm -rf Livox-SDK2; fi
    
    git clone https://github.com/Livox-SDK/Livox-SDK2.git
    cd Livox-SDK2
    mkdir build && cd build
    cmake .. && make -j$(nproc)
    make install
    
    # Cleanup source to keep Docker image small
    cd "$WORKSPACE_DIR"
    rm -rf Livox-SDK2
    echo "-> Livox-SDK2 installed and source cleaned up."
fi

# -------------------------------------------------------------------------
# STEP 3: LIVOX ROS DRIVER 2
# -------------------------------------------------------------------------
echo "========================================================"
echo "[3/4] Building Livox ROS Driver 2..."
echo "========================================================"
cd "$SRC_DIR"

# Clone if not exists
if [ ! -d "livox_ros_driver2" ]; then
    git clone https://github.com/Livox-SDK/livox_ros_driver2.git
else
    echo "-> livox_ros_driver2 repo already exists. Skipping clone."
fi

# CRITICAL FIX: Rename package_ROS2.xml to package.xml for colcon
cd livox_ros_driver2
if [ -f "package_ROS2.xml" ] && [ ! -f "package.xml" ]; then
    echo "-> applying fix: renaming package_ROS2.xml to package.xml"
    cp package_ROS2.xml package.xml
fi

# Build Driver (Isolated from ROS1 junk)
cd "$WORKSPACE_DIR"
colcon build --packages-select livox_ros_driver2 \
  --cmake-args -DROS_EDITION=ROS2 -DHUMBLE_ROS=humble \
  --symlink-install

# Source the new driver so the simulation build can find it
source install/setup.bash

# -------------------------------------------------------------------------
# FINAL CONFIGURATION & INSTRUCTIONS
# -------------------------------------------------------------------------
echo "========================================================"
echo "INSTALLATION COMPLETE SUCCESSFULY"
echo "========================================================"
