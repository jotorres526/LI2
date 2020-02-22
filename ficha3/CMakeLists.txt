cmake_minimum_required(VERSION 3.15)
project(LI2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-lm -Wall")


add_executable(ficha3
        desenhos.c
        desenhos.h
        principal.c)
