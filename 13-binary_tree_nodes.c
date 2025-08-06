#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - function counts nodes with at least 1 child
 * @tree: pointer to root node of tree to count nodes
 *
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_left = 0;
	size_t nodes_right = 0;

	if (tree == NULL)
		return (0);

	nodes_left = binary_tree_nodes(tree->left);
	nodes_right = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + nodes_left + nodes_right);
	else
		return (nodes_left + nodes_right);
}
