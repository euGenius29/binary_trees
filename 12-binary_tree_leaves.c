#include "binary_trees.h"
/**
 * binary_tree_leaves - measures the number of leaves in a binary tree.
 * @tree: pointer to root
 * Return: count.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

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
