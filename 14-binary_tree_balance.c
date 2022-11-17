#include "binary_trees.h"

size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);

	a = _binary_tree_height(tree->left);
	b = _binary_tree_height(tree->right);
	return (MAX(a, b) + 1);
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree) - 1);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);
	a = (tree->left)
		? (int)binary_tree_height(tree->left)
		: -1;
	b = (tree->right)
		? (int)binary_tree_height(tree->right)
		: -1;
	return (a - b);
}
