




#include "binary_trees.h"
/**
 * binary_tree_node
 * @parent
 * @value
 * Return
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	struct  binary_tree_s *tempNode = 
		(struct binary_tree_s *) malloc(sizeof(struct binary_tree_s));
	/*  struct  binary_tree_s  *current;
		struct  binary_tree_s  *parent;*/


	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;

	//if tree is empty
	if(parent == NULL) {
		parent = tempNode;
	}else{
		tempNode->parent = parent;

	}
	return (tempNode);
}
