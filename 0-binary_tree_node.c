#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: the ptr of the parent
 * @value: the value
 * Return: the node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	/* we create a node like usual like liked list*/
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
