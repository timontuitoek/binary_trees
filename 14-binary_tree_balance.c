#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - measure geight of binary tree
 * @tree: pointer to root node of tree
 *
 * Return: height of tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height);
}
/**
 * binary_tree_balance - measures balance factor of binary tree
 * @tree: pointer to root node of tree to measure balance
 *
 * Return: balance factor of tree or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	int left_height = (int)ninary_tree_height(tree->left);
	int right_height = (int)binary_tree_height(tree->right);

	return (left_height - right_height);
}
