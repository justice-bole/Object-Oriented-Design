cmake_minimum_required(VERSION 3.23)
project(Bike)

set(CMAKE_CXX_STANDARD 20)

add_executable(Bike main.cpp Gear.h Wheel.h ICircle.h)
