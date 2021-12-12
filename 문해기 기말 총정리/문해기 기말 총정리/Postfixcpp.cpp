#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct STACK
{
	int *buf;
	int top;
	int size;

	STACK(const int size_);
	~STACK();

	void push(const int val);
	int pop();
	bool stack_full();
	bool stack_empty();
};

STACK::STACK(const int size_) {

	buf = (int*)malloc(size_ * sizeof(int));
	top = -1;
	size = size_;
}

STACK::~STACK() {
	free(buf);
	top = -1;
	size = 0;
}

void STACK::push(const int val) {

	if (!stack_full()) {

		top++;
		buf[top] = val;
		printf("push %d top : %d\n", buf[top], top);
	}
}

int STACK::pop() {
	if (!stack_empty()) {
		printf("pop %d top : %d\n", buf[top], top);
		buf[top] = 0;
		top--;
	}
}

bool STACK::stack_empty() {
	if (top == -1) {
		printf("stack is empty\n");
		return true;
	}
	else return false;
}

int main() {

	STACK stack(10);





}