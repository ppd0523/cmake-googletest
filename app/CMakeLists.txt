cmake_minimum_required(VERSION 3.0)

project(app)
set(CMAKE_CXX_STANDARD 14)

include_directories(
    include
)

add_executable(app src/main.cpp src/function.cpp)