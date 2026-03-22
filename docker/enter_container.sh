#!/bin/bash
set -e
echo "Configuring xhost for GUI access..."
xhost +local:docker
chmod 664 ~/.Xauthority 2>/dev/null || true
# Variables
CONTAINER_NAME="fast-lio-ros2"
IMAGE_NAME="fast-lio-ros2:latest"
# 1. Clean up old container
if [ "$(docker ps -aq -f name=^/${CONTAINER_NAME}$)" ]; then
    echo "Found existing container '${CONTAINER_NAME}'. Removing it..."
    docker rm -f $CONTAINER_NAME
fi

./container_run.sh fast-lio-ros2 fast-lio-ros2:latest 
