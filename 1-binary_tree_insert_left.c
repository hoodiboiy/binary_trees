#include "binary_trees.h"
/*
 * binary_tree_insert_left - Introduces a node to the left of the specified parent.
 * If a left child already exists, it descends one level, making room for the neww node as the neww left child.
 * @parent: The parent node where the left child is to be added.
 * @value: The value to be assigned to the neww node.
 * Return: NULL in case of failure, or a pointer to the newly added node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *neww_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	neww_node = binary_tree_node(parent, value);
	if (neww_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		neww_node->left = parent->left;
		parent->left->parent = neww_node;
	}
	parent->left = neww_node;
	return (neww_node);
}
