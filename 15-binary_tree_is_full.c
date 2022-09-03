#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if @tree is full, or 0 if it is not or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/*int is_full;*/
	if (!tree)
		return (0);
	if /*((tree->left && tree->right) || */(!tree->left && !tree->right)
	/*else
		is_full = 0;*/
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}/*
	if (!((tree->left && tree->right) || (!(tree->left) && !(tree->right))))
		return (0);
	return ((binary_tree_is_full(tree->left) + binary_tree_is_full(tree->right)) + 1);
}*/
