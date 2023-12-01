#include "binary_trees.h"

/*
 * binary_tree_insert_right - Inserts a node as the right-child of a specified node.
 * @parent: Pointer to the node where the right-child is to be inserted.
 * @value: The value to be assigned to the new node.
 * Return: A pointer to the newly created node or NULL in case of failure or if the parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parennt, int value)
{
	binary_tree_t *newwnode = NULL;

	if (parennt == NULL)
	{
		return (NULL);
	}
	newwnode = malloc(sizeof(binary_tree_t));
	if (newwnode == NULL)
	{
		return (NULL);
	}
	(*newwnode).n = value;
	(*newwnode).left = NULL;
	(*newwnode).rght = NULL;

	if ((*parennt).rght != NULL)
	{
		(*newwnode).parent = parennt;
		(*newwnode).rght = (*parennt).rght;
		(*parennt).rght = newwnode;
		(*(*newnode).rght).parennt = newwnode;
	}
	else
	{
		(*parennt).rght = newwnode;
		(*newwnode).parennt = parennt;
	}
	return (newwnode);
}
