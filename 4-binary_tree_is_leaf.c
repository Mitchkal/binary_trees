#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node: the node of the tree
 * Return: 1 if tru, 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->left == NULL && node->right == NULL);
}
