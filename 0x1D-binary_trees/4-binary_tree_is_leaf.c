#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that deletes an entire binary tree
 * @tree: Where parent is a pointer to the root node of the tree to delete
 * Return: Always 0 (Success)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if ((!node->right) && (!node->left) && (node->parent))
		return (1);
	else
		return (0);
}
