#include "binary_trees.h"

/**
* binary_tree_height - height of node
*@tree: the node to check
*Return: the height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree));
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