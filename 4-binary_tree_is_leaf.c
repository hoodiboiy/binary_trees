#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Determines if a node is a leaf, indicating that the node has no children, neither left nor right
 * @node: The node under consideration
 * Return: Returns 1 if the node is a leaf, and 0 if it is not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
