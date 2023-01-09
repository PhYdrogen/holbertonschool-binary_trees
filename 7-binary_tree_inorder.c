#include "binary_trees.h"
/**
 * binary_tree_inorder - print the binary tree with the ascending order
 * @tree: the tree
 * @func: a function we call
 * Return: none
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
