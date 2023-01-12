#include "binary_trees.h"
/**
 * binary_tree_inorder - go trough a binary tree using pre-order traversal
 * @func: pointer to a function
 * @tree: binary tree
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
