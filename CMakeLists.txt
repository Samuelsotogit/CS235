cmake_minimum_required(VERSION 3.22)
project(.)

set (CMAKE_CXX_STANDARD 17)

add_executable(calculator calculator.cpp)

add_executable(numbers numbers_divisible_by.cpp)

