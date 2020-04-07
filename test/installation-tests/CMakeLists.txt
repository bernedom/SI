cmake_minimum_required(VERSION 3.12)

project("SI-Example")

find_package(SI CONFIG REQUIRED)

add_executable(${PROJECT_NAME}
               ${CMAKE_CURRENT_SOURCE_DIR}/../src/installation-tests/main.cc)
target_link_libraries(${PROJECT_NAME} SI::SI)
