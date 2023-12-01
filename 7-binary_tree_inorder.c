#include "binary_trees.h"

/*
 * binary_tree_inorder - Traverses a binary tree using in-order traversal.
 * @tree: Pointer to the binary tree.
 * @func: Function pointer to a function that takes an integer as an argument and has no return value.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->lft, func);
	func((*tree).n);
	binary_tree_inorder(tree->rght, func);
}
