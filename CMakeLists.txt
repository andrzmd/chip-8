cmake_minimum_required(VERSION 4.5)
project(chip-8 C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(chip8 src/main.c)

target_include_directories(chip8 PRIVATE include)
