cmake_minimum_required(VERSION 3.12)

project("SI-Compilation-Tests")

find_package(SI CONFIG REQUIRED)

add_executable(${PROJECT_NAME})
target_link_libraries(${PROJECT_NAME} SI::SI)

target_sources(${PROJECT_NAME}
               PRIVATE
               main.cc
               operator_equals_test.cc
               operator_lessthan_test.cc
               operator_greaterthan_test.cc
               operator_multiply_test.cc
               operator_divide_test.cc
               operator_add_test.cc
               operator_add_assignment_test.cc
               operator_add_assignment_same_ratio_test.cc
               operator_subtract_test.cc
               operator_subtract_assignment_test.cc
               operator_subtract_assignment_same_ratio_test.cc
               operator_divide_from_integral_test.cc
               operator_divide_from_floating_point_test.cc
               parsing_overflow_test.cc
               parsing_overflow_test_pass_compilation.cc
               operator_copy_assignment_test.cc
               operator_copy_assignment_same_ratio_test.cc)
