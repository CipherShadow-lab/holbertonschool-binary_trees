#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left: function inserts a node as left child of another node
 * @parent: pointer to insert the left child in 
 * @value: value to store in new node
 *
 * Return: pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *childnode = NULL;

	if (parent == NULL)
		exit(98);

	childnode = malloc(sizeof(binary_tree_t));

	if (childnode == NULL)
		return (NULL);

	childnode->n = value;

	if (parent->left != NULL)
	{
		childnode->left = parent->left;
		parent->left->parent = childnode;
	}
	else
	{
		childnode->left = NULL;
	}

	parent->left = childnode;
	childnode->parent = parent;
	childnode->right = NULL;

	return (childnode);
}
