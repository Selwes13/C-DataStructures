#include "queue.h"

queue::queue(int size) {
	len = size;
	top = -1;
	data = new int[len];
}

queue::~queue() {
	delete[] data;
}

void queue::init() {
	delete[] data;
	top = -1;
	data = new int[len];
}

void queue::push(int i) {
	if (top < len - 1) {
		top++;
		data[top] = i;
	}
}

int queue::pop() {
	if (top >= 0) {
		int out = data[0];
		
		//shuffles data to the front 
		for (int i = 0; i <= top; i++)
			data[i] = data[i + 1];

		return out;
	}
	return -1;
}

int queue::peak() {
	if (top >= 0)
		return data[0];

	return -1;
}