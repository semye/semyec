cmake_minimum_required(VERSION 3.19)
project(semyec C)

set(CMAKE_C_STANDARD 11)

add_executable(semyec
        main.c
        semye.c semye.h)
