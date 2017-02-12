#pragma once
class linkedList {

private:
	int data;
	linkedList* next;

	void deleteNode(int target, linkedList* prev);

public:
	linkedList();
	linkedList(int newData);
	//~linkedList();
	//void init();
	
	linkedList* getNext();
	void setNext(linkedList* newNext);

	void insert(linkedList* newNode);
	void insert(int newData);
	void insertAfter(int target, linkedList* newNode);
	void insertAfter(int target, int newData);


	//deletes target node and returns list head
	linkedList* deleteNode(int target);

	void displayList();

};