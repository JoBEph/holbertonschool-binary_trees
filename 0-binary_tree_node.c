#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = (binary_tree_t*)malloc(sizeof(binary_tree_t));
	if (newNode != NULL)
	{
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	}
	return (newNode);
}
