cmake_minimum_required(VERSION 3.6)

project(push_swap_c)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.c push_swap.h usage.c swap.c sort_solution.c push.c rorate.c rev_rotate.c sub.c sort.c sort_rev.c sort_norm.c sort_type.c optim.c sort_four.c)

add_executable(push_swap ${SOURCE_FILES})

target_link_libraries(push_swap ${CMAKE_SOURCE_DIR}/ft_printf/libftprintf.a)