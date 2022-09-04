#include"binary_trees.h"
/**
 * binary_tree_uncle - function return if uncle
 * @node: Pointer to the node  to cheak is uncle or not
 * Return: Int 1 if uncle
 * else 0
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp = node->parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	node = node->parent->parent;
	if (node->left == temp)
		node = node->right;
	else if (node->right == temp)
		node = node->left;
	else if ((node->right == temp && node->left == NULL)
			|| (node->left == temp && node->right == NULL))
		return (NULL);
	return (node);
}
