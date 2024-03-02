#include "binary_trees.h"
/**
 * binary_tree_height - measures nodes from root to leaf of the nodes.
 * @tree: pointer to the root node
 * Return: count
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t  count1, count2;


	if (tree == NULL)
		return (0);
	count1 = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	count2 = tree->right ? 1 + binary_tree_height(tree->right): 0;
	return (count1 > count2 ? count1 : count2);

}