#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that deletes an entire binary tree
 * @tree: Where parent is a pointer to the root node of the tree to delete
 * Return: Always 0 (Success)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
}
