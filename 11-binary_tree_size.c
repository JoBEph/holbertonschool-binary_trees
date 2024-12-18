#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Entry point
 *@tree: tree
 * Return: Always 0 (Success)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)/*check si noeud*/
	{
		return (0);
	}
	/*return sous arbre L et R, total de noeud*/
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
