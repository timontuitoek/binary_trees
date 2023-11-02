#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - measure depth of node in binary tree
 * @node: pointer to node to measure depth
 *
 * Return: depth of node, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	 size_t depth = 0;

	if (node == NULL)
	{
		return (depth);
	}

	while (node->parent != NULL)
	{
		node = node->parent;
		depth++;
	}

	return (depth);
}
