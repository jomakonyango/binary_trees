#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
* @tree: Pointer to the root node of the tree to count the number of nodes
*
* Return: Number of nodes with at least one child, or 0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

size_t left_nodes = binary_tree_nodes(tree->left);
size_t right_nodes = binary_tree_nodes(tree->right);

/* Node has at least one child if either left or right is not NULL */
size_t count = (tree->left || tree->right) ? 1 : 0;

return (count + left_nodes + right_nodes);
}
