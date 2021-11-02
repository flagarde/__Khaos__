add_executable(CStandards.test CStandards.test.cpp)
set_target_properties(CStandards.test PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_INSTALL_PREFIX}/tests")
target_link_libraries(CStandards.test PRIVATE Khaos::Khaos doctest_with_main)
doctest_discover_tests(CStandards.test COMMAND CStandards.test ADD_LABELS "Test CStandards")
