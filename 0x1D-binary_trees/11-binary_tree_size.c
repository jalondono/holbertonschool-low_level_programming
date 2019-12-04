#include "binary_trees.h"
/**
 * binary_tree_size - fWrite a function that measures the size of a binary tree
 * @tree: Where tree is a pointer to the root node of the tree to measure
 * the size
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
