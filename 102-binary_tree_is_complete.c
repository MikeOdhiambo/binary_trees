#include "binary_trees.h"

int check_comp(const binary_tree_t *tree, size_t index, size_t size);

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: root node of the tree
 *
 * Return: 1 (complete), 0 (not complete), 0 (NULL)
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (check_comp(tree, 0, size));
}

/**
 * check_comp - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * @index: node index to check
 * @size: number of nodes in the tree
 *
 * Return: 1 (complete), 0 (not complete), 0 (NULL)
 */
int check_comp(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (check_comp(tree->left, 2 * index + 1, size) &&
		check_comp(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure the size of
 *
 * Return: size of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}
