#include "binary_trees.h"

/**
 *binary_tree_leaves - function that counts the leaves in a binary tree
 *@tree: const pointer struct
 * Return: result
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	result = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (result);
}
