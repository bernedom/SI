cmake_minimum_required(VERSION 3.5)

project("SI")
enable_testing()

add_library( ${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME} INTERFACE 
  $<BUILD_INTERFACE:${${PROJECT_NAME}_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  )

  # for interface libraries one needs to define the compile features explicitely
target_compile_features(${PROJECT_NAME} INTERFACE
                        cxx_std_17)

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