#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if the binary tree is root
 * @node: pointer to the node to check
 * Return: 1 if true or 0 if false
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->parent)
		return (1);
	else
		return (0);
}