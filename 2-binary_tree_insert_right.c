#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node to right of parent node
 * @parent: Parent node
 * @value: new node data
 * Return: Pointer to newly inserted node, NULL (fail)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->right = parent->right;
	new->left = NULL;

	if (parent->right)
	{
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}

