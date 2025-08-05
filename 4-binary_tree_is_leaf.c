#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function inserts a leaf node to another node
 * @node: pointer of node to check
 *
 * Return: 1 if node is leaf otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
