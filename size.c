
#include <stdio.h>
#include "Tree.h"

int size (struct node* node) 
{
	if (node == NULL)
		return 0;
	else
		return 1 + size(node->left) + size(node->right);
}
