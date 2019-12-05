#include "binary_trees.h"
/**
 * binary_tree_sibling1 - Write a function that counts the leaves in a binary
 * @node: Where node is a pointer to the node to find the sibling
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */
binary_tree_t *binary_tree_sibling1(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->right != node)
		return (node->parent->right);
	else if (node->parent->left != node)
		return (node->parent->left);
	else
		return (NULL);
}
/**
 * binary_tree_uncle - Write a function that counts the leaves in a binary
 * @node: Where node is a pointer to the node to find the sibling
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling1(node->parent));
}
