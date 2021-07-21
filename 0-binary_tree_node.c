#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - creates a binary tree node
 * @parent: parnt of the node to create
 * @value: value to store in new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	struct binary_tree_s *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;

	return (new);
}
