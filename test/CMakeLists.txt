cmake_minimum_required(VERSION 3.0)

project(tester)

include_directories(
    ${app_SOURCE_DIR}/include
    ${googletest_SOURCE_DIR}/googletest/include
    ${googletest_SOURCE_DIR}/googlemock/include
)

add_executable(tester
    test.cpp
    ${app_SOURCE_DIR}/src/function.cpp
)
target_link_libraries(tester gtest_main)

add_test(
    NAME tester
    COMMAND tester
)