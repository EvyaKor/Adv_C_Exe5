#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <crtdbg.h>
#include "BST.h"
#include "TreePrintLibrary.h"

void main()
{
	BST Test;
	initBST(&Test); // Test initBST


	// Test functions with empty tree
	print_ascii_tree(Test.root);
	printf("\n");
	printTreeInorder(&Test); // Test printTreeInorder + recursivePrinting
	printf("\n");
	printf("Tree size is: %d\n", recursiveCountTreeSize(Test.root));  // Test recursiveCountTreeSize
	findIndexNFromLast(&Test, 0); // Test findIndexNFromLast
	if (sameHeightLeaves(&Test))
	{
		printf("All leaves in the binary tree are in the same height\n");
	}
	else
	{
		printf("Not all leaves in the binary tree are in the same height\n");
	}


	// Test functions with full tree
	printf("\n");
	printf("After inserting elements to binary tree:\n");
	insertBST(&Test, 5); // Test insertBST + recursiveInsertion
	insertBST(&Test, 2);
	insertBST(&Test, 1);
	insertBST(&Test, 7);
	insertBST(&Test, 3);
	insertBST(&Test, 9);
	insertBST(&Test, 8);
	insertBST(&Test, 1);
	insertBST(&Test, 4);
	insertBST(&Test, 12);
	print_ascii_tree(Test.root);
	printf("\n");
	printf("Print Tree Inorder:\n");
	printTreeInorder(&Test); // Test printTreeInorder + recursivePrinting
	printf("\n");
	printf("Tree size is: %d\n", recursiveCountTreeSize(Test.root));  // Test recursiveCountTreeSize
	int N = 8;
	printf("The element in the N=%d place (from the end) is: %d\n", N, findIndexNFromLast(&Test, N)); // Test findIndexNFromLast
	if (sameHeightLeaves(&Test))
	{
		printf("All leaves in the binary tree are in the same height\n");
	}
	else
	{
		printf("Not all leaves in the binary tree are in the same height\n");
	}
	

	// Test destroyBST + recursiveFree
	printf("\n");
	destroyBST(&Test);
	if (Test.root == NULL)
	{
		printf("Binary tree was destroyed\n");
	}

	_CrtDumpMemoryLeaks(); // Check for memory leaks
}