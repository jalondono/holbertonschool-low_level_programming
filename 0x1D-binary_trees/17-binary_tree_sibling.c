#include "binary_trees.h"
/**
 * binary_tree_sibling - Write a function that counts the leaves in a binary
 * @node: Where node is a pointer to the node to find the sibling
 * The value in the node must be passed as a parameter to this function.
 * Return: Always 1
 * (Success)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
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
