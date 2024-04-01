#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
* @tree: Pointer to the root node of the tree to count the number of nodes
*
* Return: Number of nodes with at least one child, 0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

size_t left_count = binary_tree_nodes(tree->left);
size_t right_count = binary_tree_nodes(tree->right);

/* A node is counted if it has at least one child */
return (((tree->left || tree->right) ? 1 : 0) + left_count + right_count);
}
