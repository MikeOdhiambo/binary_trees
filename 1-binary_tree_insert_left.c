#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node to left of parent node
 * @parent: Parent node
 * @value: new node data
 * Return: Pointer to newly inserted node, NULL (fail)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!parent || !new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = parent->left;
	new->right = NULL;

	if (parent->left)
	{
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
