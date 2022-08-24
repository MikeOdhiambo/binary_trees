#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Root node
 * Return: number of all nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lt, rt;

	if (!tree)
		return (0);

	lt = binary_tree_size(tree->left);
	rt = binary_tree_size(tree->right);

	return (lt + rt + 1);
}

