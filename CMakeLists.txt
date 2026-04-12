cmake_minimum_required(VERSION 3.10)
project(AICS_Spec_Repository C)

set(CMAKE_C_STANDARD 99)

include_directories(include)

add_library(aics_stub STATIC
    src/aics_stub.c
)
