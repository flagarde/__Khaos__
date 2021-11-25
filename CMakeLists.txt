cmake_minimum_required(VERSION 3.15...3.22)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH}" "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(GetCMakeMM)
cmmm(VERSION "2.2" REPOSITORY "flagarde/CMakeMM" PROVIDER "gitlab")

cmmm_modules_list(REPOSITORY "flagarde/CMakeCM" PROVIDER "gitlab")

project(Khaos VERSION "0.1.0.0" DESCRIPTION "Cross-platform library" HOMEPAGE_URL "https://github.com/flagarde/Khaos" LANGUAGES C CXX)

include(PreventInSourceBuilds)
prevent_in_source_builds()

include(DefaultInstallPrefix)
default_install_prefix("${CMAKE_SOURCE_DIR}/bin")

include(DefaultConfigurations)
set_default_configuration(CONFIGS Debug)

option(BUILD_DOCS "Build the docs" ON)
option(BUILD_TESTS "Build the tests" ON)
option(BUILD_EXAMPLES "Build the examples" ON)
option(ENABLE_COVERAGE "Enable coverage build." OFF)

if(ENABLE_COVERAGE)
  include(Coverage)
endif()

if(BUILD_DOCS)
  add_subdirectory(docs)
endif()

add_subdirectory(src)

if(BUILD_TESTS)
  include(Doctest)
  add_subdirectory(tests)
endif()

if(BUILD_EXAMPLES)
  add_subdirectory(examples)
endif()
