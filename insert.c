
#include <stdio.h>
#include "Tree.h"

struct node* insert(struct node* node,int data) {

				if(node == NULL) 
								return NewNode(data);
				else {
								if(data <= node->data) 
												node->left = insert(node->left,data);
								else
												node->right = insert(node->right,data);
								return node;
				}
}
