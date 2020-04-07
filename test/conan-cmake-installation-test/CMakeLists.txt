cmake_minimum_required(VERSION 3.12)

project("SI-Example-conan")

# Download automatically, you can also just copy the conan.cmake file
if(NOT EXISTS "${CMAKE_CURRENT_BINARY_DIR}/conan.cmake")
  message(
    STATUS
      "Downloading conan.cmake from https://github.com/bernedom/cmake-conan")
  file(
    DOWNLOAD
    "https://raw.githubusercontent.com/bernedom/cmake-conan/finding-conanbuildinfo/conan.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/conan.cmake")
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)
conan_cmake_run(CONANFILE conanfile.txt BASIC_SETUP CMAKE_TARGETS)

find_package(SI CONFIG REQUIRED)

add_executable(${PROJECT_NAME}
               ${CMAKE_CURRENT_SOURCE_DIR}/../src/installation-tests/main.cc)
target_link_libraries(${PROJECT_NAME} SI::SI)
