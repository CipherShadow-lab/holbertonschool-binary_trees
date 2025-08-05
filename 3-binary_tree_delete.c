#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete: function deletes entire binary tree
 * @parent: pointer to root node of tree to delete 
 *
 * Return: void
 */

void *binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		exit(98);

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
