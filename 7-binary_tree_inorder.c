#include "binary_trees.h"

/**
* binary_tree_inorder - inorder traversal
*@tree: the node to check
*@func: function to do on every node
*Return: 1 if root 0 if not
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}