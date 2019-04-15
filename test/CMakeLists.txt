cmake_minimum_required(VERSION 3.8)

include(CTest)
enable_testing()

add_executable(SI_detail_tests
               src/Catch2Main.cc
               src/detail_tests/detail_tests.cc
               src/detail_tests/number_parser_tests.cc
               src/detail_tests/unit_t_operator_tests.cc
               src/detail_tests/unit_t_type_tests.cc
               src/detail_tests/unit_helper_functions_tests.cc)

target_include_directories(SI_detail_tests
                           PRIVATE ${PROJECT_SOURCE_DIR}/include
                                   ${CMAKE_CURRENT_LIST_DIR}/include)

add_executable(SI_base_unit_tests
               src/Catch2Main.cc
               src/base_unit_tests/mass_tests.cc
               src/base_unit_tests/time_tests.cc
               src/base_unit_tests/electric_current_tests.cc
               src/base_unit_tests/temperature_tests.cc
               src/base_unit_tests/substance_tests.cc
               src/base_unit_tests/luminosity_tests.cc
               src/base_unit_tests/length_tests.cc)

target_include_directories(SI_base_unit_tests
                           PRIVATE ${PROJECT_SOURCE_DIR}/include
                                   ${CMAKE_CURRENT_LIST_DIR}/include)

add_executable(SI_derived_unit_tests
               src/Catch2Main.cc
               src/derived_unit_tests/area_tests.cc
               src/derived_unit_tests/frequency_tests.cc
               src/derived_unit_tests/electric_charge_tests.cc
               src/derived_unit_tests/electric_potential_tests.cc
               src/derived_unit_tests/electric_capacity_tests.cc
               src/derived_unit_tests/electric_conductance_tests.cc
               src/derived_unit_tests/electric_resistance_tests.cc
               src/derived_unit_tests/inductance_tests.cc
               src/derived_unit_tests/velocity_tests.cc
               src/derived_unit_tests/acceleration_tests.cc
               src/derived_unit_tests/force_tests.cc
               src/derived_unit_tests/pressure_tests.cc
               src/derived_unit_tests/energy_tests.cc
               src/derived_unit_tests/power_tests.cc
               src/derived_unit_tests/magnetic_flux_tests.cc
               src/derived_unit_tests/magnetic_field_tests.cc
               src/derived_unit_tests/luminous_flux_tests.cc
               src/derived_unit_tests/illuminance_tests.cc
               src/derived_unit_tests/radioactivity_tests.cc
               src/derived_unit_tests/absorbed_dose_tests.cc
               src/derived_unit_tests/equivalent_dose_tests.cc
               src/derived_unit_tests/catalytic_activity_tests.cc)

target_include_directories(SI_derived_unit_tests
                           PRIVATE ${PROJECT_SOURCE_DIR}/include
                                   ${CMAKE_CURRENT_LIST_DIR}/include)

target_compile_features(SI_derived_unit_tests PRIVATE cxx_std_17)
set_target_properties(SI_derived_unit_tests
                      PROPERTIES CXX_STANDARD
                                 17
                                 CXX_STANDARD_REQUIRED
                                 YES)

target_compile_features(SI_detail_tests PRIVATE cxx_std_17)
set_target_properties(SI_detail_tests
                      PROPERTIES CXX_STANDARD
                                 17
                                 CXX_STANDARD_REQUIRED
                                 YES)

target_compile_features(SI_base_unit_tests PRIVATE cxx_std_17)
set_target_properties(SI_base_unit_tests
                      PROPERTIES CXX_STANDARD
                                 17
                                 CXX_STANDARD_REQUIRED
                                 YES)

# increase warning level for gcc and enabled c++17 for msvc
if(${CMAKE_CXX_COMPILER_ID} MATCHES "GNU"
   OR ${CMAKE_CXX_COMPILER_ID} MATCHES "[Cc]lang")
  # add `-DCATCH_CONFIG_RUNTIME_STATIC_REQUIRE to switch to runtime only checks
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic")
elseif(${CMAKE_CXX_COMPILER_ID} MATCHES "MSVC")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
endif()

add_test(NAME SI_detail_tests COMMAND SI_detail_tests)
add_test(NAME SI_base_unit_tests COMMAND SI_base_unit_tests)
add_test(NAME SI_derived_unit_tests COMMAND SI_derived_unit_tests)
