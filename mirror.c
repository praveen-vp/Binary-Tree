
#include <stdio.h>
#include "Tree.h"

void mirror (struct node* node)
{
	if(node == NULL)
		return;
    mirror(node->left);
    mirror(node->right);
    // swap here
    struct node* t = node->left;
	node->left = node->right;
	node->right = t;
}
