#include "binary_trees.h"
/**
 * binary_tree_depth - loop in the tree
 * @tree: the tree
 * Return: the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree && tree->parent != NULL)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	return (0);
}
