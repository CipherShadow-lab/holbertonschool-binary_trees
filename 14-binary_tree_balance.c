#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function measures height of tree 
 * @tree: pointer to root node of tree to measure height
 *
 * Return: tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (1 + left);
	else
		return (1 + right);
}

/**
 * binary_tree_balance - function measures balance factor of tree
 * @tree: pointer to root node of tree to measure balance factor
 *
 * Return: balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
