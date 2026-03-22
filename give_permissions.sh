#!/bin/bash

# ==============================================================================
# JETSON CAMERA SETUP (Orbbec + Intel + USB Memory Fix)
# Scope: Permissions, Groups, and Kernel Buffers
# ==============================================================================

set -e

# Color codes
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

echo -e "${BLUE}============================================${NC}"
echo -e "${BLUE}===  Jetson Camera Setup (Host)          ===${NC}"
echo -e "${BLUE}============================================${NC}"

if [ "$EUID" -eq 0 ]; then 
    echo -e "${RED}✗ Please run as regular user (not root). Sudo will be requested.${NC}"
    exit 1
fi

echo -e "\n${GREEN}[1/4] Configuring Udev Rules (Intel & Orbbec)${NC}"
echo "--------------------------------------------"

# We write the rules directly to avoid risky apt-get dependencies on Jetson
sudo bash -c 'cat > /etc/udev/rules.d/99-stereo-cameras.rules <<EOF
# ==============================================================================
# ORBBEC CAMERAS (Vendor ID: 2bc5)
# ==============================================================================
SUBSYSTEM=="usb", ATTRS{idVendor}=="2bc5", MODE="0666", GROUP="plugdev"
KERNEL=="hidraw*", ATTRS{idVendor}=="2bc5", MODE="0666", GROUP="plugdev"

# ==============================================================================
# INTEL REALSENSE CAMERAS (Vendor ID: 8086)
# ==============================================================================
SUBSYSTEM=="usb", ATTRS{idVendor}=="8086", MODE="0666", GROUP="plugdev"
KERNEL=="hidraw*", ATTRS{idVendor}=="8086", MODE="0666", GROUP="plugdev"
EOF'

echo -e "${GREEN}✓ Universal camera rules written to /etc/udev/rules.d/99-stereo-cameras.rules${NC}"

echo -e "\n${GREEN}[2/4] Adding User to Groups${NC}"
echo "--------------------------------------------"
for group in plugdev video dialout; do
    if groups $USER | grep &>/dev/null "$group"; then
        echo -e "${GREEN}✓ User is already in $group${NC}"
    else
        echo -e "${YELLOW}Adding user to $group...${NC}"
        sudo usermod -aG $group $USER
    fi
done

echo -e "\n${GREEN}[3/4] CRITICAL: Increasing USBFS Memory Limit${NC}"
echo "--------------------------------------------"
# Jetson default is 16MB. We need 1000MB for reliable multi-camera streaming.
CURRENT_LIMIT=$(cat /sys/module/usbcore/parameters/usbfs_memory_mb)
TARGET_LIMIT=1000

if [ "$CURRENT_LIMIT" -lt "$TARGET_LIMIT" ]; then
    echo -e "${YELLOW}Current USB Limit: ${CURRENT_LIMIT}MB. Increasing to ${TARGET_LIMIT}MB...${NC}"
    
    # 1. Apply immediately for current session
    sudo sh -c "echo $TARGET_LIMIT > /sys/module/usbcore/parameters/usbfs_memory_mb"
    
    # 2. Make it permanent in extlinux.conf (The Jetson way)
    if grep -q "usbcore.usbfs_memory_mb" /boot/extlinux/extlinux.conf; then
        echo -e "${GREEN}✓ Boot config already has USB limit set.${NC}"
    else
        echo -e "${YELLOW}Updating boot config (extlinux.conf) for persistence...${NC}"
        # Backup first
        sudo cp /boot/extlinux/extlinux.conf /boot/extlinux/extlinux.conf.bak
        # Append param to the APPEND line
        sudo sed -i '/^.*APPEND/s/$/ usbcore.usbfs_memory_mb=1000/' /boot/extlinux/extlinux.conf
        echo -e "${GREEN}✓ Boot config updated.${NC}"
    fi
else
    echo -e "${GREEN}✓ USB Memory Limit is already sufficient (${CURRENT_LIMIT}MB)${NC}"
fi

echo -e "\n${GREEN}[4/4] Reloading & Verifying${NC}"
echo "--------------------------------------------"
sudo udevadm control --reload-rules
sudo udevadm trigger

# Simple Audit
echo -e "${YELLOW}Checking Connected Devices:${NC}"
lsusb | grep -E "2bc5|8086" || echo -e "${RED}No Camera Connected (Check Cable!)${NC}"

# Check actual permissions of a found device
FOUND_DEV=$(lsusb -d 2bc5: | head -n 1 | awk '{print "/dev/bus/usb/"$2"/"$4}' | sed 's/://')
if [ ! -z "$FOUND_DEV" ]; then
    echo -e "\nChecking permissions for Orbbec Device: $FOUND_DEV"
    ls -l $FOUND_DEV
else
    FOUND_DEV=$(lsusb -d 8086: | head -n 1 | awk '{print "/dev/bus/usb/"$2"/"$4}' | sed 's/://')
    if [ ! -z "$FOUND_DEV" ]; then
        echo -e "\nChecking permissions for Intel Device: $FOUND_DEV"
        ls -l $FOUND_DEV
    fi
fi

echo -e "\n${BLUE}=== Setup Complete ===${NC}"
echo -e "${YELLOW}NOTE: If you changed groups or boot config, please REBOOT your Jetson.${NC}"