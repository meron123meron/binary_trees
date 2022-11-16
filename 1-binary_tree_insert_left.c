#include "binary_trees.h"
/**
 * binary_tree_insert_left - a function that inserts a node as the
 * left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: pointer or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newnode, *t;
if (parent == NULL)
{
return (NULL);
}
newnode = malloc(sizeof(binary_tree_t));
if (newnode == NULL)
return (NULL);
newnode->n = value;
newnode->parent = parent;
newnode->left = NULL;
newnode->right = NULL;
if (parent->left == NULL)
{
parent->left = newnode;
}
else
{
t = parent->left;
parent->left = newnode;
t->parent = newnode;
newnode->left = t;
}
return (newnode);
}
