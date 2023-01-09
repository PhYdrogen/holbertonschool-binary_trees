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
	/* the (traveler &&) is to make sure we don't get segfault */
	while (tree->right != NULL || tree->left != NULL)
	{
		/* if there is left go to then back to the main loop */
		if (traveler && traveler->left != NULL)
		{
			traveler = traveler->left;
			continue;
		}
		/* if there is right go to then back to the main loop */
		if (traveler && traveler->right != NULL)
		{
			traveler = traveler->right;
			continue;
		}
		/* if we get here it's because there is nothing left*/
		/* we check just in case */
		if (traveler && traveler->left == NULL && traveler->right == NULL)
		{
			/* so we don't really know who we are, left or right */
			/* but we can check the adresses, that's what we do */
			/* and we set the parent to null so we don't double free */
			if (traveler->parent->right == traveler)
				traveler->parent->right = NULL;
			else
				traveler->parent->left = NULL;
			/* we free like normal*/
			free(traveler);
			traveler = NULL;
			traveler = tree;
		}
	}
	/* we free the root*/
	free(tree);
}
