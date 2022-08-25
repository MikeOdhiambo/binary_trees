#include "binary_trees.h"

/**
 * get_depth - measures the depth of a node in a binary tree
 *
 * @tree: tree root
 * Return: depth of a node in a binary tree
 */
size_t get_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	return (get_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - calls get_depth to return the depth
 * of a node in a binary tree
 *
 * @tree: tree root
 * Return: depth of the tree or 0 if tree is NULL;
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (get_depth(tree));
}

/**
 * binary_tree_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (binary_tree_depth(first) > binary_tree_depth(second))
		return (binary_trees_ancestor(first->parent, second));

	if (binary_tree_depth(first) < binary_tree_depth(second))
		return (binary_trees_ancestor(first, second->parent));

	return (binary_trees_ancestor(first->parent, second->parent));
}
