#include "binary_trees.h"

/**
* binary_tree_nodes - number of nodes
*@tree: the node to check
*Return: the number of nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}