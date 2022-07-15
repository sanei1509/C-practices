#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: a pointer to the created node,
 *	or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r_node = NULL;

	if (!parent)
		return (NULL);

	r_node = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	r_node->n = value;
	r_node->left = NULL;

	if (parent->right == NULL)
	{
		r_node->parent = parent;
		r_node->right = NULL;
		parent->right = r_node;
	}
	else
	{
		r_node->parent = parent;
		r_node->right = parent->right;
		parent->right = r_node;
		r_node->right->parent = r_node;
	}
	return (r_node);
}