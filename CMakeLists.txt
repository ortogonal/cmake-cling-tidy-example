cmake_minimum_required(VERSION 3.8)

set(CMAKE_CXX_CLANG_TIDY
    clang-tidy;
    -header-filter=.;
    -checks=*;)

project(test-cmake)

set (SRC_LIST main.cpp
              test.h test.cpp)

add_executable(${PROJECT_NAME} ${SRC_LIST})
