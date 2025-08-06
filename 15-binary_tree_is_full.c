#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - function checks if binary tree is full
 * @tree: pointer to root node of tree to check
 *
 * Return: 1 if tree is full, otherwise 0 
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0;
	int right_full = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);

		if (left_full == 1 && right_full == 1)
			return (1);
	}
	return (0);
}
