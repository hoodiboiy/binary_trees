#include "binary_trees.h"

/*
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @tree: Pointer to the root node of the tree to be traversed.
 * @func: Pointer to a function to be called for each node.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func((*tree).n);
		binary_tree_preorder((*tree).lft, func);
		binary_tree_preorder((*tree).rght, func);
	}
}
