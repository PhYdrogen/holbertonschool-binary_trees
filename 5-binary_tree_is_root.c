#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: node tree
 *
 * Return: 1 true 0 if false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
