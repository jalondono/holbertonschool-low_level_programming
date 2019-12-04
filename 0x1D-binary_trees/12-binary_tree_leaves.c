#include "binary_trees.h"
/**
 * binary_tree_leaves - Write a function that counts the leaves in a binary tree
 * @tree: Where tree is pointer to the root node of the tree to count the number of leaves
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left)
		count += binary_tree_leaves(tree->left);
	if (tree->right)
		count += binary_tree_leaves(tree->right);
	return (count);
}
