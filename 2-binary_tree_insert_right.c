#include "binary_trees.h"
/**
 * binary_tree_insert_right -  Adds a new node with the specified value to the right of the parent
 * If the parent already has a right child, it moves down one level and adds the new node as the first right child
 * @parent: The parent node to which the new node will be added on the right
 * @value: The value of the new node
 * Return: Returns NULL if the operation fails, otherwise returns the pointer to the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		neww_node->right = parent->right;
		parent->right->parent = neww_node;
	}
	parent->right = neww_node;
	return (neww_node);
}
