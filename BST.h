#ifndef _BST_ADT_H
#define _BST_ADT_H


typedef struct TreeNode TreeNode;

struct TreeNode
{
    TreeNode* left;
    TreeNode* right;
    int element;
};

typedef struct BST
{
    TreeNode* root;
}BST;

//*************** Private functions ***************//
TreeNode* createNode(int value);
void recursiveInsertion(TreeNode* root, TreeNode* newNode);
void recursivePrinting(TreeNode* root);
void recursiveFree(TreeNode* root);
int recursiveCountTreeSize(TreeNode* root);
int recursiveFindIndexN(TreeNode* root, int N);
void recursiveCheckIfSameHeight(TreeNode* root, int level, int* temp);


//*************** Shell/Interface functions of the administrative structure of the binary search tree ***************//
void initBST(BST* bst);
void insertBST(BST* bst, int value);
void printTreeInorder(BST* bst);
void destroyBST(BST* bst);
int findIndexNFromLast(BST* bst, int N);
int sameHeightLeaves(BST* bst);


#endif // !_BST_ADT_H