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

#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the true to measure the balance factor
 * Return: the balance factor of the binary tree or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int bf;

	if (tree == NULL)
		return (0);
	bf = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (bf);
}
