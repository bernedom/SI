cmake_minimum_required(VERSION 3.12)

project(SI-Compilation-Tests)

find_package(SI REQUIRED)

add_executable(SI-Compilation-Tests)
target_link_libraries(SI-Compilation-Tests SI::SI)

target_sources(
  SI-Compilation-Tests
  PRIVATE main.cc
          copy_ctor_test.cc
          copy_ctor_with_same_ratio_test.cc
          move_ctor_test.cc
          move_ctor_with_same_ratio_test.cc
          operator_equals_test.cc
          operator_less_than_test.cc
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
          operator_copy_assignment_same_ratio_test.cc
          operator_move_assignment_test.cc
          operator_move_assignment_same_ratio_test.cc)
