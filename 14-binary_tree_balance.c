#include "binary_trees.h"



/**
 * binary_tree_height - function return height of tree
 * @tree: Pointer to the root of tree
 * Return: value of height
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightLeft = 0, heightRight = 0;

	if (!tree)
		return (0);

	heightLeft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	heightRight = tree->right ? 1 + binary_tree_height(tree->right) : 0;


return (heightRight >= heightLeft ? heightRight : heightLeft);


}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (0);
	height_left = tree->left ? binary_tree_height(tree->left) + 1
		: binary_tree_height(tree->left);
	height_right = tree->right ? binary_tree_height(tree->right) + 1 :
		binary_tree_height(tree->right);
	return (height_left - height_right);
}
