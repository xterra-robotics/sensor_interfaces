#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__srv__CaptureImage_Request() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__srv__CaptureImage_Request__init(msg: *mut CaptureImage_Request) -> bool;
    fn xterra__srv__CaptureImage_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CaptureImage_Request>, size: usize) -> bool;
    fn xterra__srv__CaptureImage_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CaptureImage_Request>);
    fn xterra__srv__CaptureImage_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CaptureImage_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CaptureImage_Request>) -> bool;
}

// Corresponds to xterra__srv__CaptureImage_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureImage_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub camera_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image_type: rosidl_runtime_rs::String,

}



impl Default for CaptureImage_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__srv__CaptureImage_Request__init(&mut msg as *mut _) {
        panic!("Call to xterra__srv__CaptureImage_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CaptureImage_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__srv__CaptureImage_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__srv__CaptureImage_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__srv__CaptureImage_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CaptureImage_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CaptureImage_Request where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/srv/CaptureImage_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__srv__CaptureImage_Request() }
  }
}


#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xterra__srv__CaptureImage_Response() -> *const std::ffi::c_void;
}

#[link(name = "xterra__rosidl_generator_c")]
extern "C" {
    fn xterra__srv__CaptureImage_Response__init(msg: *mut CaptureImage_Response) -> bool;
    fn xterra__srv__CaptureImage_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CaptureImage_Response>, size: usize) -> bool;
    fn xterra__srv__CaptureImage_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CaptureImage_Response>);
    fn xterra__srv__CaptureImage_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CaptureImage_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CaptureImage_Response>) -> bool;
}

// Corresponds to xterra__srv__CaptureImage_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CaptureImage_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub reply: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub saved_path: rosidl_runtime_rs::String,

}



impl Default for CaptureImage_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xterra__srv__CaptureImage_Response__init(&mut msg as *mut _) {
        panic!("Call to xterra__srv__CaptureImage_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CaptureImage_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__srv__CaptureImage_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__srv__CaptureImage_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xterra__srv__CaptureImage_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CaptureImage_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CaptureImage_Response where Self: Sized {
  const TYPE_NAME: &'static str = "xterra/srv/CaptureImage_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xterra__srv__CaptureImage_Response() }
  }
}






#[link(name = "xterra__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__xterra__srv__CaptureImage() -> *const std::ffi::c_void;
}

// Corresponds to xterra__srv__CaptureImage
#[allow(missing_docs, non_camel_case_types)]
pub struct CaptureImage;

impl rosidl_runtime_rs::Service for CaptureImage {
    type Request = CaptureImage_Request;
    type Response = CaptureImage_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__xterra__srv__CaptureImage() }
    }
}


