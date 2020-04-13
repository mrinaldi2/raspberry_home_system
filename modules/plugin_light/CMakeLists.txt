
add_library(plugin_light)

find_package(Boost REQUIRED)
include_directories(plugin_light ${Boost_INCLUDE_DIRS})
target_include_directories(plugin_light
        PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
        PRIVATE
        src/LightPlugin.cpp
        )

target_sources(plugin_light
        PRIVATE
        src/LightPlugin.cpp
        )

target_link_libraries(plugin_light base_plugin)


install(TARGETS plugin_light
        LIBRARY DESTINATION plugins
        ARCHIVE DESTINATION plugins)