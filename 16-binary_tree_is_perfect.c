#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}

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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if tree is full, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((binary_tree_is_full(tree) == 1) && (binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}
