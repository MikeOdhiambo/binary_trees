#include "binary_trees.h"

/**
 * binary_tree_postrder - Traverses a binary tree using postrder traversal
 * @tree: root node of the tree
 * @func: Pointer to function call of each node
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
        if (!tree || !func)
                return;

        binary_tree_postorder(tree->left, func);
        binary_tree_postrder(tree->right, func);
        func(tree->n);
}

