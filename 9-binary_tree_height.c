#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree
 *
 * @tree: tree to measure
 * Return: size of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);

	if (height_l >= height_r)
	{
		return (1 + height_l);
	}
	return (1 + height_r);
}
