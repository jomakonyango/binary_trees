#include "binary_trees.h"

/**
* binary_tree_leaves - Counts the leaves in a binary tree.
* @tree: Pointer to the root node of the tree to count the leaves.
*
* Return: Number of leaves in the binary tree. If tree is NULL, return 0.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (!tree)
return (0);

/*If both left and right subtrees are NULL, it's a leaf*/
if (!tree->left && !tree->right)
return (1);

/* Recursively count leaves in left and right subtrees*/
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
