CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

include(CTest)
#consider adding fakeit as mocking framework
add_executable(SI_Tests src/Catch2Main.cc src/length_tests_integral_type.cc)
target_include_directories(SI_Tests PRIVATE ${PROJECT_SOURCE_DIR}/include ${CMAKE_CURRENT_LIST_DIR}/include)


set_target_properties(SI_Tests PROPERTIES
     CXX_STANDARD 14
     CXX_STANDARD_REQUIRED YES
    )

add_test(NAME SI_Tests COMMAND SI_Tests)