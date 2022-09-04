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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL, or 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
}
