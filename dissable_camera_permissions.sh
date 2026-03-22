#!/bin/bash

# ==============================================================================
# DISABLE CAMERA PERMISSIONS V2 (Auto-Sudo + Cleanup)
# ==============================================================================

# 1. AUTO-ELEVATE TO ROOT
# If the user didn't run with sudo, relaunch the script with sudo automatically.
if [ "$EUID" -ne 0 ]; then
    echo "Requesting root privileges to delete system rules..."
    exec sudo "$0" "$@"
fi

set -e # Exit on error

# Color codes
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

echo -e "${YELLOW}[1/3] Removing ALL Camera Rule Files...${NC}"

# --- Targeted Clean Up ---
# We delete the specific files created by previous setup scripts
rm -vf /etc/udev/rules.d/99-stereo-cameras.rules
rm -vf /etc/udev/rules.d/99-camera-permissions.rules
rm -vf /etc/udev/rules.d/56-orbbec-usb.rules
rm -vf /etc/udev/rules.d/99-realsense-libusb.rules

# --- Wildcard Clean Up (Safety Net) ---
# Removes any other file containing 'orbbec', 'realsense', or 'obsensor'
# We use 'find' to avoid errors if no files exist
find /etc/udev/rules.d/ -name "*orbbec*" -delete -print
find /etc/udev/rules.d/ -name "*obsensor*" -delete -print
find /etc/udev/rules.d/ -name "*realsense*" -delete -print

# --- System Library Clean Up (For apt-installed packages) ---
if [ -d "/lib/udev/rules.d/" ]; then
    find /lib/udev/rules.d/ -name "*realsense*" -delete -print
    find /lib/udev/rules.d/ -name "*orbbec*" -delete -print
fi

echo -e "\n${YELLOW}[2/3] Reloading System Configuration...${NC}"
udevadm control --reload-rules
# We trigger strictly for USB devices to force the kernel to re-evaluate permissions
udevadm trigger --subsystem-match=usb

echo -e "\n${YELLOW}[3/3] Verifying Removal...${NC}"

# Check if any rogue files remain
REMAINING=$(find /etc/udev/rules.d/ /lib/udev/rules.d/ -name "*orbbec*" -o -name "*realsense*" -o -name "*stereo-cameras*")

if [ -z "$REMAINING" ]; then
    echo -e "${GREEN}✓ All permission files successfully deleted.${NC}"
else
    echo -e "${RED}WARNING: Some files might still exist:${NC}"
    echo "$REMAINING"
fi

echo "--------------------------------------------------------"
echo -e "${YELLOW}IMPORTANT: The permissions in memory might persist until reconnection.${NC}"
echo -e "${YELLOW}ACTION REQUIRED: Unplug and Replug your cameras now.${NC}"