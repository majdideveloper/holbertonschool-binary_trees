




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
	size_t heightLeft, heightRight, height;

	if (!tree)
		return (0);

	heightLeft = binary_tree_height(tree->left);
	heightRight = binary_tree_height(tree->right);


height = (heightRight >= heightLeft ? heightRight + 1 : heightLeft + 1);
return (height - 1) ;

}
