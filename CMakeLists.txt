cmake_minimum_required(VERSION 4.3)
project(algorithms C)

set(CMAKE_C_STANDARD 23)

add_executable(algorithms main.c
        algorithms.h
        algorithms.c)
