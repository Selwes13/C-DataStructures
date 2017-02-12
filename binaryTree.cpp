#include "binaryTree.h"
#include "stack.h"
#include <iostream>

binaryTree::binaryTree() {
	data = 0;
}

binaryTree::binaryTree(int i) {
	data = i;
}

binaryTree* binaryTree::getLeft() {
	return left;
}

void binaryTree::setLeft(binaryTree* i) {
	left = i;
}

binaryTree* binaryTree::getRight() {
	return right;
}

void binaryTree::setRight(binaryTree* i) {
	right = i;
}

int binaryTree::getData() {
	return data;
}

void binaryTree::setData(int i) {
	data = i;
}

void binaryTree::insert(binaryTree* i) {
	//if data is smaller, go left 
	if (i->getData() < this->getData()) {
		if (left == nullptr) {
			left = i;
			std::cout << "insert left " << i->getData() << std::endl;
		}
		else {
			left->insert(i);
		}
	}
	else if (i->getData() > this->getData()) {
		if (right == nullptr) {
			right = i;
			std::cout << "insert left " << i->getData() << std::endl;
		}
		else
			right->insert(i);
	}

}
