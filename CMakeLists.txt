cmake_minimum_required(VERSION 3.23)

project(
  "SI"
  VERSION 2.5.2
  DESCRIPTION
    "A header only c++ library that provides type safety and user defined literals for handling physical values defined in the International System of Units."
  HOMEPAGE_URL "https://github.com/bernedom/SI"
  LANGUAGES CXX)

include(GNUInstallDirs)
include(CTest)

find_package(Catch2)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  set(IS_TOPLEVEL_PROJECT TRUE)
else()
  set(IS_TOPLEVEL_PROJECT FALSE)
endif()

option(SI_INSTALL_LIBRARY
       "Enable installing of SI library into default locations"
       ${IS_TOPLEVEL_PROJECT})
option(SI_BUILD_TESTING "Build and run SI tests " ${IS_TOPLEVEL_PROJECT})
option(SI_BUILD_DOC "Generate SI documentation" ${IS_TOPLEVEL_PROJECT})

if(NOT Catch2_FOUND)
  message(WARNING "Catch2 not found, not building tests")
  set(SI_BUILD_TESTING OFF)
endif()

add_library(SI INTERFACE)
# add alias so the project can be uses with add_subdirectory
add_library(SI::SI ALIAS SI)

# Adding the install interface generator expression makes sure that the include
# files are installed to the proper location (provided by GNUInstallDirs)
target_include_directories(
  SI INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
               $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

target_compile_features(SI INTERFACE cxx_std_17)

if(BUILD_TESTING AND SI_BUILD_TESTING)
  include(Catch)
  add_subdirectory(test)
endif()

if(SI_BUILD_DOC)
  add_subdirectory(doc)
endif()

if(SI_INSTALL_LIBRARY)
  # locations are provided by GNUInstallDirs
  install(
    TARGETS SI
    EXPORT SI_Targets
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

  include(CMakePackageConfigHelpers)
  write_basic_package_version_file(
    "SIConfigVersion.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY SameMajorVersion)

  configure_package_config_file(
    "${PROJECT_SOURCE_DIR}/cmake/SIConfig.cmake.in"
    "${PROJECT_BINARY_DIR}/SIConfig.cmake"
    INSTALL_DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/SI/cmake)

  install(
    EXPORT SI_Targets
    FILE SITargets.cmake
    NAMESPACE SI::
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/SI/cmake)

  install(FILES "${PROJECT_BINARY_DIR}/SIConfig.cmake"
                "${PROJECT_BINARY_DIR}/SIConfigVersion.cmake"
          DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/SI/cmake)

  install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/SI
          DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
endif()

set(CPACK_RESOURCE_FILE_LICENSE "${PROJECT_SOURCE_DIR}/LICENSE")

include(CPack)
