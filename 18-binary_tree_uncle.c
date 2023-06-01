#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node or NULL if the node, parent or sibling
 *      is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		return (node->parent->left);
	}
	return (NULL);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node or NULL if the node or uncle is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent)
		return (binary_tree_sibling(node->parent));
	return (NULL);
}
