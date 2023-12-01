#include "binary_trees.h"
/**
 * binary_tree_delete -  Recursively frees an entire tree by releasing each node when both its left and right children are NULL.
 * @tree: The tree to be freed
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
