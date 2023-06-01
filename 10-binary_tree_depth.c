#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: a pointer to the node to measure the depth
 * Return: the depth or 0 if the tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	if (tree == NULL)
		return (0);
	if (tree->parent)
		depth += 1 + binary_tree_depth(tree->parent);

	return (depth);
}

