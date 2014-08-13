
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

void deleteNode(struct node* node,int key) {

	if (node == NULL) 
		return;

	else if (node->data == key) {
		int data = maxValueNode(node->left)->data;
		struct node* root = searchRoot(node,data);
		free(root->right);
		root->right = 0;
		node->data = data;
		return;
	}
	else {
		struct node* keynode;
		
		if((keynode = searchRoot(node,key))->left->data == key)
			keynode = keynode->left;
		else 
			keynode = keynode->right;

		int data = (key > node->data) ? minValueNode(keynode)->data : maxValueNode(keynode)->data;
		struct node* root = searchRoot(node,data);	
		keynode->data = data;	

		if (root->left->data == data ) {
			free(root->left);
			root->left = 0;
		}
		else {
			free(root->right);
			root->right = 0;
		}

	}
}

int main() 
{
	struct node* p = buildnode();
	print(p);
	printf("\n");
	int data = 30;
	deleteNode(p,data);
	print(p);
}

