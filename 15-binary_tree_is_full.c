#include "binary_trees.h"


int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_l = 0, full_r = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
		return(1);

	full_l = binary_tree_is_full(tree->left);
	full_r = binary_tree_is_full(tree->right);

	if (full_l == 0 || full_r == 0)
	{
		return (0);
	}
	return (1);
}
