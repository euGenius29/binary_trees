#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses the binary tree inorder
 * @tree: pointer to root.
 * @func: function to call with int argument.
 * Return: void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
