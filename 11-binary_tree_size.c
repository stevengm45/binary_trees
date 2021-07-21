#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree
 *
 * @tree: tree to measure
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
	{
		return (0);
	}

	height_l = binary_tree_size(tree->left);
	height_r = binary_tree_size(tree->right);

	return (1 + height_l + height_r);
}
