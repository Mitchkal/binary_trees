#include "binary_trees.h"

/**
 * binary_tree_leaves - measures binary tree leaves
 * @tree: the tree
 * Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0;
	size_t right_leaves = 0;
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	leaves = left_leaves + right_leaves;

	return ((!left_leaves && !right_leaves) ? leaves + 1 : leaves);
}
