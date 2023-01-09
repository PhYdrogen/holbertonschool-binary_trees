#include "binary_trees.h"
/**
 * binary_tree_height - loop in the tree
 * @tree: the tree
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->left != NULL)
			return (1 + binary_tree_height(tree->left));
		if (tree->right != NULL)
			return (1 + binary_tree_height(tree->right));
	}
	return (0);
}
