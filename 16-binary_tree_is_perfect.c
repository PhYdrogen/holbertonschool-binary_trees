#include "binary_trees.h"

/**
 * binary_tree_is_perfect_recurcive - check for perfect tree
 * @tree: the tree
 * @d: depth
 * @level: where we are now
 * Return: 1 if true / 0 if false
 *
 */
int binary_tree_is_perfect_recurcive(const binary_tree_t *tree,
		int d, int level)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_perfect_recurcive(tree->left, d, level + 1) &&
	 binary_tree_is_perfect_recurcive(tree->right, d, level + 1));

}
/**
 * binary_tree_is_perfect - check for perfect tree
 * @tree: the tree
 * Return: 1 if true / 0 if false
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = 0, level = 0;

	const binary_tree_t *node = tree;

	while (tree != NULL)
	{
		tree = tree->left;
		d++;
	}
	return (binary_tree_is_perfect_recurcive(node, d, level));
}
