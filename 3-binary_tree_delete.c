




#include "binary_trees.h"
/**
 * binary_tree_delete - function delete all tree of node
 * @parent: Pointer to the root of tree
 * Return: Nothing ...
 *
 */
	void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	/* delete left and right */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
