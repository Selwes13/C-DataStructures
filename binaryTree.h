#pragma once
class binaryTree {
private:
	int data;
	binaryTree *left;
	binaryTree *right;

public:
	binaryTree();
	binaryTree(int data);

	binaryTree* getLeft();
	void setLeft(binaryTree* i);
	binaryTree* getRight();
	void setRight(binaryTree* i);

	int getData();
	void setData(int i);

	void insert(binaryTree* i);

};