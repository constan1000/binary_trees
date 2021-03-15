#include "binary_trees.h"

/**
* binary_tree_balance - the balance of my tree
*@tree: the node to check
*Return: the the balance of my tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree->left) - height(tree->right));
}
/**
*findMax - who's max ?
*@a: first to compare
*@b: second to compare
*Return: Max
*/
int findMax(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}
/**
*height - who's bigger ?
*@tree: the tree to check
* Return: the height
*/
int height(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	return (findMax(height(tree->left), height(tree->right)) + 1);
}