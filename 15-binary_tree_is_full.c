#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - function checks if binary tree is full
 * @tree: pointer to root node of tree to check
 *
 * Return: full tree
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = (int)binary_tree_balance(tree->left);
	right_height = (int)binary_tree_balance(tree->right);

	return (height_left - height_right);
}
