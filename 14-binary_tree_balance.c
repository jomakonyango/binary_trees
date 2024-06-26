#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: Height of the tree, with leaf node as 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
if (!tree || (!tree->left && !tree->right))
return (0);
size_t left_height = binary_tree_height(tree->left);
size_t right_height = binary_tree_height(tree->right);
return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: Pointer to the root node of the tree to measure the balance factor
*
* Return: Balance factor, or 0 if tree is NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (!tree)
return (0);
int left_height = binary_tree_height(tree->left);
int right_height = binary_tree_height(tree->right);
return (left_height - right_height);
}
