
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
		if(data == node->data)
			return node;

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

	else {
		struct node* root;
		struct node* keynNode = searchRoot(node,key);
		printf("%d\n",keynNode->data);
		int data = key >= node->data ? (root = minValueNode(keynNode))->left->data:
			(root = maxValueNode(keynNode))->right->data;
		keynNode->data = data;
		printf("%d\n",root->data);
		if (key >= node->data) {
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
	int data = 55;
	deleteNode(p,data);
	print(p);
}

