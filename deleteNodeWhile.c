
#include "Tree.h"

struct node* buildnode(void) {

	struct node* root = NewNode(45);
	root->left = NewNode(30);
	root->right = NewNode(50);

	root->left->left = NewNode(25);
	root->left->right = NewNode(34);

	root->right->left = NewNode(46);
	root->right->right = NewNode(55);

	root->left->left->left = NewNode(20);
	root->left->left->right = NewNode(26);

	return root;
}

struct node* searchTree(struct node* node,int data) {

	if(node == NULL)
		return 0;

	else {
		if(data == node->data )
			return node;
	
		else {
			if(data < node->data)
				return searchTree(node->left,data);
			else 
				return searchTree(node->right,data);
		}
	}
}

struct node* searchRoot(struct node* node,int data) {

	if(node == NULL)
		return 0;

	else {
		if(data == node->left->data || data == node->right->data){ 
			return node;
		}	
		else {
			if(data < node->data)
				return searchRoot(node->left,data);
			else 
				return searchRoot(node->right,data);
		}
	}
}

void deleteNode (struct node* p,int key) {

	if (p == NULL) 
		return;

	else {
	   	struct node* keyNode = searchTree(p,key);
		struct node* temp = keyNode;
	
		if(temp->left == NULL) {
			
			temp = searchRoot(p,key);
			if (temp->left->data == key)  {
				free(temp->left);
				temp->left = 0;
			}
			else {
				free(temp->right);
				temp->right = 0;
			}
		}

		else {
	
			while (keyNode->left !=  NULL ) {
				keyNode->data = keyNode->left->data;
				temp = keyNode;
				keyNode = keyNode->left;
			}
			free(temp->left);
			temp->left = 0;
		}
	}
}

int main() 
{
	struct node* p = buildnode();
	print(p);
	printf("\n");
	deleteNode(p,55);
	print(p);
}
