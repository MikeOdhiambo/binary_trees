#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using preorder traversal
 * @tree: root node of the tree
 * @func: Pointer to function call of each node
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
