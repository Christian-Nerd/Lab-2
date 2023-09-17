cmake_minimum_required(VERSION 3.26)
project(CS121_Lab2)

set(CMAKE_CXX_STANDARD 17)

add_executable(CS121_Lab2 lab2_driver.cpp
        lab2_driver.cpp)
find_package(gmp)
include_directories(/usr/local/Cellar/gmp/)