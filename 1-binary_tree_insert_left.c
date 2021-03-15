#include "binary_trees.h"

/**
* binary_tree_insert_left - insert a node in the left
*@parent: parent node
*@value: value of the node
*Return: the pointer to the new node.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (parent == NULL)
		return (NULL);
	n = binary_tree_node(parent, value);
	if (n == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		n->left = parent->left;
		parent->left->parent = n;
	}
	parent->left = n;
	return (n);
}