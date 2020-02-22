cmake_minimum_required(VERSION 3.15)
project(LI2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-lm -Wall")

include_directories(.)
include_directories(ficha2)

add_executable(LI2
        ficha2/tarefa1/indicadores.c
        ficha2/tarefa1/indicadores.h
        ficha2/tarefa1/principal.c
        LICENSE
        README.md)
