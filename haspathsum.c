
#include <stdio.h>
#include "Tree.h"

int haspathsum (struct node* node,int sum) 
{
	if (node == NULL) 
		return (sum == 0);
	
	else {
		return ( haspathsum(node->right,sum-node->data) ||
				haspathsum(node->left,sum-node->data) );
	}
}

