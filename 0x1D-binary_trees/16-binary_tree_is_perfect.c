#include "binary_trees.h"

/**
 * binary_tree_is_fullsearch - Write a function that counts the leaves in
 * @tree: Where tree is a pointer to the root node of the tree to count the
 * number of nodes
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */

int binary_tree_is_perfect1(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((tree->left && tree->right) || (!tree->left && !tree->right))
	{
		binary_tree_is_perfect1(tree->left);
		binary_tree_is_perfect1(tree->right);
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
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lfull = 0;
	int rfull = 0;
	int balanced = 0;

	if (!tree)
		return (0);
	balanced = binary_tree_balance(tree);
	lfull = binary_tree_is_perfect1(tree->left);
	rfull = binary_tree_is_perfect1(tree->right);


	if (!tree->left && !tree->right)
		return (1);

	if (lfull == 1 && rfull == 1 && balanced == 0)
		return (1);
	else
		return (0);
}
