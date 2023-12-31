#include "binary_trees.h"


/**
 * binary_tree_insert_right - Inserts a new node as the right-child
 * of a given parent node in a binary tree.
 * Author - MoOka
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node. 
 * Return: Pointer to the newly created node if successful.
 * NULL on failure & NULL if the parent is NULL.
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
