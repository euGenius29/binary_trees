#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses the tree in preorder mode
 * @tree: pointer to the root to traverse
 * @func: function pointer that points to a function and takes a value.
 * Return: void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
