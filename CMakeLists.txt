cmake_minimum_required(VERSION 3.6)
project(push_swap_c)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.c push_swap.h usage.c)

add_executable(push_swap_c ${SOURCE_FILES})

target_link_libraries(push_swap_c ${CMAKE_SOURCE_DIR}/ft_printf/libftprintf.a)