#include "binary_trees.h"
/**
 * binary_tree_uncle - as the title
 * @node: the node
 * Return: the ptr of the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	return (NULL);
}
