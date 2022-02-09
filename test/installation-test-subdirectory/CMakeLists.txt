cmake_minimum_required(VERSION 3.12)

project(SI-example)

add_subdirectory(../../ ${PROJECT_BINARY_DIR}/SI-build EXCLUDE_FROM_ALL)

add_executable(SI-example
               ${CMAKE_CURRENT_SOURCE_DIR}/../src/installation-tests/main.cc)
target_link_libraries(SI-example SI)
