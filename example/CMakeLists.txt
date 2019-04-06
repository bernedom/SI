cmake_minimum_required(VERSION 3.12)

project("SI-Example")

find_package(SI CONFIG REQUIRED)

add_executable(${PROJECT_NAME} src/main.cc)
#target_link_libraries(${PROJECT_NAME} SI)
target_include_directories(${PROJECT_NAME} PRIVATE /home/doeme/SI-Install/include)

target_compile_features(${PROJECT_NAME} PRIVATE
                        cxx_std_17)


# call cmake -DCMAKE_INSTALL_PREFIX:PATH=~/SI-Install ..