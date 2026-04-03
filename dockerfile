ARG ROS_DISTRO=humble
FROM arm64v8/ros:${ROS_DISTRO}-ros-base

# Set bash as default shell for all RUN commands
SHELL ["/bin/bash", "-c"]

ENV DEBIAN_FRONTEND=noninteractive

# -------- 2. Jetson / NVIDIA container runtime flags ------------------------
ENV NVIDIA_VISIBLE_DEVICES=all
ENV NVIDIA_DRIVER_CAPABILITIES=all

# -------- 3. Workspace ------------------------------------------------------
WORKDIR /home/ros2_ws

# -------- 4. Install ROS 2 Desktop components manually ----------------------
# NOTE: ros-humble-rmw-cyclonedds-cpp REMOVED — we build CycloneDDS from
#       source below (with TOPIC_DISCOVERY + TYPE_DISCOVERY), so the RMW
#       layer must also be rebuilt from source to link against our build.
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        python3-rosdep \
        python3-colcon-common-extensions \
        python3-vcstool \
        software-properties-common && \
    rm -rf /var/lib/apt/lists/*

# Initialize rosdep
RUN rosdep update

# ---------------------------------------------------------------------------
# 5. Copy ARM64 Orbbec SDK package into image
# ---------------------------------------------------------------------------
COPY OrbbecSDK_v2.4.11_arm64.deb /tmp/

# -------- 6. Base utilities -------------------------------------------------
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        usbutils udev git wget curl \
        build-essential cmake \
        nano vim \
        pkg-config && \
    rm -rf /var/lib/apt/lists/*

# ===========================================================================
# 6.5. CycloneDDS — Build from source (topic + type discovery enabled)
#      Line-by-line replication of install_dds.sh
# ===========================================================================
# ---- CONFIG ----
# WORKDIR is /home/ros2_ws, so:
#   INSTALL_PREFIX = $(pwd)/../ros/install = /home/ros/install
#   REPO_DIR       = $(pwd)/cyclonedds     = /home/ros2_ws/cyclonedds
# ---- HARD CLEAN ENV (CRITICAL) ----
ENV LD_LIBRARY_PATH=""
ENV CYCLONEDDS_HOME=""
ENV CMAKE_PREFIX_PATH=""

RUN echo "=== CycloneDDS clean build ===" && \
    # ---- CONFIG ----
    INSTALL_PREFIX="/home/ros/install" && \
    REPO_DIR="/home/ros2_ws/cyclonedds" && \
    # ---- CLEAN PREVIOUS INSTALL ----
    rm -rf "$INSTALL_PREFIX" && \
    rm -rf "$REPO_DIR/build" && \
    # ---- CLONE ----
    git clone https://github.com/eclipse-cyclonedds/cyclonedds.git "$REPO_DIR" && \
    # ---- BUILD ----
    cd "$REPO_DIR" && \
    mkdir build && \
    cd build && \
    cmake .. \
        -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_INSTALL_PREFIX="$INSTALL_PREFIX" \
        -DENABLE_TYPE_DISCOVERY=ON \
        -DENABLE_TOPIC_DISCOVERY=ON && \
    make -j$(nproc) && \
    make install && \
    # ---- REGISTER LIBS ----
    export LD_LIBRARY_PATH="$INSTALL_PREFIX/lib" && \
    export CYCLONEDDS_HOME="$INSTALL_PREFIX" && \
    export PATH="$INSTALL_PREFIX/bin:$PATH" && \
    # ---- VERIFY idlc (IMPORTANT) ----
    echo "Checking idlc linkage:" && \
    ldd "$INSTALL_PREFIX/bin/idlc" | grep cyclonedds || true

# CycloneDDS environment (persisted across layers)
ENV LD_LIBRARY_PATH="/home/ros/install/lib"
ENV CYCLONEDDS_HOME="/home/ros/install"
ENV PATH="/home/ros/install/bin:${PATH}"

# ---- PYTHON BINDINGS (NO ISOLATION) ----
RUN python3 -m ensurepip --upgrade || (apt-get update && apt-get install -y python3-pip) && \
    python3 -m pip install --no-build-isolation --no-cache-dir \
        git+https://github.com/eclipse-cyclonedds/cyclonedds-python && \
    echo "=== CycloneDDS + Python installed successfully ==="


# -------- 7. ROS 2 additional tools ----------------------------------------
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        ros-${ROS_DISTRO}-xacro \
        ros-${ROS_DISTRO}-joint-state-publisher \
        ros-${ROS_DISTRO}-joint-state-publisher-gui \
        ros-${ROS_DISTRO}-pcl-conversions \
        ros-${ROS_DISTRO}-backward-ros && \
    rm -rf /var/lib/apt/lists/*

# -------- 7.5. Install PCL and related packages ----------------------------
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        libpcl-dev \
        ros-${ROS_DISTRO}-pcl-msgs \
        ros-${ROS_DISTRO}-pcl-conversions && \
    rm -rf /var/lib/apt/lists/*

# -------- 7.6. Build PCL-ROS from source (PERSISTENT VERSION) --------------
RUN mkdir -p /workspace/pcl_overlay/src && \
    cd /workspace/pcl_overlay/src && \
    git clone -b ${ROS_DISTRO} https://github.com/ros-perception/perception_pcl.git && \
    cd /workspace/pcl_overlay && \
    source /opt/ros/${ROS_DISTRO}/setup.bash && \
    rosdep install --from-paths src --ignore-src -r -y && \
    colcon build --packages-select pcl_ros \
                  --cmake-args -DCMAKE_BUILD_TYPE=Release && \
    echo "PCL-ROS build completed successfully!"

# -------- 7.7. Declare volume to prevent overlay obscuring ----------------
VOLUME ["/workspace"]

# -------- 7.8. Make PCL-ROS overlay available system-wide ------------------
RUN echo "source /workspace/pcl_overlay/install/setup.bash" >> /root/.bashrc

# -------- 8. Development libraries -----------------------------------------
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        libeigen3-dev libyaml-cpp-dev \
        libopencv-dev libssl-dev \
        libpcl-dev \
        libudev-dev libusb-1.0-0-dev \
        libgflags-dev libgoogle-glog-dev \
        nlohmann-json3-dev libdw-dev && \
    rm -rf /var/lib/apt/lists/*

# -------- 9. Image transport packages for Orbbec/RealSense -----------------
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        ros-${ROS_DISTRO}-image-transport \
        ros-${ROS_DISTRO}-image-transport-plugins \
        ros-${ROS_DISTRO}-compressed-image-transport \
        ros-${ROS_DISTRO}-image-publisher \
        ros-${ROS_DISTRO}-camera-info-manager \
        ros-${ROS_DISTRO}-diagnostic-updater \
        ros-${ROS_DISTRO}-diagnostic-msgs \
        ros-${ROS_DISTRO}-statistics-msgs && \
    rm -rf /var/lib/apt/lists/*

# -------- 10. Install Orbbec SDK (ARM64) -----------------------------------
RUN dpkg -i /tmp/OrbbecSDK_v2.4.11_arm64.deb || \
    (apt-get update && apt-get -fy install) && \
    rm /tmp/OrbbecSDK_v2.4.11_arm64.deb

ENV CMAKE_PREFIX_PATH="/usr/local/lib/cmake/OrbbecSDK:${CMAKE_PREFIX_PATH}"
ENV LD_LIBRARY_PATH="/usr/local/lib:${LD_LIBRARY_PATH}"
ENV OrbbecSDK_DIR="/usr/local/lib/cmake/OrbbecSDK"

# -------- 10.5. Configure Orbbec udev rules --------------------------------
RUN echo 'SUBSYSTEM=="usb", ATTR{idVendor}=="2bc5", MODE="0666", GROUP="plugdev"' > /etc/udev/rules.d/56-orbbec-usb.rules && \
    echo 'KERNEL=="hidraw*", ATTRS{idVendor}=="2bc5", MODE="0666", GROUP="plugdev"' >> /etc/udev/rules.d/56-orbbec-usb.rules

# ===========================================================================
# 10.6. REALSENSE — Build librealsense v2.54.2 (system library)
# ===========================================================================
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        libgtk-3-dev \
        libglfw3-dev && \
    rm -rf /var/lib/apt/lists/*

RUN git clone https://github.com/IntelRealSense/librealsense.git /tmp/librealsense && \
    cd /tmp/librealsense && \
    git checkout v2.54.2 && \
    # Install udev rules
    cp config/99-realsense-libusb.rules /etc/udev/rules.d/ && \
    # Build with FORCE_LIBUVC (required for Jetson / no kernel patch)
    mkdir -p build && cd build && \
    cmake .. \
        -DFORCE_LIBUVC=ON \
        -DCMAKE_BUILD_TYPE=Release \
        -DBUILD_PYTHON_BINDINGS=OFF \
        -DBUILD_EXAMPLES=OFF \
        -DBUILD_GRAPHICAL_EXAMPLES=OFF && \
    make -j$(nproc) && \
    make install && \
    ldconfig && \
    # Cleanup
    rm -rf /tmp/librealsense

# ===========================================================================
# 10.7. LIVOX — Build Livox-SDK2 (system library)
# ===========================================================================
RUN git clone https://github.com/Livox-SDK/Livox-SDK2.git /tmp/Livox-SDK2 && \
    cd /tmp/Livox-SDK2 && \
    mkdir build && cd build && \
    cmake .. -DCMAKE_BUILD_TYPE=Release && \
    make -j$(nproc) && \
    make install && \
    ldconfig && \
    # Cleanup
    rm -rf /tmp/Livox-SDK2

# ===========================================================================
# 11. Clone ALL ROS 2 packages into src
# ===========================================================================
RUN mkdir -p src && \
    cd src && \
    # --- Orbbec ---
    git clone https://github.com/orbbec/OrbbecSDK_ROS2.git && \
    cd OrbbecSDK_ROS2 && git checkout v2-main && cd .. && \
    # --- RealSense ---
    git clone https://github.com/IntelRealSense/realsense-ros.git && \
    cd realsense-ros && git checkout ros2-master && cd .. && \
    # --- Livox ---
    git clone https://github.com/Livox-SDK/livox_ros_driver2.git && \
    cd livox_ros_driver2 && \
    # Fix: ROS2 uses package_ROS2.xml
    if [ -f "package_ROS2.xml" ] && [ ! -f "package.xml" ]; then \
        cp package_ROS2.xml package.xml; \
    fi && \
    cd /home/ros2_ws

# -------- Install all ROS dependencies for all packages --------------------
RUN apt-get update && \
    source /opt/ros/${ROS_DISTRO}/setup.bash && \
    rosdep install --from-paths src --ignore-src -r -y \
        --skip-keys="\
            librealsense2 \
            ros-humble-rviz-common \
            ros-humble-rviz-rendering \
            ros-humble-rviz-default-plugins \
            libapr1-dev \
            libaprutil1-dev \
            ros-humble-launch-pytest \
            python3-tqdm \
            python3-requests \
        " && \
    apt-get install -y --no-install-recommends \
        python3-tqdm \
        python3-requests && \
    rm -rf /var/lib/apt/lists/*

RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        ros-${ROS_DISTRO}-rmw-cyclonedds-cpp &&\
    rm -rf /var/lib/apt/lists/*
# -------- 12. Convenience: auto-source environments -------------------------
# Set CycloneDDS as the default RMW
RUN echo "source /opt/ros/${ROS_DISTRO}/setup.bash" >> /root/.bashrc && \
    echo "if [ -f /home/ros2_ws/install/setup.bash ]; then source /home/ros2_ws/install/setup.bash; fi" >> /root/.bashrc

# -------- 13. Entrypoint ----------------------------------------------------
ENTRYPOINT ["/ros_entrypoint.sh"]
