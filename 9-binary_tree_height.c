#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_height - Entry point
 *@tree: tree
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (!tree->left && !tree->right)
		return (0);
	if (left > right)
	{
		return (left + 1);
	}
	return (right + 1);
}
