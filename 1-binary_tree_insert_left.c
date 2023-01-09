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

	if (parent == NULL)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);

	/* create an node like usual */
	left_node->n = value;
	left_node->parent = parent;
	left_node->left = NULL;
	left_node->right = NULL;

	/* self explainatory, if the parent has a child */
	if (parent->left != NULL)
	{
		tmp = parent->left; /* we keep the child in a variable */
		parent->left = left_node; /* we set the parent left to this node*/
		left_node->left = tmp; /* we set our left node to the child of the parent */
		tmp->parent = left_node; /* important, we change the parent */
	}
	/* if there is no child of the parent then set like normal */
	parent->left = left_node;
	return (left_node);
}
