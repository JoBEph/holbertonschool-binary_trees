#include "binary_trees.h"

/**
 * binary_tree_height - checks height binary
 *@tree: struct pointer
 *Return: right + 1
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

	if (left > right)
	{
		return (left + 1);
	}
	return (right + 1);
}
/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: struct pointer
 * Return: Always 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t lefth = 0;
	size_t righth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	lefth = binary_tree_height(tree->left);
	righth = binary_tree_height(tree->right);

	if (lefth != righth)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left && tree->right)
	{
		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));
	}
	return (0);
}
