#pragma once
class stack {

private:
	int len;
	int top;
	int* data;

public:
	stack(int size);
	~stack();
	void init();

	int getLen();
	void setLen(int size);

	void push(int i);
	int pop();
	int peak();
	
};