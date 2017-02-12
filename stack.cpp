#include "stack.h"

stack::stack(int size) {
	len = size;
	top = -1;
	data = new int[size];
}

stack::~stack() {
	delete[] data;
}

void stack::init() {
	delete data;
	top = -1;
	data = new int[len];
}

int stack::getLen() {
	return len;
}

void stack::setLen(int size) {
	len = size;
	init();
}

void stack::push(int i) {
	if (top < len - 1) {
		top++;
		data[top] = i;
	}
}

int stack::pop() {
	if (top >= 0) {
		top--;
		return data[top + 1];
	}
	return -1;
}

int stack::peak() {
	if (top >= 0) 
		return data[top];

	return -1;
}