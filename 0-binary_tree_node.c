#include "binary_trees.h"

/**
 * binary_tree_node - creates a node with the given value
 * @parent: parent of the node
 * @value: valut of the node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	{
		parent = temp;
		parent->left = NULL;
		parent->right = NULL;
		parent->n = value;
		parent->parent = NULL;

		return (parent);
	}

	temp->parent = parent;
	temp->right = NULL;
	temp->left = NULL;
	temp->n = value;
	if (value > parent->n)
	{
		parent->right = temp;
	} else
	{
		parent->left = temp;
	}
	return (temp);
}
