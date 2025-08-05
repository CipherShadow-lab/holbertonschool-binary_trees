#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - function measures depth of node in binary tree
 * @tree: pointer to node to measure depth
 *
 * Return: node depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	node_depth = binary_tree_depth(tree->parent);

	return (1 + node_depth);
}
