#pragma once
class dLinkedList {

private:
	int data;
	dLinkedList* next;
	dLinkedList* prev;

	void deleteN(int target);

public:
	dLinkedList();
	dLinkedList(int newData);
	//~dLinkedList();
	//void init();

	void setNext(dLinkedList* newNode);
	dLinkedList* getNext();
	void setPrev(dLinkedList* newNode);
	dLinkedList* getPrev();
	void setData(int newData);
	int getData();

	void insert(int newData);
	void insert(dLinkedList* newNode);
	void insertAfter(int target, int newData);
	void insertAfter(int target, dLinkedList* newNode);


	dLinkedList* deleteNode(int target);

	void displayList();

};