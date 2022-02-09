cmake_minimum_required(VERSION 3.12)

project(SI-conan-installation-test)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

find_package(SI CONFIG REQUIRED)

add_executable(SI-conan-installation-test
               ${CMAKE_CURRENT_SOURCE_DIR}/../src/installation-tests/main.cc)
target_link_libraries(SI-conan-installation-test SI::SI)
