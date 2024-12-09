#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - Entry point
 *@tree: tree
 * Return: Always 0 (Success)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	/*check si enfant et incrémente de un*/
	if (tree->left != NULL || tree->right != NULL)
		count = 1;
	/*return noeuds avec un enfant ou plus*/
	return (count + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}
