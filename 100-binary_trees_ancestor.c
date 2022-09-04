#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to calculate its depth
 * Return: the depth of @tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (depth);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (first->parent == second->parent)
		return (first->parent);/* or second->parent)*/
	if (first == second->parent)
		return (second->parent);
	if (second == first->parent)
		return (first->parent);
	if (binary_tree_depth(first) != binary_tree_depth(second))
	{
		if (binary_tree_depth(first) < binary_tree_depth(second))
		{
			while (binary_tree_depth(first) != binary_tree_depth(second))
			{
				second = second->parent;
				if (second->parent == first)
					return (second->parent);
			}
		}
		else
		{
			while (binary_tree_depth(first) != binary_tree_depth(second))
			{
				first = first->parent;
				if (first->parent == second)
					return (first->parent);
			}
		}
	}
	while (first->parent != second->parent)
	{
		first = first->parent;
		second = second->parent;
	}
	return (first->parent);/* or second->parent*/
}
