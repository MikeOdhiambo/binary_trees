#include "binary_trees.h"

/**
* binary_tree_depth - Measures the depth of a node
* @tree: node to find depth
*
* Return: int depth size
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0;

	if(!tree)
		return (0)
	while (tree->parent)
	{
		dep = dep + 1;
		tree = tree->parent;
	}
	return (dep);
}
