cmake_minimum_required(VERSION 3.14)
project(0x1A-hash_tables C)
set(CMAKE_C_FLAGS "-g -ggdb -Wall -Werror -Wextra -pedantic ")
add_executable(main
        print_list.c
        print_array.c
        0-bubble_sort.c
        1-insertion_sort_list.c
        1-main.c)
