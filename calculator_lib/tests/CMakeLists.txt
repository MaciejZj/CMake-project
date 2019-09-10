cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(vendor)

include(GoogleTest)
add_executable(calculator_test
	main.cpp
	calculator_test.cpp
	square_root_test.cpp
)
gtest_discover_tests(
	calculator_test	
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

