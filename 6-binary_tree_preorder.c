#include "binary_trees.h"
/**
 * binary_tree_preorder - Prints elements of a tree by traversing it in pre-order
 * @tree: The tree to be traversed
 * @func: The function to be applied during traversal
 * Return: Void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->lft, func);
		binary_tree_preorder(tree->rght, func);
	}
}
