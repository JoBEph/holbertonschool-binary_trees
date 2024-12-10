#include "binary_trees.h"

/**
 *binary_tree_depth - unction that measures the depth of a node
 *@tree: const pointer struct
 * Return: binary tree depth + 1
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent == NULL)
	{
		return (0);
	}
	x = binary_tree_depth(tree->parent) + 1;
	return (x);
}
