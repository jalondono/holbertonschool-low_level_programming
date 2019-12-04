#include "binary_trees.h"
/**
 * binary_tree_height_Aux- function that checks if a given node is a root
 * @tree: Where tree is a pointer to the root node of the tree to traverse
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */
size_t binary_tree_height_Aux(const binary_tree_t *tree)
{
	int leftHeight = 0;
	int rightHeight = 0;

	if (!tree)
		return (0);
	if (tree->left)
		leftHeight = binary_tree_height_Aux(tree->left);
	if (tree->right)
		rightHeight = binary_tree_height_Aux(tree->right);
	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	else
		return (rightHeight + 1);
}
/**
 * binary_tree_height- function that checks if a given node is a root
 * @tree: Where tree is a pointer to the root node of the tree to traverse
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	unsigned int total = 0;

	total = binary_tree_height_Aux(tree) - 1;
	return (total);
}
