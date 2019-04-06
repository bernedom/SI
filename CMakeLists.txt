cmake_minimum_required(VERSION 3.5)

project("SI")
enable_testing()

add_library( ${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME} INTERFACE 
  $<BUILD_INTERFACE:${${PROJECT_NAME}_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  )

target_compile_features(${PROJECT_NAME} INTERFACE
                        cxx_std_17)

add_subdirectory(test)
  
install(TARGETS ${PROJECT_NAME} EXPORT SI_Targets
ARCHIVE DESTINATION lib
LIBRARY DESTINATION lib
RUNTIME DESTINATION bin
INCLUDES DESTINATION include
)

include(CMakePackageConfigHelpers)
write_basic_package_version_file("SIConfigVersion.cmake" 
  VERSION 1.0.0 
  COMPATIBILITY SameMajorVersion)

configure_package_config_file(
    "${PROJECT_SOURCE_DIR}/SIConfig.cmake.in"
    "${PROJECT_BINARY_DIR}/SIConfig.cmake"
    INSTALL_DESTINATION lib/cmake/${PROJECT_NAME}
)

install(EXPORT SI_Targets
    FILE ${PROJECT_NAME}Targets.cmake
    NAMESPACE SI::
    DESTINATION lib/cmake/${PROJECT_NAME}
)

install(FILES "${PROJECT_BINARY_DIR}/SIConfig.cmake" "${PROJECT_BINARY_DIR}/SIConfigVersion.cmake"
    DESTINATION lib/cmake/${PROJECT_NAME})
  
install(DIRECTORY ${PROJECT_SOURCE_DIR}/include DESTINATION include)    