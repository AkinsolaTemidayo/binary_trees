#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_height - measures the height of a binary tree.
 * @tree - a pointer to the root node of the tree to measure the height.
 *
 *  Return: if tree is null, function would return 0, orelse return height.
=======
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: tree to go through
 * Return: if tree is null, function would return 0, orelse return height.
>>>>>>> adb20de1193f5db9cde06693e44a84911538be12
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
<<<<<<< HEAD
    if (tree)
    {
	size_t l = 0, r = 0;

	l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((l > r) ? l : r);
     }
     return (0);
=======
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((l > r) ? l : r);
	}
>>>>>>> adb20de1193f5db9cde06693e44a84911538be12
}
