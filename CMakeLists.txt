cmake_minimum_required(VERSION 3.5)

project("SI")
enable_testing()

add_library( ${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME} INTERFACE 
  $<BUILD_INTERFACE:${${PROJECT_NAME}_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  )

  # for interface libraries one needs to define the compile features explicitely until cmake 3.8
target_compile_features(${PROJECT_NAME} INTERFACE cxx_auto_type cxx_user_literals cxx_constexpr cxx_defaulted_functions)

  # disabled as this is only working with cmake 3.8 and above
# set_target_properties(${PROJECT_NAME} PROPERTIES
#   CXX_STANDARD 14
#   CXX_STANDARD_REQUIRED YES
#  )

add_subdirectory(test)
  
install(TARGETS ${PROJECT_NAME} EXPORT SI_Targets
ARCHIVE DESTINATION lib
LIBRARY DESTINATION lib
RUNTIME DESTINATION bin
INCLUDES DESTINATION include
)

install(EXPORT SI_Targets
    FILE ${PROJECT_NAME}Targets.cmake
    NAMESPACE SI::
    DESTINATION lib/cmake/${PROJECT_NAME}
)


include(CMakePackageConfigHelpers)
write_basic_package_version_file("SIConfigVersion.cmake" 
  VERSION 1.0.0 
  COMPATIBILITY SameMajorVersion)

install(FILES "SIConfig.cmake" "SIConfigVersion.cmake"
    DESTINATION lib/cmake/${PROJECT_NAME})