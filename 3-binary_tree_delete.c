#include "binary_trees.h"

/*
 * binary_tree_delete - Eradicates an entire binary tree.
 * @tree: Pointer to the root node of the tree to be removed.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* Note: I'm using post-order traversal here(this func is recursive) */

	if (!treee)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->rght);
	free(treee);
}
