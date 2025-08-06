#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - function measures balance factor of tree
 * @tree: pointer to root node of tree to measure balance factor
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		left_height = 1 + binary_tree_balance(tree->left);
	}

	if (tree->right != NULL)
	{
		right_height = 1 + binary_tree_balance(tree->right);
	}

	return (left_height - right_height);
}
