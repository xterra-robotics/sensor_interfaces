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
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
       # ros-${ROS_DISTRO}-desktop \
        ros-${ROS_DISTRO}-rmw-cyclonedds-cpp \
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

# -------- 9. Image transport packages for Orbbec -------------------------
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

# -------- 11. Clone + build Orbbec ROS 2 wrapper ---------------------------
RUN mkdir -p src && \
    cd src && \
    git clone https://github.com/orbbec/OrbbecSDK_ROS2.git && \
    cd OrbbecSDK_ROS2 && git checkout v2-main && \
    cd /home/ros2_ws && \
    source /opt/ros/${ROS_DISTRO}/setup.bash && \
    colcon build --event-handlers console_direct+ \
                  --cmake-args -DCMAKE_BUILD_TYPE=Release

# -------- 12. Convenience: auto-source environments -------------------------
RUN echo "source /opt/ros/${ROS_DISTRO}/setup.bash" >> /root/.bashrc && \
    echo "if [ -f /home/ros2_ws/install/setup.bash ]; then source /home/ros2_ws/install/setup.bash; fi" >> /root/.bashrc

# -------- 13. Entrypoint ----------------------------------------------------
ENTRYPOINT ["/ros_entrypoint.sh"]
CMD ["bash", "-i"]
