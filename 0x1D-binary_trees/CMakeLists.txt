cmake_minimum_required(VERSION 3.14)
project(binary_tree C)

set(CMAKE_C_FLAGS "-g -ggdb -Wall -Werror -Wextra -pedantic")

add_executable(main
        0-binary_tree_node.c binary_tree_print.c
        1-binary_tree_insert_left.c
        2-binary_tree_insert_right.c
        3-binary_tree_delete.c
        4-binary_tree_is_leaf.c
        5-binary_tree_is_root.c
        6-binary_tree_preorder.c
        7-binary_tree_inorder.c
        8-binary_tree_postorder.c
        9-binary_tree_height.c
        10-binary_tree_depth.c
        11-binary_tree_size.c
        12-binary_tree_leaves.c
        13-binary_tree_nodes.c
        14-main.c
        14-binary_tree_balance.c)
