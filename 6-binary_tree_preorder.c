#include "binary_trees.h"

/**
* binary_tree_preorder - Traverses a binary tree using pre-order traversal.
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to a function to call for each node.
*
* Description: The value in each node is passed as a parameter to the function.
* If tree or func is NULL, do nothing.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}

