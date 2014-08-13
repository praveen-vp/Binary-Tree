
// return true if the target is found in the tree else return false;

#include <stdio.h>
#include "Tree.h"

int lookup( struct node* node,int target )
{
	 if(node == NULL )
		  return false;
	 
	 else {
		  if (target == node->data)
			   return true;
		  else {
			   if( target < node->data )
					return lookup(node->left,target);
			   else
					return lookup( node->right,target);
		  }
		  
	 }
}


