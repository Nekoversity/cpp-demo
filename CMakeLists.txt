cmake_minimum_required(VERSION 3.11)

project(cpp-demo)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (LINUX)
    list(APPEND COMMON_DEPS m)
endif()

add_subdirectory(libs)
add_subdirectory(projects)
