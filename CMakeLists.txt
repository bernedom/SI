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
                        cxx_auto_type
                        cxx_user_literals
                        cxx_constexpr
                        cxx_defaulted_functions
                        cxx_deleted_functions
                        cxx_decltype
                        cxx_default_function_template_args
                        cxx_inheriting_constructors
                        cxx_nullptr
                        cxx_return_type_deduction
                        cxx_right_angle_brackets
                        cxx_static_assert
                        cxx_variadic_templates
                        cxx_template_template_parameters)

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