
#include "binary_trees.h"

/**
 * binary_tree_height - Returns the height of the binary tree
 * @tree: the binary tree
 * Return: the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	left_height = binary_tree_height(tree->left);
	left_height++;
	right_height = binary_tree_height(tree->right);
	right_height++;

	if (left_height < right_height)
		return (right_height);
	else
		return (left_height);
}

/**
 * binary_tree_balance - calculate the balance factor of the tree
 * @tree: the tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		left_height = binary_tree_height(tree->left);
	}
	else
	{
		left_height = left_height - 1;
	}

	if (!tree->right)
	{
		right_height = right_height - 1;
	}
	else
	{
		right_height = binary_tree_height(tree->right);
	}

	return (left_height - right_height);
}
