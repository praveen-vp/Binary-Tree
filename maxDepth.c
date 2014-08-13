
#include <stdio.h>
#include "Tree.h"

int maxdepth(struct node* node)
{
	if(node == NULL)
		return 0;
	else {
		int Ldepth = maxdepth(node->left);
		int Rdepth = maxdepth(node->right);
		if(Ldepth <= Rdepth) 
			return Rdepth +1;
		else 
			return Ldepth +1;
	}
}

