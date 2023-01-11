#include "binary_trees.h"
/**
 * binary_tree_height - loop in the tree
 * @tree: the tree
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t l, r;

	if (tree == NULL)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l > r)
		r = l;
	return (r + 1);

}
/**
 * binary_tree_balance - loop in the tree
 * @tree: the tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0;
	int l = 0;

	if (tree == NULL)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (l - r);
}
