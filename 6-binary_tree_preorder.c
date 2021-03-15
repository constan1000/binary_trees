#include "binary_trees.h"

/**
* binary_tree_preorder - pre-order traversal
*@tree: the node to check
*@func: function to do on every node
*Return: 1 if root 0 if not
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}