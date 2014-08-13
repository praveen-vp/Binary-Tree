
#include <stdio.h>
#include "Tree.h"

struct node* buildnode(void) {

	struct node* root = NewNode(45);
	root->left = NewNode(30);
	root->right = NewNode(50);

	root->left->left = NewNode(25);
	root->left->right = NewNode(31);

	root->right->left = NewNode(44);
	root->right->right = NewNode(55);

	return root;
}

struct node* searchTree(struct node* node,int data) {

	if(node == NULL)
		return 0;

	else {
		if(data == node->data) 
			return node;
		else {
			if(data < node->data)
				return searchTree(node->left,data);
			else 
				return searchTree(node->right,data);
		}
	}
}

struct node* minValueNode(struct node* p) {
	
	struct node* node = p;

	while (node->left == NULL) 
		node = node->left;
	return node;
}

struct node* deleteNode(struct node* node,int data) {

	if (node == NULL)
		return node;

	if(data < node->data) 
		node->left = deleteNode(node->left,data);
	
	else if(data > node->data) 
		node->right = deleteNode(node->right,data);
	
	else {
	
		if(node->left == NULL) {
			struct node* temp = node->right;
			free(node);
			return temp;
		}
		else if(node->right == NULL) {
			struct node* temp = node->left;
			free(node);
			return temp;
		}

		struct node* temp = minValueNode(node->right);

		node->data = temp->data;

		node->right = deleteNode(node->right,temp->data);
	}
	return node;
}

int main() 
{
	struct node* p = buildnode();
	print(p);

	deleteNode(p,44);
	printf("\n");
	print(p);
}

