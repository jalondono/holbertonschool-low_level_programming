#include "binary_trees.h"
/**
 * binary_tree_height_Aux1- function that checks if a given node is a root
 * @tree: Where tree is a pointer to the root node of the tree to traverse
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */
size_t binary_tree_height_Aux1(const binary_tree_t *tree)
{
	int leftHeight = 0;
	int rightHeight = 0;

	if (!tree)
		return (0);
	if (tree->left)
		leftHeight = binary_tree_height_Aux1(tree->left);
	if (tree->right)
		rightHeight = binary_tree_height_Aux1(tree->right);
	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	else
		return (rightHeight + 1);
}
/**
 * binary_tree_height1- function that checks if a given node is a root
 * @tree: Where tree is a pointer to the root node of the tree to traverse
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */
size_t binary_tree_height1(const binary_tree_t *tree)
{
	unsigned int total = 0;

	if (!tree)
		return (0);
	total = binary_tree_height_Aux1(tree);
	return (total);
}
/**
 * binary_tree_balance1- Write a function that counts the leaves in a binary
 * @tree: Where tree is a pointer to the root node of the tree to count the
 * number of nodes
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */
int binary_tree_balance1(const binary_tree_t *tree)
{
	int leftHeight = 0;
	int rightHeight = 0;

	if (!tree)
		return (0);
	leftHeight = binary_tree_height1(tree->left);
	rightHeight = binary_tree_height1(tree->right);
	return (leftHeight - rightHeight);
}

/**
 * binary_tree_is_perfect1 - Write a function that counts the leaves in
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
 * binary_tree_is_perfect - Write a function that counts the leaves in a binary
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
	balanced = binary_tree_balance1(tree);
	lfull = binary_tree_is_perfect1(tree->left);
	rfull = binary_tree_is_perfect1(tree->right);
	if (!tree->left && !tree->right)
		return (1);
	if (lfull == 1 && rfull == 1 && balanced == 0)
		return (1);
	else
		return (0);
}
