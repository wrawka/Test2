cmake_minimum_required(VERSION 3.0.0)
project(ttest VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(ttest test_runner.cpp main.cpp "test_runner.h")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
