




#include "binary_trees.h"
/**
 * binary_tree_postorder - function print all node in tree with postorder
 * @tree: Pointer to the root of tree
 * @func: Pointer to the function
 * Return: Nothing ...
 *
 */
	void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}


}
