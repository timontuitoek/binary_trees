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
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (1 + left);
	return (1 + right);
}
/**
 * binary_tree_balance - measures balance factor of binary tree
 * @tree: pointer to root node of tree to measure balance
 *
 * Return: balance factor of tree or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}

/**
 * binary_tree_is_leaf - checks if a node is_a_leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

