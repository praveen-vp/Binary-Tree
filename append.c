
#include <stdio.h>
#include "Tree.h"

struct node* append(struct node* h,struct node* n) 
{
	if(h == 0)
		return n;
	if(h->data < n->data) 
		append(h->left,n);
	else
		append(h->right,n);
	return h;
}

// log n time complexity.....
