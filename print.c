

#include <stdio.h>
#include "Tree.h"

void print (struct node* node) 
{
	if (node == NULL) 
		return;

	print(node->left);
	printf("%d ", node->data);
	print(node->right);
}

