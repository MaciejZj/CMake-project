cmake_minimum_required(VERSION 3.0)
project(calculator LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(calculator src/calculator.cpp src/square_root.cpp)
add_library(calculator::calculator ALIAS calculator)

target_include_directories(calculator
	PUBLIC ${PROJECT_SOURCE_DIR}/include
)

target_compile_features(calculator
	PUBLIC
		cxx_uniform_initialization
)

option(ENABLE_COVERAGE "Enable coverage reporting" OFF)
if(ENABLE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
	target_compile_options(calculator PUBLIC --coverage -g -O0)
	if(CMAKE_VERSION VERSION_GREATER_EQUAL 3.13)
		target_link_options(calculator PUBLIC --coverage)
	else()
		target_link_libraries(calculator PUBLIC --coverage)
	endif()
else()
    message(WARNING "Coverage not supported for this compiler")
endif()

include(CTest)
enable_testing()
add_subdirectory(tests)

