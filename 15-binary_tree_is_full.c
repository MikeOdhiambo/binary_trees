#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Root node
 * Return: 1 (full), 0 (otherwise)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *lt, *rt;

	if (!tree)
		return (1);
	lt = binary_tree_is_full(root->left);
	rt = binary_tree_is_full(root->right);

	return ((lt && rt) || (!lt && !rt));
}
