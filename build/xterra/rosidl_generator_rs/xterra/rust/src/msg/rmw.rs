#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__JointData() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__msg__JointData__init(msg: *mut JointData) -> bool;
    fn xterra__msg__JointData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointData>, size: usize) -> bool;
    fn xterra__msg__JointData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointData>);
    fn xterra__msg__JointData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointData>, out_seq: *mut rosidl_runtime_rs::Sequence<JointData>) -> bool;
}

// Corresponds to xterra__msg__JointData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointData {
    /// Desired joint positions (radians)
    pub q: [f32; 12],

    /// Desired joint velocities (rad/s)
    pub dq: [f32; 12],

    /// Proportional gains (Nm/rad)
    pub kp: [f32; 12],

    /// Derivative gains (Nm·s/rad)
    pub kd: [f32; 12],

    /// Feedforward torques (Nm)
    pub tau: [f32; 12],

}



impl Default for JointData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__msg__JointData__init(&mut msg as *mut _) {
        panic!("Call to xterra__msg__JointData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__JointData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__JointData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__JointData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointData where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/msg/JointData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__JointData() }
  }
}


#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__SensorData() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__msg__SensorData__init(msg: *mut SensorData) -> bool;
    fn xterra__msg__SensorData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SensorData>, size: usize) -> bool;
    fn xterra__msg__SensorData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SensorData>);
    fn xterra__msg__SensorData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SensorData>, out_seq: *mut rosidl_runtime_rs::Sequence<SensorData>) -> bool;
}

// Corresponds to xterra__msg__SensorData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub q: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub dq: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub ddq: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub q_current: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub d_current: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub tau_est: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub quat: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub gyro: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub accel: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub rpy: [f32; 3],

}



impl Default for SensorData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__msg__SensorData__init(&mut msg as *mut _) {
        panic!("Call to xterra__msg__SensorData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SensorData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__SensorData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__SensorData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__SensorData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SensorData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SensorData where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/msg/SensorData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__SensorData() }
  }
}


#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__MotorGainMultiplier() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__msg__MotorGainMultiplier__init(msg: *mut MotorGainMultiplier) -> bool;
    fn xterra__msg__MotorGainMultiplier__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MotorGainMultiplier>, size: usize) -> bool;
    fn xterra__msg__MotorGainMultiplier__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MotorGainMultiplier>);
    fn xterra__msg__MotorGainMultiplier__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MotorGainMultiplier>, out_seq: *mut rosidl_runtime_rs::Sequence<MotorGainMultiplier>) -> bool;
}

// Corresponds to xterra__msg__MotorGainMultiplier
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorGainMultiplier {

    // This member is not documented.
    #[allow(missing_docs)]
    pub kp_scale: rosidl_runtime_rs::Sequence<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd_scale: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for MotorGainMultiplier {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__msg__MotorGainMultiplier__init(&mut msg as *mut _) {
        panic!("Call to xterra__msg__MotorGainMultiplier__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MotorGainMultiplier {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__MotorGainMultiplier__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__MotorGainMultiplier__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__MotorGainMultiplier__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MotorGainMultiplier {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MotorGainMultiplier where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/msg/MotorGainMultiplier";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__MotorGainMultiplier() }
  }
}


#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__QuadLog() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__msg__QuadLog__init(msg: *mut QuadLog) -> bool;
    fn xterra__msg__QuadLog__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<QuadLog>, size: usize) -> bool;
    fn xterra__msg__QuadLog__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<QuadLog>);
    fn xterra__msg__QuadLog__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<QuadLog>, out_seq: *mut rosidl_runtime_rs::Sequence<QuadLog>) -> bool;
}

// Corresponds to xterra__msg__QuadLog
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct QuadLog {

    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_state: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_prob: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub contact_force: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_position: super::super::msg::rmw::Point3D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_orientation: super::super::msg::rmw::Quaternion,


    // This member is not documented.
    #[allow(missing_docs)]
    pub linear_velocity: super::super::msg::rmw::Point3D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub angular_velocity: super::super::msg::rmw::Point3D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub plane_normal: super::super::msg::rmw::Point3D,


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_wrench: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_position: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_velocity: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_torque: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub foot_position: [f32; 12],


    // This member is not documented.
    #[allow(missing_docs)]
    pub foot_velocity: [f32; 12],

}



impl Default for QuadLog {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__msg__QuadLog__init(&mut msg as *mut _) {
        panic!("Call to xterra__msg__QuadLog__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for QuadLog {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__QuadLog__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__QuadLog__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__QuadLog__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for QuadLog {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for QuadLog where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/msg/QuadLog";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__QuadLog() }
  }
}


#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__Point3D() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__msg__Point3D__init(msg: *mut Point3D) -> bool;
    fn xterra__msg__Point3D__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Point3D>, size: usize) -> bool;
    fn xterra__msg__Point3D__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Point3D>);
    fn xterra__msg__Point3D__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Point3D>, out_seq: *mut rosidl_runtime_rs::Sequence<Point3D>) -> bool;
}

// Corresponds to xterra__msg__Point3D
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Point3D {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f32,

}



impl Default for Point3D {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__msg__Point3D__init(&mut msg as *mut _) {
        panic!("Call to xterra__msg__Point3D__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Point3D {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__Point3D__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__Point3D__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__Point3D__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Point3D {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Point3D where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/msg/Point3D";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__Point3D() }
  }
}


#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__Quaternion() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__msg__Quaternion__init(msg: *mut Quaternion) -> bool;
    fn xterra__msg__Quaternion__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Quaternion>, size: usize) -> bool;
    fn xterra__msg__Quaternion__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Quaternion>);
    fn xterra__msg__Quaternion__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Quaternion>, out_seq: *mut rosidl_runtime_rs::Sequence<Quaternion>) -> bool;
}

// Corresponds to xterra__msg__Quaternion
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Quaternion {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub w: f32,

}



impl Default for Quaternion {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__msg__Quaternion__init(&mut msg as *mut _) {
        panic!("Call to xterra__msg__Quaternion__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Quaternion {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__Quaternion__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__Quaternion__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__Quaternion__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Quaternion {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Quaternion where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/msg/Quaternion";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__Quaternion() }
  }
}


#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__SolverStats() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__msg__SolverStats__init(msg: *mut SolverStats) -> bool;
    fn xterra__msg__SolverStats__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SolverStats>, size: usize) -> bool;
    fn xterra__msg__SolverStats__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SolverStats>);
    fn xterra__msg__SolverStats__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SolverStats>, out_seq: *mut rosidl_runtime_rs::Sequence<SolverStats>) -> bool;
}

// Corresponds to xterra__msg__SolverStats
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SolverStats {

    // This member is not documented.
    #[allow(missing_docs)]
    pub iters: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_iters: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub residual: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub constraint_violation: [f32; 4],


    // This member is not documented.
    #[allow(missing_docs)]
    pub time_ms: f32,

}



impl Default for SolverStats {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__msg__SolverStats__init(&mut msg as *mut _) {
        panic!("Call to xterra__msg__SolverStats__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SolverStats {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__SolverStats__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__SolverStats__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__SolverStats__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SolverStats {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SolverStats where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/msg/SolverStats";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__SolverStats() }
  }
}


#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__RGBFrame() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__msg__RGBFrame__init(msg: *mut RGBFrame) -> bool;
    fn xterra__msg__RGBFrame__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RGBFrame>, size: usize) -> bool;
    fn xterra__msg__RGBFrame__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RGBFrame>);
    fn xterra__msg__RGBFrame__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RGBFrame>, out_seq: *mut rosidl_runtime_rs::Sequence<RGBFrame>) -> bool;
}

// Corresponds to xterra__msg__RGBFrame
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RGBFrame {

    // This member is not documented.
    #[allow(missing_docs)]
    pub priority: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axes: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub buttons: [u8; 12],

}



impl Default for RGBFrame {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__msg__RGBFrame__init(&mut msg as *mut _) {
        panic!("Call to xterra__msg__RGBFrame__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RGBFrame {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__RGBFrame__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__RGBFrame__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__RGBFrame__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RGBFrame {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RGBFrame where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/msg/RGBFrame";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__RGBFrame() }
  }
}


#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__IndicatorData() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__msg__IndicatorData__init(msg: *mut IndicatorData) -> bool;
    fn xterra__msg__IndicatorData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IndicatorData>, size: usize) -> bool;
    fn xterra__msg__IndicatorData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IndicatorData>);
    fn xterra__msg__IndicatorData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IndicatorData>, out_seq: *mut rosidl_runtime_rs::Sequence<IndicatorData>) -> bool;
}

// Corresponds to xterra__msg__IndicatorData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IndicatorData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub led1: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub led2: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub led3: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub buzzer: bool,

}



impl Default for IndicatorData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__msg__IndicatorData__init(&mut msg as *mut _) {
        panic!("Call to xterra__msg__IndicatorData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IndicatorData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__IndicatorData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__IndicatorData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__IndicatorData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IndicatorData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IndicatorData where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/msg/IndicatorData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__IndicatorData() }
  }
}


#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__BaseOrientationWrenchDebug() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__msg__BaseOrientationWrenchDebug__init(msg: *mut BaseOrientationWrenchDebug) -> bool;
    fn xterra__msg__BaseOrientationWrenchDebug__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BaseOrientationWrenchDebug>, size: usize) -> bool;
    fn xterra__msg__BaseOrientationWrenchDebug__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BaseOrientationWrenchDebug>);
    fn xterra__msg__BaseOrientationWrenchDebug__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BaseOrientationWrenchDebug>, out_seq: *mut rosidl_runtime_rs::Sequence<BaseOrientationWrenchDebug>) -> bool;
}

// Corresponds to xterra__msg__BaseOrientationWrenchDebug
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BaseOrientationWrenchDebug {

    // This member is not documented.
    #[allow(missing_docs)]
    pub base_wrench_base_tra: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_wrench_base_ori: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_wrench_legs: [f32; 3],


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_wrench_full: [f32; 3],

}



impl Default for BaseOrientationWrenchDebug {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__msg__BaseOrientationWrenchDebug__init(&mut msg as *mut _) {
        panic!("Call to xterra__msg__BaseOrientationWrenchDebug__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BaseOrientationWrenchDebug {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__BaseOrientationWrenchDebug__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__BaseOrientationWrenchDebug__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__BaseOrientationWrenchDebug__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BaseOrientationWrenchDebug {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BaseOrientationWrenchDebug where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/msg/BaseOrientationWrenchDebug";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__BaseOrientationWrenchDebug() }
  }
}


#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__FloatScalar() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__msg__FloatScalar__init(msg: *mut FloatScalar) -> bool;
    fn xterra__msg__FloatScalar__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FloatScalar>, size: usize) -> bool;
    fn xterra__msg__FloatScalar__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FloatScalar>);
    fn xterra__msg__FloatScalar__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FloatScalar>, out_seq: *mut rosidl_runtime_rs::Sequence<FloatScalar>) -> bool;
}

// Corresponds to xterra__msg__FloatScalar
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FloatScalar {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: f32,

}



impl Default for FloatScalar {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__msg__FloatScalar__init(&mut msg as *mut _) {
        panic!("Call to xterra__msg__FloatScalar__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FloatScalar {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__FloatScalar__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__FloatScalar__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__FloatScalar__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FloatScalar {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FloatScalar where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/msg/FloatScalar";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__FloatScalar() }
  }
}


#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__JoyData() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__msg__JoyData__init(msg: *mut JoyData) -> bool;
    fn xterra__msg__JoyData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JoyData>, size: usize) -> bool;
    fn xterra__msg__JoyData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JoyData>);
    fn xterra__msg__JoyData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JoyData>, out_seq: *mut rosidl_runtime_rs::Sequence<JoyData>) -> bool;
}

// Corresponds to xterra__msg__JoyData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JoyData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub priority: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub axes: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub buttons: [u8; 12],

}



impl Default for JoyData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__msg__JoyData__init(&mut msg as *mut _) {
        panic!("Call to xterra__msg__JoyData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JoyData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__JoyData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__JoyData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__JoyData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JoyData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JoyData where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/msg/JoyData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__JoyData() }
  }
}


#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__CameraFrame() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__msg__CameraFrame__init(msg: *mut CameraFrame) -> bool;
    fn xterra__msg__CameraFrame__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CameraFrame>, size: usize) -> bool;
    fn xterra__msg__CameraFrame__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CameraFrame>);
    fn xterra__msg__CameraFrame__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CameraFrame>, out_seq: *mut rosidl_runtime_rs::Sequence<CameraFrame>) -> bool;
}

// Corresponds to xterra__msg__CameraFrame
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CameraFrame {

    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub data: [u8; 2764800],


    // This member is not documented.
    #[allow(missing_docs)]
    pub width: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub height: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub channels: u8,

}



impl Default for CameraFrame {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__msg__CameraFrame__init(&mut msg as *mut _) {
        panic!("Call to xterra__msg__CameraFrame__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CameraFrame {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__CameraFrame__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__CameraFrame__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__msg__CameraFrame__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CameraFrame {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CameraFrame where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/msg/CameraFrame";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__msg__CameraFrame() }
  }
}


