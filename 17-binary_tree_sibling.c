#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Given node
 * Return: Pointer to sibling node (success), NULL (fail)
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (!node || !parent)
		return (NULL);
	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);
}

