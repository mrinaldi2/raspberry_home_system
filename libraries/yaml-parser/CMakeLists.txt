cmake_minimum_required(VERSION 3.10)

project(YamlParser VERSION 0.0.1 LANGUAGES CXX)
add_library(YamlParser SHARED "src/RazYamlParser.cpp")


find_package(yaml-cpp REQUIRED)

target_compile_options(YamlParser PRIVATE -Werror)
target_compile_features(YamlParser PRIVATE cxx_std_11)

include_directories(YamlParser ${Boost_INCLUDE_DIRS} ${YAML_CPP_INCLUDE_DIR})

target_include_directories(YamlParser
        PUBLIC 
                $<INSTALL_INTERFACE:include>    
                $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        PRIVATE
                ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_link_libraries(YamlParser ${Boost_LIBRARIES} ${YAML_CPP_LIBRARIES})

include(GNUInstallDirs)
install(TARGETS YamlParser
    EXPORT yamlparser-export
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

install(EXPORT yamlparser-export
  FILE
    YamlParserTargets.cmake
  NAMESPACE
    RazHome::
  DESTINATION
    ${CMAKE_INSTALL_LIBDIR}/cmake/YamlParser
)



