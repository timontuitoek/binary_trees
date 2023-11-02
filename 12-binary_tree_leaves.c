#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_leaves - counts number of leaves in binary tree
 * @tree: pointer to root node of tree to count leaves
 *
 * Return: number of leaf nodes in tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/*if current node is a leaf, return 1*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
