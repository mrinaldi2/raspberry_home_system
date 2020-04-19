
find_package(Boost REQUIRED)

add_library(base_plugin "src/PluginBase.cpp")

include_directories(base_plugin ${Boost_INCLUDE_DIRS})

target_include_directories(base_plugin
        PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
        )

install(TARGETS base_plugin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)