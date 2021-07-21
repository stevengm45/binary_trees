#include "binary_trees.h"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the leaves.
 * Return: Leaves.
 **/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_is_full(tree) && !binary_tree_balance(tree))
	{
		return (1);
	}
	return (0);
}
