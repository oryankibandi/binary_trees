#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as the left-child
 * @parent: node to insert
 * @value: value of the node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (parent == NULL || temp == NULL)
		return (NULL);

	temp->n = value;
	if (parent->left != NULL)
		temp->left = NULL;
	else
	{
		temp->left = parent->left;
	}
	temp->right = NULL;
	temp->parent = parent;

	parent->left = temp;

	free(temp);

	return (parent->left);
}
