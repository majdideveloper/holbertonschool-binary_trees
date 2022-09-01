




#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function delete all tree of node
 * @node: Pointer to the node  to cheak is leaf or not
 * Return: Int 1 if leaf 
 * else 0
 *
 */
	int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);

	
}
