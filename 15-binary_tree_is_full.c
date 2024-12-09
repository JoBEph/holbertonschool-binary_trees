#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Entry point
 *@tree: tree
 * Return: Always 0 (Success)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)/*ptr arbre*/
		return (0);
	/*check pas enfant*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/*check si deux enfant des deux coté*/
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
