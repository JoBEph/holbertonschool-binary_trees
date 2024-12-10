#include "binary_trees.h"

/**
 *binary_tree_height - function that measures height
 *@tree: pointer const struct
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
 * binary_tree_balance - function that measures the balance
 * @tree: pointer const struct
 * Return: lefth - righth
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lefth = 0;
	size_t righth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	lefth = binary_tree_height(tree->left);
	righth = binary_tree_height(tree->right);

	return (lefth - righth);
}
