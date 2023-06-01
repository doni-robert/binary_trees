#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node or NULL on failure or
 *      if the parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL || !value)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->parent = parent;

	if (parent->right)
	{
	new->right = parent->right;
		parent->right->parent = new;
	}
	else
		new->right = NULL;

	parent->right = new;
	return (new);
}
