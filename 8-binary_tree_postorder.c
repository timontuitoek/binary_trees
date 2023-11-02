#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_postorder - traverse binary tree using post-order traverse
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to function to call for each node
 *
 * Return: NULL if tree or func is NULL
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/*traverse left subtree*/
	binary_tree_postorder(tree->left, func);

	/*traverse right subtree*/
	binary_tree_postorder(tree->right, func);

	/*call function for current node's value*/
	func(tree->n);
}
