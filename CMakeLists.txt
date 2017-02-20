cmake_minimum_required(VERSION 3.6)

project(push_swap_c)

set(CMAKE_C_FLAGS "-std=c99")

set(SOURCE_FILES main.c push_swap.h libft.h ft_printf.h usage.c)

add_executable(push_swap_c ${SOURCE_FILES} push_swap.h)

target_link_libraries(push_swap_c ${CMAKE_SOURCE_DIR}/ft_printf/libft/libft.a)

target_link_libraries(push_swap_c ${CMAKE_SOURCE_DIR}/ft_printf/libftprintf.a)