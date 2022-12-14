#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts number of non-leaf nodes
 * @tree: root node of the tree
 * Return: number of non-leaf nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
	else
		return (0);
}

