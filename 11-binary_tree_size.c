#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size: function measures size of binary tree
 * @tree: pointer to root node of tree to measure size
 *
 * Return: tree size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;
	size_t tree_size;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	count_left = binary_tree_size(tree->left);
	count_right = binary_tree_size(tree->right);

	tree_size = (1 + (count_left + count_right);

	return (tree_size);
}
