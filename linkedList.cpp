#include "linkedList.h"
#include <iostream>

linkedList::linkedList() {
	data = 0;
}

linkedList::linkedList(int newData) {
	data = newData;
}

linkedList* linkedList::getNext() {
	return next;
}

void linkedList::setNext(linkedList* newNext) {
	next = newNext;
}

void linkedList::insert(linkedList* newNode) {
	if (next == nullptr)
		next = newNode;
	else
		next->insert(newNode);
}

void linkedList::insert(int newData) {
	if (next == nullptr)
		next = new linkedList(newData);
	else
		next->insert(newData);
}

void linkedList::insertAfter(int target, linkedList* newNode) {
	if (data == target) {
		newNode->setNext(next);
		next = newNode;
	}
	else if (next != nullptr)
		next->insertAfter(target, newNode);
	else
		std::cout << "Node \"" << target << "\" does not exist" << std::endl;

}

void linkedList::insertAfter(int target, int newData) {
	if (data == target) {
		linkedList *newNode = new linkedList(newData);
		newNode->setNext(next);
		next = newNode;
	}
	else if (next != nullptr)
		next->insertAfter(target, newData);
	else
		std::cout << "Node \"" << target << "\" does not exist" << std::endl;
}


void linkedList::displayList() {
	std::cout << data << " ";

	if (next != nullptr)
		next->displayList();
	else
		std::cout << std::endl;

}

//operated on the head so if the head changes the new head can be returned 
linkedList* linkedList::deleteNode(int target) {
	if (data == target)
		return next;
	else if (next != nullptr)
		next->deleteNode(target, this);
	else 
		std::cout << "Node \"" << target << "\" does not exist" << std::endl;

	return this;
}

void linkedList::deleteNode(int target, linkedList* prev) {
	if (data == target) {
		prev->setNext(next);
		next = nullptr;
	}
	else if (next != nullptr) 
		next->deleteNode(target, this);
	
	else 
		std::cout << "Node \"" << target << "\" does not exist" << std::endl;
	
}