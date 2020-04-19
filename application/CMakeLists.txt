set(CMAKE_CXX_STANDARD 11)
find_package(Boost REQUIRED COMPONENTS filesystem)
find_package(SDL2 REQUIRED)

project(home_station VERSION 0.0.1)

add_executable(home_station "src/HomeScreen.h" "src/HomeScreen.cpp")

include_directories(${SDL2_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS})
link_directories(${Boost_LIBRARY_DIRS})

target_link_libraries(home_station core ${SDL2_LIBRARIES} ${Boost_LIBRARIES})


install(TARGETS home_station RUNTIME DESTINATION bin)