#include "binary_trees.h"

/**
* binary_tree_insert_right - insert a node in the right
*@parent: parent node
*@value: value of the node
*Return: the pointer to the new node.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n;

	if (parent == NULL)
		return (NULL);
	n = binary_tree_node(parent, value);
	if (n == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		n->right = parent->right;
		parent->right->parent = n;
	}
	parent->right = n;
	return (n);
}