cmake_minimum_required(VERSION 3.23)

project(SI-example)

find_package(SI REQUIRED)

add_executable(SI-example
               ${CMAKE_CURRENT_SOURCE_DIR}/../src/installation-tests/main.cc)
target_link_libraries(SI-example SI::SI)
