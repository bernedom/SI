cmake_minimum_required(VERSION 3.12)

project("SI-Example")

find_package(SI CONFIG REQUIRED)

add_executable(${PROJECT_NAME} src/main.cc)
target_link_libraries(${PROJECT_NAME} SI::SI)
