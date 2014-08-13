
#include <stdio.h>
#include "Tree.h"


void PrintArray (int arrayName[],int len) 
{
	int i = 0;
	for(;i<len-1;i++)
		printf("%d-",arrayName[i]);
	
	printf("%d\n",arrayName[i]);
}

void helper (struct node* node,int pathArray[],int length) 
{
	if (node == NULL) 
		return;
			
	pathArray[length++] = node->data;
	if (node->right == NULL && node->left == NULL)
		PrintArray(pathArray,length);

	helper(node->right,pathArray,length);
	helper(node->left,pathArray,length);
}


void printpath(struct node* node) 
{
	int pathArray[1000];
	helper(node,pathArray,0);
}


