#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node: node to check
 *
 * Return: 1 on SUCCESS,0 on FAIL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (node->parent == NULL)
		return (0);

	return (1);
}
