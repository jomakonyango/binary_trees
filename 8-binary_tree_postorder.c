#include "binary_trees.h"

/**
* binary_tree_postorder - Traverses a binary tree using post-order traversal.
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to a function to call for each node.
*
* Description: The value in each node is passed as a parameter to the function.
* If tree or func is NULL, do nothing.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

binary_tree_postorder(tree->left, func); /*Recurse on the left subtree*/
binary_tree_postorder(tree->right, func); /*Recurse on the right subtree*/
func(tree->n); /* Call the function on the current node*/
}
