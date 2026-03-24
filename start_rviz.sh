#!/bin/bash
set -e

WORKSPACE_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

echo "[1/3] Building demo package..."
cd "$WORKSPACE_DIR"
colcon build --packages-select demo --cmake-args -DCMAKE_BUILD_TYPE=Release

echo "[2/3] Sourcing ROS2 and workspace..."
source /opt/ros/humble/setup.bash
source "$WORKSPACE_DIR/install/setup.bash"

echo "[3/3] Launching demo..."
ros2 launch demo rviz.launch.py