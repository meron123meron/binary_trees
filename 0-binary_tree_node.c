#include "binary_trees.h"
/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: is a pointer to the parent node of the node to be created
 * @value: is the value to put in the new node
 * Return: pointer or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
newnode = malloc(sizeof(binary_tree_t));
if (newnode == NULL)
return (NULL);
newnode->parent == parent;
newnode->n = value;
newnode->left == NULL;
newnode->right == NULL;
return (newnode);
}