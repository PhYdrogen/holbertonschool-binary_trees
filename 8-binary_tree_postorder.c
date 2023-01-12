#include "binary_trees.h"
/**
 * binary_tree_postorder - Nodes from the left subtree get visited first,
 * followed by the right subtree, and finally the root.
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: the function (it will be print)
 * Return: none
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;

	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
