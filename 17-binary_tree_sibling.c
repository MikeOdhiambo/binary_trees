#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Given node
 * Return: Pointer to sibling node (success), NULL (fail)
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *prnt = node->parent;

	if (node == NULL || prnt == NULL)
		return (NULL);
	if (prnt->left == node)
		return (prnt->right);
	return (prnt->left);
}

