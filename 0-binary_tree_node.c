




#include "binary_trees.h"
/**
 * binary_tree_node - function create new node with parent
 * @parent: Pointer to the parent node
 * @value: Integer stored in the node
 * Return: Pointer too the new node
 * else return NULL
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	struct  binary_tree_s *tempNode =
		(struct binary_tree_s *) malloc(sizeof(struct binary_tree_s));

	if (!tempNode)
		return (NULL);

	tempNode->parent = parent;
	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;

	return (tempNode);
}
