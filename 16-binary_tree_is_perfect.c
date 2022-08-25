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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance value or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
		binary_tree_height(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 0 or 1 for perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree) == 0)
	{
		if (binary_tree_height(tree->left) == 0 &&
			binary_tree_height(tree->right) == 0)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}

	return (0);
}
