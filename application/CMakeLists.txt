cmake_minimum_required(VERSION 3.13.4)

set(CMAKE_CXX_STANDARD 11)
find_package(Boost REQUIRED COMPONENTS filesystem)
find_package(SDL2 REQUIRED)

project(home_station VERSION 0.0.1)
add_executable(home_station)

set(MY_INSTALL_RPATH
        "@loader_path/../lib"
        )
set_target_properties(home_station
        PROPERTIES
        INSTALL_RPATH "${MY_INSTALL_RPATH}"
        )


target_sources(home_station PRIVATE "src/HomeScreen.h" "src/HomeScreen.cpp")
include_directories(${SDL2_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})

target_link_libraries(home_station core ${SDL2_LIBRARIES} ${Boost_LIBRARIES})


install(TARGETS home_station RUNTIME DESTINATION bin)
