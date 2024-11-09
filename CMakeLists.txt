cmake_minimum_required(VERSION 3.15)

project("ASCII Plot")

set (CMAKE_CXX_STANDARD 14)

add_executable(ascii_plot ascii_plot.cpp core.cpp symbols.cpp)
