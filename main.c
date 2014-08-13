
#include <stdio.h>
#include "Tree.h"

int main() 
{
	struct node* p = build123();
	//	printf("%d\n",lookup(p,1));
	//	p = insert(p,4);
	//	p = insert(p,5);
	//	p = insert(p,4);
	//	printf("%d\n",lookup(p,4));
	//	printf("%d\n",size(p));
	//	printpost(p);
	//	printf("\n%d\n",maxdepth(p));
	print(p);
	printf("\n %d \n",isBST(p));
	//  printf("\n%d\n",minValue(p));
	//	printf("\n%d\n",haspathsum(p,3));
	//	printpath(p);
	mirror(p);
	//	printpath(p);
	//	doubleTree(p);
	print(p);
	//	printf("\n %d \n",countTree(4));
	printf("\n %d \n",isBST(p));
}
