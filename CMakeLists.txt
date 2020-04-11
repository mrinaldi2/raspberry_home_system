cmake_minimum_required(VERSION 3.13.4)

project(RaspberryHome VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)
find_package(SDL2 REQUIRED)

add_executable(RasperryHome)
include_directories(${SDL2_INCLUDE_DIRS})

target_sources(RasperryHome PRIVATE "src/main.cpp")

target_link_libraries(RasperryHome ${SDL2_LIBRARIES})
