cmake_minimum_required(VERSION 3.26)
project(cpp_lab_7_8)

set(CMAKE_CXX_STANDARD 11)

add_executable(cpp_lab_7_8 main.cpp
        Vehicle.h
        Vehicle.cpp
        Car.h
        Car.cpp
        Customer.h
        Customer.cpp)
