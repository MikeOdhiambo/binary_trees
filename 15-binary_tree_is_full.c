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
		return (0);
	lt = tree->left;
	rt = tree->right;

	if (!lt && !rt)
		return (1);

	if (lt && rt)
		return (binary_tree_is_full(lt) &&
				binary_tree_is_full(rt));
	return (O);
}
