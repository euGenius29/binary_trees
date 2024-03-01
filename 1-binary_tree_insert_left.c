#include "binary_trees.h"
/*
	binary_tree_insert_left - inserts the new node to the left child of the parent
	@parent: parent to add child
	@value: value to insert
	Return: updated pointer
	*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (parent == NULL)
	{
		return (NULL);
	}
	temp = parent;
	new_node = malloc(sizeof(binary_tree_t));
	if (temp->left == NULL)
	{
		new_node->parent = temp;
		temp->left = new_node;
		new_node->n = value;
		return (new_node);
	}
	new_node-> parent = temp;
	new_node->left = temp->left;
	temp->left->parent = new_node;
	temp->left = new_node;
	new_node->n = value;
	return (new_node);
}