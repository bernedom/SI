CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

include(CTest)
#consider adding fakeit as mocking framework
add_executable(SI_Tests 
               src/Catch2Main.cc
               src/detail_tests.cc
               src/length_tests_integral_type.cc
               src/length_tests_floating_point.cc
               src/area_tests.cc
               src/unit_t_operator_tests.cc
               src/unit_t_type_tests.cc
               src/time_tests.cc
               src/unit_conversion_tests.cc
               src/electric_current_tests.cc
               src/mass_tests.cc
               src/temperature_tests.cc
               src/substance_tests.cc
               src/luminosity_tests.cc
               src/velocity_tests.cc) 
target_include_directories(SI_Tests PRIVATE ${PROJECT_SOURCE_DIR}/include ${CMAKE_CURRENT_LIST_DIR}/include)

if(${CMAKE_VERSION} VERSION_LESS "3.8.0")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
   
else()
target_compile_features(SI_Tests PRIVATE cxx_std_17)
set_target_properties(SI_Tests PROPERTIES
     CXX_STANDARD 17
     CXX_STANDARD_REQUIRED YES
    )
endif()

# increase warning level
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic")

add_test(NAME SI_Tests COMMAND SI_Tests)