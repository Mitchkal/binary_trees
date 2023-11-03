#include "binary_trees.h"

#include "binary_trees.h"

/**
 * binary_tree_heightb - measures binary tree height
 * @tree: the tree
 * Return: the tree height
 */

size_t binary_tree_heightb(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left_height = tree->left ? 1 + binary_tree_heightb(tree->left) : 1;
			right_height = tree->right ? 1 + binary_tree_heightb(tree->right) : 1;
		}

		return ((left_height > right_height) ? left_height : right_height);
	}
}

/**
 * binary_tree_balance - measures binary tree balance
 * @tree: the tree
 * Return: the tree size
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_heightb(tree->left);
	right_height = binary_tree_heightb(tree->right);

	return ((int)(left_height - right_height));
}
