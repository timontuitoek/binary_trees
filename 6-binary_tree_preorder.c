#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_preorder - traversing binary tree using preorder traversal
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to function to call for each node
 *
 * Return: NULL if tree or func, else do nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	/*callling function for current node's value*/
	func(tree->n);

	/*recursively traverse the left subtree*/
	binary_tree_preorder(tree->left, func);

	/*recursively traverse right subtree*/
	binary_tree_preorder(tree->right, func);
}
