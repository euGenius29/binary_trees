#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts the new node to the right child of the parent
 * @parent: parent to add child
 * @value: value to insert
 * Return: updated pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (parent == NULL)
	{
		return (NULL);
	}
	temp = parent;
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	if (temp->right == NULL)
	{
		new_node->parent = temp;
		temp->right = new_node;
		new_node->n = value;
		return (new_node);
	}
	new_node-> parent = temp;
	new_node->right = temp->right;
	temp->right->parent = new_node;
	temp->right = new_node;
	new_node->n = value;
	return (new_node);
}