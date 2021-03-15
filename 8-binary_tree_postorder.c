#include "binary_trees.h"

/**
* binary_tree_postorder - postorder traversal
*@tree: the node to check
*@func: function to do on every node
*Return: 1 if root 0 if not
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}