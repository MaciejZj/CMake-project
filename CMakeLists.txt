cmake_minimum_required(VERSION 3.0)
project(Cmake-project)

add_subdirectory(app)
add_subdirectory(calculator_lib)
enable_testing()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

