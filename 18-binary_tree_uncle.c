#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - function finds the uncle of a ndoe
 * @node: pointer of node to check for uncle
 *
 * Return: pointer to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
