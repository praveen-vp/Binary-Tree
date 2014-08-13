

#include <stdio.h>
#include "Tree.h"


void printpost (struct node* node) 
{
	if(node == NULL)
		return;
	printpost(node->right);
	printpost(node->left);
	printf("%d ",node->data);
}

