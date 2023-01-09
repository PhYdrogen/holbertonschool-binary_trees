#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node at the right
 * @parent: is a pointer to the node to insert the right-child in
 * @value: the value
 * Return: the node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL, *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));
	if (right_node == NULL)
		return (NULL);

	/* create an node like usual */
	right_node->n = value;
	right_node->parent = parent;
	right_node->left = NULL;
	right_node->right = NULL;

	/* self explainatory, if the parent has a child */
	if (parent->right != NULL)
	{
		tmp = parent->right; /* we keep the child in a variable */
		parent->right = right_node; /* we set the parent right to this node*/
		right_node->right = tmp; /* we set our  node to the child of the parent */
		tmp->parent = right_node; /* important, we change the parent */
	}
	/* if there is no child of the parent then set like normal */
	parent->right = right_node;
	return (right_node);

}
