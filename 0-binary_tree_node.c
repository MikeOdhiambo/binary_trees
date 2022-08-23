#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Parent node
 * @value: New node data
 * Return: Pointer to newly inserted node, NULL (fail)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = new->right = NULL;

	if (parent == NULL)
	{
		parent = new;
		return (parent);
	}
	if (value <= parent->n)
		parent->left = new;
	else
		parent->right = new;

	return (new);
}
