cmake_minimum_required(VERSION 3.15...3.22)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH}" "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(GetCMakeMM)
cmmm(VERSION "2.1" REPOSITORY "flagarde/CMakeMM" PROVIDER "gitlab" VERBOSITY VERBOSE)

cmmm_modules_list(REPOSITORY "flagarde/CMakeCM" PROVIDER "gitlab")

project(Khaos VERSION "0.0.1.0" DESCRIPTION "Cross-platform library" HOMEPAGE_URL "https://github.com/flagarde/Khaos" LANGUAGES C CXX)

if(BUILD_DOCS OR BUILD_ONLY_DOCS)
  add_subdirectory(docs)
  if(BUILD_ONLY_DOCS)
    return()
  endif()
endif()
