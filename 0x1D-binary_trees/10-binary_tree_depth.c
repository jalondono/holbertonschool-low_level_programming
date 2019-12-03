#include "binary_trees.h"
/**
 * binary_tree_depth - function that checks if a given node is a root
 * @tree: Where tree is a pointer to the root node of the tree to traverse
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
