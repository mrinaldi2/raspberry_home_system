cmake_minimum_required(VERSION 3.13.4)

set(CMAKE_CXX_STANDARD 14)
project(RaspberryHome VERSION 1.0.0)

SET(FULL_SCREEN_AVAILABLE 0 CACHE STRING "Should open window fullscreen")
SET(IS_DEBUG 1 CACHE STRING "Should application use debug")

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

configure_file( version_config.h.in ${CMAKE_BINARY_DIR}/generated/version_config.h )
include_directories( ${CMAKE_BINARY_DIR}/generated/ )

add_subdirectory(libraries)
add_subdirectory(modules)
add_subdirectory(application)

SET(CPACK_GENERATOR "ZIP")
SET(CPACK_DEBIAN_PACKAGE_MAINTAINER "Manuel Rinaldi") #required

INCLUDE(CPack)
