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
		if (tree->left)
		{
			/*left_height = tree->left ? 1 + binary_tree_heightb(tree->left) : 1;*/
			/*right_height = tree->right ? 1 + binary_tree_heightb(tree->right) : 1;*/
			left_height = 1 + binary_tree_heightb(tree->left);
		}
		if (tree->right)
		{
			right_height = 1 + binary_tree_heightb(tree->right);
		}

		return ((left_height > right_height) ? left_height : right_height);
	}
}



/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: the tree
 * Return: the tree height
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: the binary tree
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_is_full(tree) && binary_tree_heightb(tree->left) ==
			binary_tree_heightb(tree->right));
}
