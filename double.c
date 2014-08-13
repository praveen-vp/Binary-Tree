
#include <stdio.h>
#include "Tree.h"

void doubleTree(struct node* node)
{
	if(node == NULL)
		return;

	// do the subtrees
	doubleTree(node->left);
	struct node* oldLeft;
	doubleTree(node->right);

	// duplicate this node to its left
	oldLeft = node->left;
	node->left = NewNode(node->data);
	node->left->left = oldLeft;
}

