
/*	
	 answer = 2n!/(n+1)!*n! ;
*/

#include <stdio.h>
#include "Tree.h"

int fact (int n) {
	if(n<2) 
		return n;
	else 
		return n * fact(n-1);
}

int countTree (int number) 
{	if(number <= 1)
		return 1;
	else 
		return ( fact (2*number)/( fact(number+1)*fact(number) ));
}

// solution
/*
		For the key values 1...numKeys, how many structurally unique
	binary search trees are possible that store those keys.
	Strategy: consider that each value could be the root.
	Recursively find the size of the left and right subtrees.
int countTrees(int numKeys) {
	if (numKeys <=1) {
		return(1);
	}
	else {
	// there will be one value at the root, with whatever remains
	// on the left and right each forming their own subtrees.
	// Iterate through all the values that could be the root...
		int sum = 0;
		int left, right, root;
		for (root=1; root<=numKeys; root++) {
			left = countTrees(root - 1);
			right = countTrees(numKeys - root);
			// number of possible trees with this root == left*right
			sum += left*right;
		}
	return(sum);

	}
}
*/

