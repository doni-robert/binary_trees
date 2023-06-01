#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 *
 * @tree: a pointer to the root node of the true to measure the height
 * Return: the height of the binary tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	left = right = 0;
	if (tree == NULL)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	if (left > right)
		return (left);
	else
		return (right);
}
