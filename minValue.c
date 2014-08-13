
#include <stdio.h>
#include "Tree.h"

int minValue(struct node* p) 
{
	struct node* node = p;
	
	while (node->left != NULL) {
		node = node->left;
	}
	
	return node->data;
}

