
#include <stdlib.h>
#include <stdio.h>
#include "Tree.h"

struct node* build123(void) {
	struct node* root = NewNode(7);
	root->left = NewNode(5);
	root->right = NewNode(10);

	root->left->left = NewNode(3);
	root->left->right = NewNode(6);

	root->right->right = NewNode(12);
	root->right->left = NewNode(8);
				
	root->left->left->left = NewNode(2);
	root->left->left->right = NewNode(4);
	
	root->right->right->right = NewNode(13);
	root->right->right->left = NewNode(11);
	
	return root;
}
/* 
	 strucr node* root = Newnode(2);
	 struct node* l = Newnode(1);
	 struct node* r = Newnode(3);

	 root->left = l;
	 root->right = r;

	 return root;
 */

/*
	 struct node* root = NULL;
	 root = insert(root,2);
	 root = insert(root,1);
	 root = insert(root,3);
	 return root;

*/
