#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_leaf - checks if the node is leaf
 * @node: pointer to node check
 *
 * Return: 1 if node is a leaf else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}
