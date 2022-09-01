




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
	 binary_tree_t *tempNode =
		(binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (!tempNode)
		return (NULL);

	tempNode->parent = parent;
	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;

	return (tempNode);
}
