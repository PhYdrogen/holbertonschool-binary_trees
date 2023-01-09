#include "binary_trees.h"

/**
 * binary_tree_insert_left - add a node at the left
 * @parent: is a pointer to the node to insert the left-child in
 * @value: the value
 * Return: the node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL, *tmp = NULL;

	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	left_node->n = value;
	left_node->left = NULL;
	left_node->right = NULL;

	if (parent->left != NULL)
	{
		tmp  = parent->left;
		parent->left = left_node;
		left_node->left = tmp;
	}
	parent->left = left_node;
	return (left_node);
}
