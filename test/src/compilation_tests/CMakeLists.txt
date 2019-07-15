cmake_minimum_required(VERSION 3.12)

project("SI-Compilation-Tests")

find_package(SI CONFIG REQUIRED)

add_executable(${PROJECT_NAME} main.cc)
target_link_libraries(${PROJECT_NAME} SI::SI)

target_sources(${PROJECT_NAME} PRIVATE operator_equals.cc)
