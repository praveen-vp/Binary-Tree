// makes a new node in the tree......
// and pushes the data in the new node;

#include <stdio.h>
#include "Tree.h"

struct node* NewNode(int data)
{
	struct node* node = malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return node;
}
