#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node to right of parent node
 * @parent: Parent node
 * @value: new node data
 * Return: Pointer to newly inserted node, NULL (fail)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
        binary_tree_t *temp;

        if (!new)
                return (NULL);
        if (parent == NULL)
                return (NULL);
        new->parent = parent;
        new->n = value;
        new->right = new->right = NULL;

        if (parent->right == NULL)
        {
                parent->right = new;
        }
        else
        {
                temp = parent->right;
                temp->parent = new;
                parent->right = new;
                new->right = temp;
        }
        return (new);
}

