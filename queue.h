class queue {

private:
	int top;
	int len;
	int* data;

public:
	queue(int size);
	~queue();
	void init();

	void push(int i);
	int pop();
	int peak();

};