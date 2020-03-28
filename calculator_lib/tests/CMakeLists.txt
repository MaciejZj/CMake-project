cmake_minimum_required(VERSION 3.0)

add_subdirectory(vendor)
include(GoogleTest)

add_executable(calculator_test
    src/main.cpp
    # Tests sources
    src/calculator_test.cpp
    src/square_root_test.cpp
)
target_link_libraries(calculator_test
    gtest_main
    gmock_main
    calculator::calculator
)
target_include_directories(calculator_test
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/mocks
)
# Google Test requires C++ 11 to compile
set_target_properties(
    gtest gtest_main gmock gmock_main calculator_test
    PROPERTIES
    CXX_STANDARD 11
)

gtest_discover_tests(
    calculator_test
)
