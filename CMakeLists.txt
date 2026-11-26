cmake_minimum_required(VERSION 4.5)
project(chip-8 C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(SDL3 REQUIRED CONFIG)
add_executable(chip-8)
target_sources(chip-8
    PRIVATE
        src/chip8.c
        src/main.c
)
target_link_libraries(chip-8
    PRIVATE
        SDL3::SDL3
)
target_include_directories(chip-8
    PRIVATE
        include
)
