#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Root node
 * Return: Size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lt = 0, rt = 0;

	if (!tree)
		return (-1);

	lt = binary_tree_height(tree->left);
	rt = binary_tree_height(tree->right);

	if (rt > lt)
		return (rt + 1);
	else
		return (lt + 1);
}

