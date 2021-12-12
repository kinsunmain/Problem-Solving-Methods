//#include <stdio.h>
//#include <stdlib.h>
//
//#define SIZE 10
//
//struct STACK
//{
//	int top;
//	int *buf;
//	int size;
//
//	STACK(const int size_);
//	~STACK();
//
//	void push(const int value);
//	int pop();
//	bool stack_full();
//	bool stack_empty();
//};
//
//STACK::STACK(const int size_) {
//	top = -1;
//	size = size_;
//	buf = (int*)malloc(size_*sizeof(int));
//}
//
//STACK::~STACK() {
//	top = -1;
//	free(buf);
//}
//
//void STACK::push(const int value) {
//
//	if (!stack_full()) {
//		top++;
//		buf[top] = value;
//		printf("push[%d] %d\n", top, buf[top]);
//	}
//
//}
//
//int STACK::pop() {
//
//	if (!stack_empty()) {
//		printf("pop[%d] %d\n", top, buf[top]);
//		buf[top] = 0;
//		top--;
//	}
//	return buf[top];
//}
//
//bool STACK::stack_full() {
//	if (top >= 9) {
//		printf("stack is full\n");
//		return true;
//	}
//	else return false;
//}
//
//bool STACK::stack_empty() {
//	if (top < 0) {
//		printf("stack is empty\n");
//		return true;
//	}
//	else return false;
//}
//
////void push(const int value, STACK & stack);
////int pop(STACK & stack);
////bool stack_full(STACK & stack);
////bool stack_empty(STACK & stack);
//
//
//int main() {
//
//
//	STACK stack(SIZE);
//	stack.top = -1;
//	int value = 10;
//
//	int val;
//	//for (int i = 0; i < 11; i++) {
//	//	push(value, stack);
//	//	value += 10;
//	//}
//
//	//for (int i = 0; i < 11; i++) {
//	//	val = pop(stack);
//	//}
//	for (int i = 0; i < SIZE +1; i++) {
//		stack.push(value);
//		value += 10;
//	}
//
//	for (int i = 0; i < SIZE+1; i++) {
//		val = stack.pop();
//	}
//}
//
//
////void push(const int value, STACK& stack) {
////
////	if (!stack_full(stack)) {
////		stack.top++;
////		stack.buf[stack.top] = value;
////		printf("push[%d] top : %d\n", stack.buf[stack.top], stack.top);
////	}
////
////
////}
////int pop(STACK& stack) {
////
////	if (!stack_empty(stack)) {
////		printf("pop[%d], top : %d\n",stack.buf[stack.top], stack.top);
////		stack.buf[stack.top] = 0;
////		stack.top--;
////
////	}
////	return stack.buf[stack.top+1];
////
////}
////bool stack_full(STACK& stack) {
////	if (stack.top >= 9) {
////		printf("stack is full\n");
////		return true;
////	}
////	else return false;
////}
////bool stack_empty(STACK& stack) {
////	if (stack.top < 0) {
////		printf("stack is empty\n");
////		return true;
////	}
////	else return false;
////}