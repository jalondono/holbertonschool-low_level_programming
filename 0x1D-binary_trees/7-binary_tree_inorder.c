#include "binary_trees.h"

/**
 * binary_tree_inorder(- function that checks if a given node is a root
 * @tree: Where tree is a pointer to the root node of the tree to traverse
 * @func: func is a pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
