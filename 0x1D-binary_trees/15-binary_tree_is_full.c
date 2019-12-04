#include "binary_trees.h"

/**
 * binary_tree_is_fullsearch - Write a function that counts the leaves in
 * @tree: Where tree is a pointer to the root node of the tree to count the
 * number of nodes
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */

int binary_tree_is_fullsearch(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if ((tree->left && tree->right))
	{
		binary_tree_is_fullsearch(tree->left);
		binary_tree_is_fullsearch(tree->right);
		return (1);
	}
	else
		return (0);
}

/**
 * binary_tree_is_full - Write a function that counts the leaves in a binary
 * @tree: Where tree is a pointer to the root node of the tree to count the
 * number of nodes
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lfull = 0;
	int rfull = 0;

	if (!tree)
		return (0);
	lfull = binary_tree_is_fullsearch(tree->left);
	rfull = binary_tree_is_fullsearch(tree->right);

	if (lfull == 1 && rfull == 1)
		return (1);
	else
		return (0);
}
