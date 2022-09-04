#include"binary_trees.h"
/**
 * binary_tree_sibling - function return if sibling 
 * @node: Pointer to the node  to cheak is sibling or not
 * Return: Int 1 if sibling
 * else 0
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp = node;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	node = node->parent;
	if (node->left == temp)
		node = node->right;
	else if (node->right == temp)
		node = node->left;
	else if ((node->right == temp && node->left == NULL)
			|| (node->left == temp && node->right == NULL))
		return (NULL);
	return (node);
}
