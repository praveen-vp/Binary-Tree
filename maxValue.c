
#include <stdio.h>
#include "Tree.h"

struct node* maxValueNode(struct node* p) 
{
	struct node* node = p;
	
	while (node->right != NULL) {
		node = node->right;
	}
	
	return node;
}

struct node* minValueNode(struct node* p) 
{
	struct node* node = p;
	
	while (node->left != NULL) {
		node = node->left;
	}
	
	return node;
}

