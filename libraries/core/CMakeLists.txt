

project(core VERSION 0.0.1)
add_library(core 
                src/RazHome/RazCore.cpp
                src/RazHome/PluginLoader.cpp)

include_directories(core ${Boost_INCLUDE_DIRS})

target_include_directories(core
        PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
        PRIVATE
        src/RazHome/RazCore.cpp
        src/RazHome/PluginLoader.cpp
        )

install(TARGETS core
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

target_link_libraries(core base_plugin YamlParser ${Boost_LIBRARIES})
