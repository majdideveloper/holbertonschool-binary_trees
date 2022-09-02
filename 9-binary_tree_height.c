




#include "binary_trees.h"
/**
 * binary_tree_preorder - function print all node in tree with preorder
 * @tree: Pointer to the root of tree
 * @func: Pointer to the function
 * Return: Nothing ...
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
