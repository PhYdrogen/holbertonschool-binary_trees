#include "binary_trees.h"
/**
 * binary_tree_delete - remove the tree without memory leaks
 * @tree: The root of the tree
 * Return: None
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *traveler = NULL;

	if (tree == NULL)
		return;

	traveler = tree;
	/* loop in the tree */
	while (tree->right != NULL || tree->left != NULL)
	{
		if (traveler && traveler->left != NULL)
		{
			traveler = traveler->left;
			printf("je suis aller a gauche\n");
			continue;
		}
		if (traveler && traveler->right != NULL)
		{
			traveler = traveler->right;
			printf("je suis aller a droite\n");
			continue;
		}
		if (traveler && traveler->left == NULL && traveler->right == NULL)
		{
			printf("je viens de free\n");

			if (traveler->parent->right == traveler)
				traveler->parent->right = NULL;
			else
				traveler->parent->left = NULL;

			free(traveler);
			traveler = NULL;
			traveler = tree;
		}
	}
	free(tree);
}
