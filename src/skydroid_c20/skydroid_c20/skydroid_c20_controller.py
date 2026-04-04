import logging
import threading
import socket
import time
import numpy as np
# --- ROS 2 CHANGE: import path updated for ROS 2 package structure ---
from skydroid_c20.ptz_controller import PTZController
# --- END ROS 2 CHANGE ---
# --- ROS 2 CHANGE: replaced cyclonedds + DDSSubscriber + DDSDataTypes ---
from xterra.msg import CameraControl, FlashControl
# --- END ROS 2 CHANGE ---

class SkydroidC20Controller(PTZController):
    def __init__(self, video_source, gimbal_host, gimbal_port, camera_port, topic_name="/camera/stream0", frame_rate=15.0):
        super().__init__(video_source, gimbal_host, gimbal_port, camera_port, topic_name, frame_rate, flip_code=0)
        # --- ROS 2 CHANGE: replaced DDSSubscriber + Topic + set_callback with create_subscription ---
        self.camera_control_sub = self.create_subscription(CameraControl, "/camera_control", self._on_camera_control_data, 10)
        self.flash_control_sub = self.create_subscription(FlashControl, "/flash_control", self.on_flash_control, 10)
        # --- END ROS 2 CHANGE ---

        self.logger.info("DDS subscriber initialized for gimbal control.")
        
        self._desired_speed = 1.0
        
        self.ZOOM_MIN = 1
        self.ZOOM_MAX = 22
        self.ZOOM_TOLERANCE = 0.5
        self.ZOOM_SPEED = 7
        self._GIMBAL_RESET_TIMEOUT = 10

        self._zoom_for_time = 0.0
        self._zoom_start_time = time.time()
        self._last_command_time = time.time()

        self._desired_pan = 0.0
        self._desired_tilt = 0.0
        self._desired_roll = 0.0
        self._desired_zoom = 1.0
        self._desired_zoom_scale = 0.0
        self._zoom_dir = -1.0

        self._ptz_control_dt = 0.1

        self._ptz_thread = threading.Thread(target=self._ptz_worker, daemon=True)
        self._ptz_thread.start()

        self._current_zoom_level = 1
        self._actual_zoom_level = None
        self._zoom_poll_thread = threading.Thread(target=self._zoom_poll_worker, daemon=True)
        self._zoom_poll_thread.start()

    def _on_camera_control_data(self, data):
        """Callback for receiving camera control data from DDS."""
        try:
            speed = data.speed if hasattr(data, 'speed') else 5.0
            self._desired_pan = data.pan
            self._desired_tilt = data.tilt
            self._desired_roll = data.roll
            self._desired_speed = speed
            # self.set_yaw(data.pan, speed)
            # self.set_pitch(data.tilt, speed)
            # self.set_roll(data.roll, speed)
            # self._desired_zoom_scale = self.validate_zoom(data.zoom)
            # self._zoom_dir = np.sign(self._desired_zoom_scale - self.get_zoom_level())

            # print(f"DDS Zoom command: {data.zoom}")
            self._last_command_time = time.time()

            if self._current_zoom_level is not None:
                # if (time.time() - self._zoom_start_time > 2):
                new_zoom_scale = (self.validate_zoom(data.zoom) - 1) / 10
                if (self._desired_zoom_scale != new_zoom_scale):
                    self._desired_zoom_scale = new_zoom_scale
                    self._desired_zoom = int(self.ZOOM_MIN + (self.ZOOM_MAX - self.ZOOM_MIN) * min(max(self._desired_zoom_scale, 0.0), 1))
                    self._zoom_for_time = abs(self._desired_zoom - self._current_zoom_level) / self.ZOOM_SPEED
                    self._zoom_start_time = time.time()
                    self._zoom_dir = np.sign(self._desired_zoom - self._current_zoom_level)
                # else:
                #     self.logger.info("Only support DDS commands at 0.5Hz rate. Ignoring current command")

            self.logger.info(f"DDS command received: Yaw {data.pan:.1f}°, Pitch {data.tilt:.1f}°, Zoom Scale: {self._desired_zoom_scale}")
        except ValueError as e:
            self.logger.error(f"Invalid gimbal control data: {e}")
        except Exception as e:
            self.logger.error(f"Error processing DDS camera control data: {e}")

    def on_flash_control(self, data):
        if (data.state):
            self.set_led_on()
        else:
            self.set_led_off()

    def get_crc(self, cmd):
        return f"{cmd}{sum(cmd.encode('ascii')) & 0xFF:02X}"

    def validate_angle(self, angle):
        return min(max(angle, -90), 90)

    def validate_speed(self, speed):
        return min(max(speed, 0), 9.9)

    def validate_zoom(self, scale):
        return min(max(scale, 1.0), 10.0)

    def short_to_hex(self, value):
        value = max(min(value, 32767), -32768)
        return f"{value & 0xFFFF:04X}"

    def build_angle_command(self, axis, angle, speed):
        self.validate_angle(angle)
        self.validate_speed(speed)
        scaled_angle = int(angle * 100)
        hex_angle = self.short_to_hex(scaled_angle)
        scaled_speed = int(speed * 10)
        hex_speed = f"{scaled_speed:02X}"
        base = "#TPUG6w"
        if axis == "YAW":
            return self.get_crc(f"{base}GAY{hex_angle}{hex_speed}")
        elif axis == "PITCH":
            return self.get_crc(f"{base}GAP{hex_angle}{hex_speed}")
        elif axis == "ROLL":
            return self.get_crc(f"{base}GAR{hex_angle}{hex_speed}")
        raise ValueError("Axis must be 'YAW', 'PITCH', or 'ROLL'")
    
    def build_ptz_command(self, command=""):
        base = "#TPUG2w"
        return self.get_crc(f"{base}PTZ{command}")

    def build_camera_command(self, command1, subcommand, data=b''):
        header = b'\x00' * 6
        length = len(data)
        # print(f"Length: {length}")
        command = bytes([command1, subcommand, (length >> 8) & 0xFF, length & 0xFF]) + data
        return header + command
    
    def parse_camera_response(self, response):
        # Check if response has at least the header (6 bytes) plus minimum structure
        if len(response) < 10:  # 6 (header) + 2 (commands) + 2 (length)
            raise ValueError("Response too short")
        
        # Validate header
        if response[0:6] != b'\x00\x00\x00\x00\x00\x00':
            raise ValueError("Invalid header")
        
        # Extract Length (big-endian, starts at byte 8)
        length = (response[8] << 8) | response[9]
        
        # Check if response includes the full data field
        if len(response) < 10 + length:
            raise ValueError("Response incomplete")
        
        # Extract Data
        data = response[10:10 + length]
        
        # Interpret as 16-bit little-endian integer
        if length >= 2:
            value = int.from_bytes(data[0:2], 'little')
            return value
        else:
            raise ValueError("Data field too short for 16-bit value")

    def set_yaw(self, angle, speed=1):
        cmd = self.build_angle_command("YAW", angle, speed)
        with self._gimbal_lock:
            self.send_gimbal_command(cmd)

    def set_pitch(self, angle, speed=1):
        cmd = self.build_angle_command("PITCH", angle, speed)
        with self._gimbal_lock:
            self.send_gimbal_command(cmd)

    def set_roll(self, angle, speed=1):
        cmd = self.build_angle_command("ROLL", angle, speed)
        with self._gimbal_lock:
            self.send_gimbal_command(cmd)

    def calibrate_gimbal(self):
        if not self.gimbal_socket:
            self.logger.error("Gimbal socket not connected")
            return None
        cmd = self.build_ptz_command("0C")
        print(f"Sending gimbal PTZ command: {cmd}")
        with self._gimbal_lock:
            self.send_gimbal_command(cmd)
        return True

    def set_zoom(self, desired_zoom):
        """Continuously adjust the zoom until within tolerance."""
        if not self.camera_socket:
            self.logger.error("Camera socket not connected.")
            return

        # desired_zoom = int(self.ZOOM_MIN + (self.ZOOM_MAX - self.ZOOM_MIN) * min(max(self._desired_zoom_scale, 0.0), 1.0))
        # current_zoom = self.get_zoom_level()
        current_zoom = self._current_zoom_level

        if current_zoom is None:
            self.logger.warning("Zoom level not available yet.")
            return

        try:
            zoom_diff = desired_zoom - current_zoom
            # self._zoom_dir = np.sign(zoom_diff)
            # print(f"Zoom dir: {self._zoom_dir}")
            # self.logger.warning(f"Zoom des: {self._desired_zoom}")
            # self.logger.warning(f"Zoom curr: {self._current_zoom_level}")

            # if self._zoom_dir > 0 and zoom_diff > 0:
            if abs(zoom_diff) > self.ZOOM_TOLERANCE:
                # self._zoom_start_time = time.time()
                # self._zoom_for_time = 0.5 * abs(zoom_diff) / self.ZOOM_SPEED
                # self.logger.warning(f"Zoom diff: {zoom_diff}, Zooming for time: {self._zoom_for_time}")
                # if (self._zoom_for_time < self._ptz_control_dt):
                #     self._zoom_for_time = self._ptz_control_dt
                # self._zoom_dir = np.sign(zoom_diff)
                if self._zoom_dir > 0 and (time.time() - self._zoom_start_time) < self._zoom_for_time:
                    self.set_zoom_in()
                elif self._zoom_dir < 0 and (time.time() - self._zoom_start_time) < self._zoom_for_time:
                    self.set_zoom_out()
            else:
                self.set_zoom_stop()

                # if (abs(zoom_diff) > self.ZOOM_TOLERANCE):
                #     self._zoom_start_time = time.time()
                #     self._zoom_for_time = 0.5 * abs(zoom_diff) / self.ZOOM_SPEED
                #     self.logger.warning(f"Zoom diff: {zoom_diff}, Zooming for time: {self._zoom_for_time}")
                #     if (self._zoom_for_time < self._ptz_control_dt):
                #         self._zoom_for_time = self._ptz_control_dt
                #     self._zoom_dir = np.sign(zoom_diff)


            # if abs(zoom_diff) <= self.ZOOM_TOLERANCE:
            #     data = b'\x0b\x01\x01'  # Stop zoom
            #     self.logger.debug(f"Zoom stopped at level {current_zoom}, desired {desired_zoom}")
            # elif zoom_diff > 0:
            #     data = b'\x0b\x00\x01'  # Zoom in
            #     self.logger.debug(f"Zooming in: current {current_zoom}, desired {desired_zoom}")
            # else:
            #     data = b'\x0c\x00\x01'  # Zoom out
            #     self.logger.debug(f"Zooming out: current {current_zoom}, desired {desired_zoom}")

            # command = self.build_camera_command(34, 49, data)
            # self.send_camera_command(command)

        except Exception as e:
            self.logger.error(f"Error setting zoom: {e}")

    def _apply_ptz_control(self):
        if (time.time() - self._last_command_time) < self._GIMBAL_RESET_TIMEOUT:
            self.set_zoom(self._desired_zoom)
            self.set_pitch(self._desired_tilt, speed=self._desired_speed)
            self.set_yaw(self._desired_pan, speed=self._desired_speed)
        elif (time.time() - self._last_command_time < self._GIMBAL_RESET_TIMEOUT + 2):
            self.set_zoom(1)
            self.set_pitch(0)
            self.set_yaw(0)
        # else:
        #     self.set_zoom(1)

    # def _zoom_worker(self):
    #     """Background thread to manage continuous zooming."""
    #     while True:
    #         self._apply_zoom()
    #         time.sleep(0.2)

    def _ptz_worker(self):
        """Background thread to manage PTZ control."""
        # self.restart_camera()
        # time.sleep(2)
        while True:
            # self.logger.info("PTZ WORKER!!!")
            if not self.gimbal_socket:
                self.logger.debug("Gimbal socket not connected.")
                time.sleep(1.0)
                continue
            self._apply_ptz_control()
            # self.restart_camera()
            # self.read_ptz_control_data()
            # self.calibrate_gimbal()
            time.sleep(self._ptz_control_dt)

    def _zoom_poll_worker(self):
        """Continuously poll the zoom level and cache it."""
        while True:
            try:
                # print(f"Curr zoom: {self._current_zoom_level}")
                zoom = self.get_zoom_level()
                # # print(f"Zoom: {zoom}")
                # if zoom is not None:
                #     self._current_zoom_level = zoom
                time.sleep(0.5)
            except Exception as e:
                self.logger.warning(f"Zoom polling error: {e}")


    def set_led_on(self):
        self.logger.info("Turning LED on. Ensure voltage is 18V or more.")
        self.send_gimbal_command(self.get_crc("AT+LED -t1\r\n"))

    def set_led_off(self):
        self.logger.info("Turning LED off.")
        self.send_gimbal_command(self.get_crc("AT+LED -t0\r\n"))

    def set_zoom_in(self):
        data = b'\x0b\x00\x05'  # Zoom in
        command = self.build_camera_command(34, 49, data)
        with self._camera_lock:
            self.send_camera_command(command)
        self._current_zoom_level += self.ZOOM_SPEED * self._ptz_control_dt

    def set_zoom_out(self):
        data = b'\x0c\x00\x05'  # Zoom out
        command = self.build_camera_command(34, 49, data)
        with self._camera_lock:
            self.send_camera_command(command)
        self._current_zoom_level -= self.ZOOM_SPEED * self._ptz_control_dt

    def set_zoom_stop(self):
        data = b'\x0b\x01\x01'  # Stop zoom
        command = self.build_camera_command(34, 49, data)
        with self._camera_lock:
            self.send_camera_command(command)

    def get_zoom_level(self):
        if not self.camera_socket:
            self.logger.debug("Camera socket not connected.")
            return None
        try:
            # start_time = time.time()
            self.camera_socket.settimeout(0.02)
            try:
                while True:
                    self.camera_socket.recv(1024)
                    time.sleep(0.05)
            except socket.timeout:
                pass
            self.camera_socket.settimeout(1.0)
            command = self.build_camera_command(34, 74, data=b'\x00\x00')
            with self._camera_lock:
                self.send_camera_command(command)
                self.logger.debug(f"Sending get zoom command: {command.hex()}")
                response = self.camera_socket.recv(1024)
                # response = self.camera_socket.recv(10 + 12)
            if len(response) < 20:
                self.logger.warning(f"Zoom response too short: {len(response)} bytes")
                return None

            current_zoom_repr = (response[18] << 8) + response[19]
            zoom_level = (current_zoom_repr / 66) * self.ZOOM_MAX
            if (zoom_level != self._actual_zoom_level):
                self._actual_zoom_level = zoom_level
                # self._current_zoom_level = zoom_level
            # print(f"Zoom level: {zoom_level}")
            # run_time = time.time() - start_time
            # print(f"Get read zoom time: {run_time}")
            return zoom_level
        except Exception as e:
            self.logger.error(f"Error getting zoom level: {e}")
            return None

    def read_ptz_control_data(self):
        self.logger.info("Reading PTZ control data...")
        print("Reading PTZ control data...")
        if not self.camera_socket:
            self.logger.error("Camera socket not connected.")
            return None
        try:
            self.camera_socket.setblocking(False)
            while True:
                try:
                    self.camera_socket.recv(1024)
                except BlockingIOError:
                    break  # No more data to read
            self.camera_socket.setblocking(True)
            self.camera_socket.settimeout(0.05)
            
            command = self.build_camera_command(17, 22, data=b'')
            print(f"Sending command: {command.hex()}")
            with self._camera_lock:
                self.send_camera_command(command)
                response = self.camera_socket.recv(1024)
            self.logger.debug(f"Received response: {response}")
            print(f"Received response: {response.hex()}, length: {len(response.hex())}")
            print(f"Response parsed: {self.parse_camera_response(response)}")
        except Exception as e:
            self.logger.error(f"Error getting PTZ control data: {e}")
            return None
    
    def restart_camera(self):
        self.logger.info("Restarting camera...")
        print("Restarting camera...")
        if not self.camera_socket:
            self.logger.error("Camera socket not connected.")
            return None
        try:
            data = b'\x55\xaa'  # Restart
            command = self.build_camera_command(51, 82, data)
            with self._camera_lock:
                self.send_camera_command(command)
        except Exception as e:
            self.logger.error(f"Error restarting camera: {e}")
            return None
