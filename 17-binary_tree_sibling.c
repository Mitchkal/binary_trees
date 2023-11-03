#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of binary node
 * @node: the node
 * Return: the sibling node or null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	else if (parent->right == node)
		return (parent->left);
	else
		return (NULL);
}




