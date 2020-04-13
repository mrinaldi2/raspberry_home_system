
find_package(Boost REQUIRED)
project(core VERSION 0.0.1)
add_library(core)

include_directories(core ${Boost_INCLUDE_DIRS})

target_include_directories(core
        PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
        PRIVATE
        src/RazHome/RazCore.cpp
        include/RazCore.h
        )

target_sources(core
                PRIVATE
                 src/RazHome/RazCore.cpp
                 include/RazCore.h
            )


install(TARGETS core
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)