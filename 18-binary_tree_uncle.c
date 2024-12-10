#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer struct
 * Return: null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *x, *y;

	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent == NULL)
	{
		return (NULL);
	}
	x = node->parent;
	y = node->parent->parent;

	if (y->left == x)
	{
		return (y->right);
	}
	if (y->right == x)
	{
		return (y->left);
	}
	return (NULL);
}

