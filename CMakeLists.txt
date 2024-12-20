cmake_minimum_required(VERSION 3.29)
project(FIFOStockMgmt)

set(CMAKE_CXX_STANDARD 20)

add_executable(FIFOStockMgmt main.cpp
        src/Queue.cpp
        src/Queue.h
        Queue.cpp
        Queue.h)
