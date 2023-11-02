#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - measure depth of node in binary tree
 * @tree: pointer to node to measure depth
 *
 * Return: depth of node, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t depth = 0;

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
