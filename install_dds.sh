##!/usr/bin/env bash
#set -e
#
#echo "=== CycloneDDS clean build ==="
#
## ---- CONFIG ----
#INSTALL_PREFIX="$(pwd)/../ros/install"
#REPO_DIR="$(pwd)/cyclonedds"
#
## ---- HARD CLEAN ENV (CRITICAL) ----
#unset LD_LIBRARY_PATH
#unset CYCLONEDDS_HOME
#unset CMAKE_PREFIX_PATH
#
## ---- CLEAN PREVIOUS INSTALL ----
#rm -rf "$INSTALL_PREFIX"
#rm -rf "$REPO_DIR/build"
#
## ---- BUILD ----
#cd "$REPO_DIR"
#mkdir build
#cd build
#
#cmake .. \
#  -DCMAKE_BUILD_TYPE=Release \
#  -DCMAKE_INSTALL_PREFIX="$INSTALL_PREFIX" \
#  -DENABLE_TYPE_DISCOVERY=ON \
#  -DENABLE_TOPIC_DISCOVERY=ON
#
#make -j$(nproc)
#make install
#
## ---- REGISTER LIBS ----
#export LD_LIBRARY_PATH="$INSTALL_PREFIX/lib"
#export CYCLONEDDS_HOME="$INSTALL_PREFIX"
#export PATH="$INSTALL_PREFIX/bin:$PATH"
#
## ---- VERIFY idlc (IMPORTANT) ----
#echo "Checking idlc linkage:"
#ldd "$INSTALL_PREFIX/bin/idlc" | grep cyclonedds || true
#
## ---- PYTHON BINDINGS (NO ISOLATION) ----
##pip install --no-build-isolation --no-cache-dir \
##  git+https://github.com/eclipse-cyclonedds/cyclonedds-python
#
#python3 -m ensurepip --upgrade || (apt-get update && apt-get install -y python3-pip)
#python3 -m pip install --no-build-isolation --no-cache-dir \
#  git+https://github.com/eclipse-cyclonedds/cyclonedds-python
#
#echo "=== CycloneDDS + Python installed successfully ==="





#!/usr/bin/env bash
set -e

ROS_DISTRO=${ROS_DISTRO:-humble}
WS_DIR=${WS_DIR:-/home/ros2_ws}

echo "=========================================="
echo " REALSENSE FIX - JETSON ARM64"
echo "=========================================="

# ---- REMOVE OLD LIBREALSENSE ----
echo "Removing existing librealsense installation..."
apt-get remove -y librealsense2* 2>/dev/null || true
apt-get autoremove -y

# ---- INSTALL BUILD DEPENDENCIES ----
echo "Installing build dependencies..."
apt-get update
apt-get install -y \
    git \
    cmake \
    build-essential \
    libusb-1.0-0-dev \
    libssl-dev \
    libudev-dev \
    pkg-config \
    libgtk-3-dev \
    libglfw3-dev \
    udev \
    python3-colcon-common-extensions \
    python3-rosdep \
    ros-${ROS_DISTRO}-diagnostic-updater

# ---- CLONE STABLE VERSION ----
echo "Cloning librealsense v2.54.2..."
rm -rf /tmp/librealsense
git clone https://github.com/IntelRealSense/librealsense.git /tmp/librealsense
cd /tmp/librealsense
git checkout v2.54.2

# ---- INSTALL UDEV RULES ----
echo "Installing udev rules..."
cp config/99-realsense-libusb.rules /etc/udev/rules.d/ 2>/dev/null || true

# ---- BUILD SDK WITH FORCE_LIBUVC ----
echo "Building librealsense SDK with FORCE_LIBUVC=ON..."
mkdir -p build && cd build
cmake .. \
    -DFORCE_LIBUVC=ON \
    -DCMAKE_BUILD_TYPE=Release \
    -DBUILD_PYTHON_BINDINGS=OFF \
    -DBUILD_EXAMPLES=ON \
    -DBUILD_GRAPHICAL_EXAMPLES=OFF
make -j$(nproc)
make install
ldconfig

# ---- CLEANUP SDK BUILD ----
echo "Cleaning up SDK build files..."
rm -rf /tmp/librealsense

# ---- VERIFY SDK ----
echo "Verifying SDK installation..."
rs-enumerate-devices && echo "✅ Camera detected successfully!" || echo "⚠️  Camera not detected - replug USB and retry"

# ---- INSTALL REALSENSE ROS2 DRIVER ----
echo "=========================================="
echo " INSTALLING REALSENSE ROS2 DRIVER"
echo "=========================================="

# Clone matching ROS2 driver (4.54.1 matches SDK v2.54.2)
mkdir -p ${WS_DIR}/src
cd ${WS_DIR}/src

echo "Cloning realsense-ros branch 4.54.1..."
rm -rf realsense-ros
git clone https://github.com/IntelRealSense/realsense-ros.git \
    --branch 4.54.1 \
    --depth 1

# ---- BUILD ROS2 DRIVER ----
echo "Building ROS2 realsense driver..."
cd ${WS_DIR}

source /opt/ros/${ROS_DISTRO}/setup.bash

colcon build \
    --packages-select realsense2_camera realsense2_description \
    --cmake-args \
        -DCMAKE_BUILD_TYPE=Release \
        -DFORCE_LIBUVC=ON

# ---- SOURCE NEW INSTALL ----
source ${WS_DIR}/install/setup.bash

# ---- VERIFY ROS2 DRIVER ----
echo "Verifying ROS2 driver..."
ros2 pkg list | grep realsense && echo "✅ ROS2 driver installed!" || echo "❌ ROS2 driver not found"

echo "=========================================="
echo " INSTALLATION COMPLETE"
echo " Source workspace and launch with:"
echo " source ${WS_DIR}/install/setup.bash"
echo " ros2 launch realsense2_camera rs_launch.py \\"
echo "   enable_color:=true \\"
echo "   enable_depth:=true \\"
echo "   enable_gyro:=false \\"
echo "   enable_accel:=false"
echo "=========================================="
