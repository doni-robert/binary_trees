#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with atleast one child in a binary tree
 *
 * @tree: a pointer to the root node of the tree
 * Return: the number of nodes or 0 if the tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	count = 0;
	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		count++;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
