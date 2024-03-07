#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of the binary tree
 * @tree: pointer to the node
 * Return: count.
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return 0;
	count = tree->parent ? 1+ binary_tree_depth(tree->parent) : 0;

	return (count);
}