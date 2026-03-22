#!/usr/bin/env bash
set -e

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
    udev

# ---- CLONE STABLE VERSION ----
echo "Cloning librealsense v2.54.2..."
rm -rf /tmp/librealsense
git clone https://github.com/IntelRealSense/librealsense.git /tmp/librealsense
cd /tmp/librealsense
git checkout v2.54.2

# ---- INSTALL UDEV RULES ----
echo "Installing udev rules..."
cp config/99-realsense-libusb.rules /etc/udev/rules.d/ 2>/dev/null || true

# ---- BUILD WITH FORCE_LIBUVC ----
echo "Building librealsense with FORCE_LIBUVC=ON..."
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

# ---- CLEANUP ----
echo "Cleaning up build files..."
rm -rf /tmp/librealsense

# ---- VERIFY ----
echo "Verifying installation..."
rs-enumerate-devices && echo "✅ Camera detected successfully!" || echo "⚠️  Camera not detected - replug USB and retry rs-enumerate-devices"

echo "=========================================="
echo " DONE - Now launch with:"
echo " ros2 launch realsense2_camera rs_launch.py enable_color:=true enable_gyro:=false enable_accel:=false"
echo "=========================================="
