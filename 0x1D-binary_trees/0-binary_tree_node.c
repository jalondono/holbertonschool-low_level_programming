#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (parent == NULL)
	{
		node->parent = (NULL);
		return (node);
	}
	node->parent = parent;
	return (node);
}
