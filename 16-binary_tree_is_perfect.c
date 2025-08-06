#include <stdio.h>
#include "binary_trees.h"

/**
 * tree_height - function checks height of binary tree
 * @tree: pointer to root node of tree to check
 *
 * Return: height of binary tree
 */

size_t tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	if (left > right)
		return (1 + left);
	else
		return (1 + right);
}

/**
 * binary_tree_is_perfect - function checks if binary tree is perfect
 * @tree: pointer to root node of tree to check
 *
 * Return: 1 if tree is perfect otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	int left_perfect = 0;
	int right_perfect = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	left_perfect = binary_tree_is_perfect(tree->left);
	right_perfect = binary_tree_is_perfect(tree->right);

	if ((left_perfect && right_perfect) && (left_height == right_height))
		return (1);

	return (0);
}
