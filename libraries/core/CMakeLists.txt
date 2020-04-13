
find_package(Boost REQUIRED COMPONENTS filesystem)
project(core VERSION 0.0.1)
add_library(core)

set(MY_INSTALL_RPATH
        "@loader_path"
        )
set_target_properties(core
        PROPERTIES
        INSTALL_RPATH "${MY_INSTALL_RPATH}"
        )

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

target_sources(core
                PRIVATE
                 src/RazHome/RazCore.cpp
                 src/RazHome/PluginLoader.cpp
            )


install(TARGETS core
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

target_link_libraries(core base_plugin ${Boost_LIBRARIES})