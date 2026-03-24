#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "xterra_perception_api::xterra_perception_api" for configuration ""
set_property(TARGET xterra_perception_api::xterra_perception_api APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(xterra_perception_api::xterra_perception_api PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libxterra_perception_api.so"
  IMPORTED_SONAME_NOCONFIG "libxterra_perception_api.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS xterra_perception_api::xterra_perception_api )
list(APPEND _IMPORT_CHECK_FILES_FOR_xterra_perception_api::xterra_perception_api "${_IMPORT_PREFIX}/lib/libxterra_perception_api.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
