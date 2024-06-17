cmake_minimum_required(VERSION 3.28)
project(Ass3StaticLib)

set(CMAKE_CXX_STANDARD 17)

add_library(Ass3StaticLib STATIC
        caesar.cpp
        main.cpp)