#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Root node
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!root)
		return;
	binary_tree_delete(root->left);
	binary_tree_delete(root->right);
	free(node);
}
