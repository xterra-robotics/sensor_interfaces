# ROS 2 Docker Development Environment

## Step-by-Step Instructions

### **Terminal 1: Build and Run the Primary Container**

This terminal will be used to build the Docker image and launch the main container instance. It will remain open for the duration of your development session.

1.  **Build the Docker Image**

    Navigate to the root directory of the project and execute the build command. This step only needs to be performed once, or whenever the `Dockerfile` is modified.

    ```bash
    docker build -t xterra-ros-env .
    ```

2.  **Authorize GUI Forwarding**

    Allow the local Docker container to connect to your host's display server.

    ```bash
    xhost +local:docker
    ```

3.  **Run the Docker Container**

    This command starts the container with the necessary privileges and mounts your local `src` directory as a volume for live code editing.

    ```bash
        docker run -it --rm \
        --gpus all \
        -e NVIDIA_VISIBLE_DEVICES=all \
        -e NVIDIA_DRIVER_CAPABILITIES=all \
        -e DISPLAY=$DISPLAY \
        -v /tmp/.X11-unix:/tmp/.X11-unix \
        -v $(pwd)/src:/ros2_ws/src \
        --name xterra_dev_container \
        xterra-ros-env
    ```

4.  **Launch Gazebo Simulation**

    Once the container is running, you will be inside its shell. Compile the workspace and run a launch file. The Gazebo GUI should now appear on your host machine's screen.

    ```bash
        colcon build
        source install/setup.bash
        ros2 launch m2_metal_description m2_metal_gazebo.launch.py
    ```

---

### **Terminal 2:**

Open a new, separate terminal on your host machine to run a test node inside the already running container.

1.  **Access the Running Container**

    Use `docker exec` to open a new `bash` shell inside the `xterra_dev_container` instance.

    ```bash
    docker exec -it xterra_dev_container bash
    ```

2.  **Compile and Run a Node (Inside Container)**

    From this new shell, compile the workspace (if needed) and run the test node.

    ```bash
    source install/setup.bash
    ros2 run motion_planner TestPub m2_metal
    ```

---

## Development Workflow

This setup is optimized for active development:

1.  **Edit Code:** Modify your source code in the `src` directory on your **host machine** using your preferred editor.
2.  **Compile:** In either of the container terminals, navigate to `/ros2_ws` and run `colcon build`. The changes are instantly available inside the container due to the volume mount.
3.  **Relaunch:** Restart your nodes or the launch file to test the new changes. **There is no need to rebuild the Docker image.**
