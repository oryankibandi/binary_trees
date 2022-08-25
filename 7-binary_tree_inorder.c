#include "binary_trees.h"


/**
 * goes through a binary tree using in-order traversal
 * @tree: pioonter to the root node
 * @func: pointer to the function call for each node
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
