cmake_minimum_required(VERSION 3.0)
project(application)

add_executable(application main.cpp)

target_link_libraries(application
	calculator::calculator
)

