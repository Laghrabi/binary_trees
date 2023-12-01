#include "binary_trees.h"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree:   Pointer 2 the root node of the tree 2 check.
 * Return: 1 ->  binary tree is perfect
 * 0 -> If tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t check1, check2;

	if (tree == NULL)
		return (0);

	check1 = binary_tree_size(tree->left);
	check2 = binary_tree_size(tree->right);
	if (check1 == check2)
		return (1);

	return (0);
}
