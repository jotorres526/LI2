cmake_minimum_required(VERSION 3.15)
project(LI2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(ficha1)
include_directories(ficha2)

add_executable(LI2
        ficha1/polynomial.c
        ficha1/triangles.c
        ficha2/indicadores.c
        ficha2/indicadores.h
        ficha2/principal.c
        LICENSE
        README.md)
