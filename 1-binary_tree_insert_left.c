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
	binary_tree_t *temp;

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
	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		temp = parent->left;
		temp->parent = new;
		parent->left = new;
		new->left = temp;
	}
	return (new);
}
