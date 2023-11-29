#include "binary_trees.h"

/*
 * generate_binary_node - Generates a neww node for a binary structure.
 * @parent: The parent node of the newly created node.
 * @value: The value to be assigned to the neww node.
 * Return: A pointer to the recently created node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *neww_node;

	neww_node = malloc(sizeof(binary_tree_t));
	if (neww_node == NULL)
	{
		return (NULL);
	}
	neww_node->n = value;
	neww_node->parent = parent;
	neww_node->left = NULL;
	neww_node->right = NULL;
	return (neww_node);
}
