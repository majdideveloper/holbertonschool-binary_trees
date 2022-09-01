




#include "binary_trees.h"
/**
 * binary_tree_insert_left - function create new node with parent
 * @parent: Pointer to the parent node
 * @value: Integer stored in the node
 * Return: Pointer too the new node
 * else return NULL
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode =
		(binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (tempNode == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);	
	tempNode->parent = parent;
	tempNode->n = value;
	tempNode->right = NULL;
	tempNode->left = NULL;


	if (parent->left != NULL)
	{
		tempNode->left = parent->left;
		parent->left->parent = tempNode;
	}
	parent->left = tempNode;



	return (tempNode);
}
