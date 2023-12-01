#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks whether a given node is a root in the binary tree
 * @node: The node to be checked
 * Return:  Returns 0 if the node is not a root, and 1 if it is a root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
