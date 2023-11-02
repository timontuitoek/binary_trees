#include "binary_trees.h"

/**
 * binary_tree_node - function creating a binary node
 * @parent: pointer to parent node of new node to be created
 * @value: value of p
 * Return: returns pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
