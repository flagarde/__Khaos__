add_library(Khaos INTERFACE)
target_include_directories(Khaos INTERFACE "$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>"  "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>")
add_library(Khaos::Khaos ALIAS Khaos)
