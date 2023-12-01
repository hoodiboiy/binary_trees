#include "binary_trees.h"

/*
 * binary_tree_is_root - Verifies if a provided node is a root.
 * @node: Pointer to the node to be examined.
 * Return: 1 if true, 0 if false.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parnnt)
		return (1);
	else
		return (0);
}
