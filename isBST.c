
#include <stdio.h>
#include "Tree.h"

int min(struct node* node) {
	 
	 while (node->left != NULL)
		  node = node->left;
	 return node->data;
}

int max(struct node* node) {

	 while (node->right != NULL)
		  node = node->right;

	 return node->data;
}

int isBST (struct node* node) {

	 if (node == NULL)
		  return 1;

	 if (node->left != NULL && min(node->left) > node->data)
	 	  return 0;

	 if (node->right != NULL && max(node->right) <= node->data) 
		  return 0;

	 if (!isBST(node->left) || !isBST(node->right))
		  return 0;

	 return 1;
}

int fn (int struct node* node,int min,int max) {

	 if (node == NULL) 
		  return 1;
	 
	 if (node->data < min || node->data > max) 
		  return 0;

	 else 
		  return (fn(node->left,min,node->data) && fn(node->right,max,node->data));

}
		

