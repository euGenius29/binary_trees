#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if the binary tree is a leaf
 * @node: pointer to the node to check
 * Return: 1 if true or 0 if false
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}