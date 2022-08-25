#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as the right-child
 * @parent: node to insert
 * @value: value of the node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (parent == NULL || temp == NULL)
		return (NULL);

	temp->n = value;
	if (parent->right != NULL)
		temp->right = NULL;
	else
	{
		temp->right = parent->right;
	}
	temp->left = NULL;
	temp->parent = parent;

	parent->right = temp;

	free(temp);

	return (parent->right);
}
