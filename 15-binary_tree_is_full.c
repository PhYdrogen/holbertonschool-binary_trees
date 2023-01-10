#include "binary_trees.h"

/**
 * binary_tree_is_full - Write a function that checks if a binary tree is full
 * @tree: the tree
 * Return: 0 if false / 1 if true
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right == NULL))
		return (1);

	printf("node (%d)\n", tree->n);
	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (1);
}
