#include "binary_trees.h"

/*
 * binary_tree_is_leaf - Determines whether a node is a leaf.
 * @node: Pointer to the node to be checked.
 * Return: 1 if the node is a leaf, otherwise 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if ((*node).left == NULL && (*node).rght == NULL)
		{
			return (1);
		}
	}
	return (0);
}
