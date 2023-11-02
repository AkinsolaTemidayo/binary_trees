#include "binary_trees.h"

/**
 * binary_tree_depth - depth of specified node from root
 * @tree: a pointer to the node to measure the depth.
<<<<<<< HEAD
 * Return: function must return 0 else return the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
=======
 * Return: if tree is NULL, your function must return 0 else return the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
<<<<<<< HEAD
    return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
>>>>>>> b9a891903ea19f325c6a3812d7df9a2237089402
=======
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
>>>>>>> f2e7aa15620b8526074010094f3f2e67b67b49b7
}
