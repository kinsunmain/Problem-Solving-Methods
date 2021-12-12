//#include <stdio.h>
//#include <stdlib.h>
//
//
//
//struct STACK
//{
//	int *buf;
//	int sized;
//	int top;
//
//	void create_buf(const int size);
//	void push(const int valeu);
//	int pop();
//	bool stack_full();
//	bool stack_empty();
//};
//
//void STACK::create_buf(const int size) {
//
//	buf = (int*)malloc(size * sizeof(int));
//	sized = size;
//	top = -1;
//
//}
//
//void STACK::push(const int value) {
//
//	if (!stack_full()) {
//		top++;
//		buf[top] = value;
//		printf("push %d top : %d\n", value, top);
//	}
//
//}
//
//bool STACK::stack_full() {
//
//	if (top >= sized-1) {
//		printf("stack full\n");
//		return true;
//	} 
//	else return false;
//
//}
//
//int STACK::pop() {
//
//	if (!stack_empty()) {
//		printf("pop %d top : %d\n", buf[top], top-1);
//		buf[top] = 0;
//		top--;
//	}
//	return 0;
//}
//
//bool STACK::stack_empty() {
//	if (top == -1) {
//		printf("stack empty\n");
//		return true;
//	}
//	else return false;
//}
//
//int main() {
//
//	STACK stack;
//	int value = 10;
//
//	stack.create_buf(20);
//
//	for (int i = 0; i < 21; i++) {
//		stack.push(value);
//		value += 10;
//	}
//
//	for (int i = 0; i < 21; i++) {
//		stack.pop();
//	}
//
//
//}