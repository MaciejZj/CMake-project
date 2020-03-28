cmake_minimum_required(VERSION 3.0)
project(application)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(application main.cpp)

target_link_libraries(application
	calculator::calculator
	spdlog
)
