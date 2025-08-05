#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function measures height of binary tree
 * @tree: pointer to root node of tree to measure height
 *
 * Return: height of tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	size_t max_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		max_height = left_height;
	}
	else
	{
		max_height = right_height;
	}
	return (1 + max_height);
}
