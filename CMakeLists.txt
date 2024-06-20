cmake_minimum_required(VERSION 3.10)
project(ProjectEuler)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(ProjectEuler
        src/main.cpp
        src/p001.cpp
)
