#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of binary node
 * @node: the node
 * Return: the uncle node or null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL, *grandparent = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->parent == NULL)
		return (NULL);

	grandparent = parent->parent;


	if (grandparent->left == parent)
	{
		return (grandparent->right);
	}
	else if (grandparent->right == parent)
	{
		return (grandparent->left);
	}
	else
		return (NULL);
}
