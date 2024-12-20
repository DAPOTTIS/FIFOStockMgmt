cmake_minimum_required(VERSION 3.26)
project(FIFOStockMgmt)

set(CMAKE_CXX_STANDARD 20)

add_executable(FIFOStockMgmt main.cpp
        Queue.cpp
        Queue.h
        Menu.cpp
        Menu.h
        PasswordManager.cpp
        PasswordManager.h
        FilaHandler.cpp
        FilaHandler.h)
