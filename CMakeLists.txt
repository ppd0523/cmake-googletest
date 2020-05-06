cmake_minimum_required(VERSION 3.0)

project(gtester)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()
add_subdirectory(app)
add_subdirectory(googletest)
add_subdirectory(test)