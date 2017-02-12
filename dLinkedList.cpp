#include "dLinkedList.h"
#include <iostream>

dLinkedList::dLinkedList() {
	data = 0;
}

dLinkedList::dLinkedList(int newData) {
	data = newData;
}

void dLinkedList::setNext(dLinkedList* newNode) {
	next = newNode;
}

dLinkedList* dLinkedList::getNext() {
	return next;
}

void dLinkedList::setPrev(dLinkedList* newNode) {
	prev = newNode;
}

dLinkedList* dLinkedList::getPrev() {
	return prev;
}

void dLinkedList::setData(int newData) {
	data = newData;
}

int dLinkedList::getData() {
	return data;
}

void dLinkedList::insert(int newData) {
	if (next == nullptr) {
		dLinkedList* newNode = new dLinkedList(newData);
		next = newNode;
		newNode->setPrev(this);
	}
	else
		next->insert(newData);
}

void dLinkedList::insert(dLinkedList* newNode) {
	if (next == nullptr) {
		next = newNode;
		newNode->setPrev(this);
	}
	else
		next->insert(newNode);
}

dLinkedList* dLinkedList::deleteNode(int target) {
	if (data == target) {
		next->setPrev(nullptr);
		return next;
	}
	else {
		if (next != nullptr)
			next->deleteN(target);
		else
			std::cout << "Node \"" << data << "\" does not exist" << std::endl;
		return this;
	}
}

void dLinkedList::deleteN(int target) {
	if (data == target) {
		prev->setNext(next);
		next->setPrev(prev);
	}
	else {
		if (next != nullptr)
			next->deleteN(target);
		else
			std::cout << "Node \"" << data << "\" does not exist" << std::endl;
	}
}

void dLinkedList::insertAfter(int target, int newData) {
	if (data == target) {
		dLinkedList* newNode = new dLinkedList(newData);
		
		newNode->setPrev(this);
		newNode->setNext(next);

		if (next != nullptr)
			next->setPrev(newNode);

		next = newNode;
	}
	else {
		if (next != nullptr)
			next->insertAfter(target, newData);
		else
			std::cout << "Node \"" << data << "\" does not exist" << std::endl;
	}
}

void dLinkedList::insertAfter(int target, dLinkedList* newNode) {
	if (data == target) {
		newNode->setPrev(this);
		newNode->setNext(next);

		if (next != nullptr)
			next->setPrev(newNode);

		next = newNode;
	}
	else {
		if (next != nullptr)
			next->insertAfter(target, newNode);
		else
			std::cout << "Node \"" << data << "\" does not exist" << std::endl;
	}
}

void dLinkedList::displayList() {
	std::cout << data << " ";

	if (next != nullptr)
		next->displayList();
	else
		std::cout << std::endl;
}