CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

include(CTest)
#consider adding fakeit as mocking framework
add_executable(SI_Tests 
               src/Catch2Main.cc
               src/detail_tests.cc
               src/length_tests_integral_type.cc
               src/length_tests_floating_point.cc
               src/area_tests.cc
               src/unit_t_tests.cc
               src/time_tests.cc) 
target_include_directories(SI_Tests PRIVATE ${PROJECT_SOURCE_DIR}/include ${CMAKE_CURRENT_LIST_DIR}/include)

if(${CMAKE_VERSION} VERSION_LESS "3.8.0")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
    if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DCATCH_CONFIG_NO_CPP17_UNCAUGHT_EXCEPTIONS=ON")
    endif()
else()
set_target_properties(SI_Tests PROPERTIES
     CXX_STANDARD 17
     CXX_STANDARD_REQUIRED YES
    )
endif()


add_test(NAME SI_Tests COMMAND SI_Tests)