#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: source pointer
 * @value: value of parent
 * Return: pointer to parent
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		new_node = malloc(sizeof(binary_tree_t));

		if (new_node == NULL)
		{
			dprintf(2, "Malloc error!");
			return (NULL);
		}
		new_node->parent = NULL;
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->n = value;
		return (new_node);
	}
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		dprintf(2, "Malloc error");
		return (NULL);
	}
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
