#include <iostream>
using namespace std;
struct BstNode{
	int data;
	BstNode* left;
	BstNode* right;
};
BstNode* GetNewNode(int data){
	BstNode* newNode = new BstNode();
	newNode->data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}
BstNode* Insert(BstNode* root, int data){
	if (root == NULL){ //for empty tree
		root = GetNewNode(data);
	}
	else if (data<=root->data){
		root->left = Insert(root->left, data);
	}
	else {
		root->right = Insert(root->left, data);
	}
	return root;
}
main(){
	BstNode* root; //pointing to the root location
	root = NULL; //tree is empty
	Insert(root, 15);
	Insert(root, 5);
	Insert(root, 40);
	Insert(root, 50);
	
}
