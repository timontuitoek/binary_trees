#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right  - function to insert
 * node as right-child of another node
 * binary_tree_t - function to print the binary_tree
 * @parent: pointer to node to insert left-child
 * @value: value to store in the node
 *
 * Return: returns a pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	/*if parent has a right-child already*/
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
	}

	parent->right = new_node;

	return (new_node);
}
