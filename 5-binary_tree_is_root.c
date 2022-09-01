




#include "binary_trees.h"
/**
 * binary_tree_is_root - function return is root or not
 * @node: Pointer to the node  to cheak is root or not
 * Return: Int 1 if root
 * else 0
 *
 */
	int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
