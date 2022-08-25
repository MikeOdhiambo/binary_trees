#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Root node
 * Return: Size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lt, rt;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	lt = binary_tree_height(tree->left);
	rt = binary_tree_height(tree->right);

	if (lt > rt)
		return (lt + 1);
	else
		return (rt + 1);
}


/**
 * binary_tree_balance - Measures tree balance factor
 * @tree: Root node
 * Return: integer balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	binary_tree_t *lnode = tree->left, *rnode = tree->right;
	int lh = int(binary_tree_height(lnode));
	int rh = int(binary_tree_height(rnode));

	return (lh - rh);
}

