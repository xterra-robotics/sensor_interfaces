#!/bin/bash

# Exit immediately if a command exits with a non-zero status
set -e

# === CONFIGURATION ===
CONTAINER_NAME="xterra_autonomy_container"
IMAGE_NAME="xterra_autonomy"
PACKAGE_NAME="m2_metal_description" # The ROS 2 package containing your launch files
DEFAULT_LAUNCH_FILE="m2_autonomy.launch.py"

# === ARGUMENT PARSING ===
# Defaults
BUILD_DOCKER="false"
LAUNCH_FILE="$DEFAULT_LAUNCH_FILE"
LAUNCH_ARGS=""
POSITIONAL_ARGS=()

# Loop through all arguments to separate flags (true/--build) from launch params
for arg in "$@"; do
    case $arg in
        true|--build|-b)
            BUILD_DOCKER="true"
            shift # Remove this arg from processing
            ;;
        *)
            POSITIONAL_ARGS+=("$arg") # Store regular arguments
            shift # Remove this arg
            ;;
    esac
done

# Assign remaining positional args
if [ ${#POSITIONAL_ARGS[@]} -gt 0 ]; then
    # First remaining arg is the launch file
    LAUNCH_FILE="${POSITIONAL_ARGS[0]}"
    
    # All subsequent args are launch arguments (slice array from index 1)
    if [ ${#POSITIONAL_ARGS[@]} -gt 1 ]; then
        LAUNCH_ARGS="${POSITIONAL_ARGS[@]:1}"
    fi
fi

echo "==============================================="
echo "Configuration:"
echo "  Build Docker: $BUILD_DOCKER"
echo "  Launch File : $LAUNCH_FILE"
echo "  Launch Args : $LAUNCH_ARGS"
echo "==============================================="

# === CLEANUP FUNCTION ===
cleanup() {
    echo ""
    echo "=== Caught interrupt signal, cleaning up... ==="
    
    # Gracefully stop internal processes first
    if [ ! -z "$DOCKER_PID" ] && kill -0 $DOCKER_PID 2>/dev/null; then
        echo "Stopping ROS2 nodes inside container..."
        docker exec $CONTAINER_NAME bash -c "pkill -SIGINT -f ros2 || true"
        docker exec $CONTAINER_NAME bash -c "pkill -SIGTERM -f gzserver || true"
        sleep 2
        kill -TERM $DOCKER_PID 2>/dev/null || true
        wait $DOCKER_PID 2>/dev/null || true
    fi
    
    echo "Stopping and removing containers..."
    docker compose down
    docker rm -f $CONTAINER_NAME 2>/dev/null || true
    
    clear
    echo "=== Cleanup complete ==="
    exit 0
}

# Trap SIGINT (Ctrl+C) and SIGTERM
trap cleanup SIGINT SIGTERM

# === DOCKER SETUP ===

# Remove old container if it exists (prevent name conflict)
docker rm -f $CONTAINER_NAME 2>/dev/null || true

if [ "$BUILD_DOCKER" == "true" ]; then
    echo "Build flag detected. Building Docker image..."
    docker build -t $IMAGE_NAME .
else
    echo "Skipping Docker build..."
fi

echo "Configuring xhost for GUI access..."
xhost +local:docker || true
chmod 664 ~/.Xauthority 2>/dev/null || true

echo "Starting Docker containers..."
docker compose up -d

echo "Waiting for container to be ready..."
sleep 3

# === PAYLOAD EXECUTION ===

echo "Building ROS2 packages and starting simulation..."

# We execute a single bash command string inside the container.
# Note: We pass the bash variables ($LAUNCH_FILE, etc.) into the string.

docker exec $CONTAINER_NAME bash -c "
    # 1. Environment Setup
    export CMAKE_BUILD_PARALLEL_LEVEL=3
    export MAKEFLAGS='-j3'
    export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
    
    source /opt/ros/humble/setup.bash
    cd /home/ros2_ws
      
    echo 'Starting sequential build process...'
    
    colcon build --packages-select sensor_description && source install/setup.bash && \
    colcon build --packages-select m2_metal_description && source install/setup.bash && \
    colcon build --packages-select xterra && source install/setup.bash && \
    colcon build --packages-select xterra_perception_api && source install/setup.bash && \

    echo 'Build Complete.'

    # 3. Launch Execution
    # We use the passed variables here
    # echo 'Launching: $PACKAGE_NAME $LAUNCH_FILE with args: $LAUNCH_ARGS'
    
    # ros2 launch $PACKAGE_NAME $LAUNCH_FILE $LAUNCH_ARGS
" &

# Capture the PID of the docker exec command
DOCKER_PID=$!

# Wait for the process to finish
wait $DOCKER_PID

# Normal exit cleanup
#echo "Process exited normally."
#docker compose down
#docker rm -f $CONTAINER_NAME 2>/dev/null || true
