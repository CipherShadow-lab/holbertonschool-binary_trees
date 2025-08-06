#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - function finds a sibling of a ndoe
 * @node: pointer of node to check for sibling
 *
 * Return: pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return NULL;

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
