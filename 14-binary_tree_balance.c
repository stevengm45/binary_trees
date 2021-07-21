#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 *
 * Return: the height of the tree. If tree is NULL, return 0
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

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor of
 *
 * Description: If tree is NULL, return 0
 *
 * Return: balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int measure_r = 0, measure_l = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		measure_l = (int)binary_tree_height(tree->left);
	}
	else
	{
		measure_l = -1;
	}
	if (tree->right)
	{
		measure_r = (int)binary_tree_height(tree->right);
	}
	else
	{
		measure_r = -1;
	}
	return (measure_l - measure_r);
}
