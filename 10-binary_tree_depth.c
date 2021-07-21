#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth of a node
 *
 * @tree: tree to measure
 * Return: size of the tree depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
	{
		return (0);
	}

	while (tree->parent)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}
