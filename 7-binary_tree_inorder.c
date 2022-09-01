




#include "binary_trees.h"
/**
 * binary_tree_inorder - function print all node in tree with inorder
 * @tree: Pointer to the root of tree
 * @func: Pointer to the function
 * Return: Nothing ...
 *
 */
	void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}


}
