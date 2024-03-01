#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts the new node to the left child of the parent
 * @parent: parent to add child
 * @value: value to insert
 * Return: updated pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(binary_tree_t));
	if (parent->left == NULL)
	{
		new_node->parent = parent;
		parent->left = new_node;
		new_node->n = value;
		return (new_node);
	}
	new_node->parent = parent;
	new_node->left = parent->left;
	parent->left->parent = new_node;
	parent->left = new_node;
	new_node->n = value;
	return (new_node);
}