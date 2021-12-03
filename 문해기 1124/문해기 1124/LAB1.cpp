//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct STACK
//{
//	int* buf;
//	int size;
//	int top;
//
//	bool is_full();
//	bool is_empty();
//	void push(int val);
//	void pop();
//
//};
//
//bool STACK::is_full() {
//	return top >= size - 1;
//}
//
//
//bool STACK::is_empty() {
//	return top < 0;
//}
//
//void STACK::push(int val) {
//
//	int i = 0;
//	if (is_full()) {
//		printf("stack is full");
//	}
//	top++;
//	buf[top] = val;
//	printf("push[%d]: %d\n", top, val);
//}
//
//void STACK::pop() {
//	if (is_empty()) {
//		printf("stack is empty");
//	}
//	int val = buf[top];
//	printf("pop[%d]: %d\n",top, val);
//	top--;
//}
//
////6022
//
//void create_stack(struct STACK &stack, const int size);
//void release_stack(struct STACK& stack);
////bool stack_full(struct STACK& stack);
////bool stack_empty(struct STACK& stack);
////int push(struct STACK& stack,int input_value);
////int pop(struct STACK& stack);
//
//
//int main() {
//
//	struct STACK stack;
//	struct STACK stack2;
//	struct STACK stack3;
//	int val;
//	create_stack(stack, 10);
//	
//	push(stack,100);
//	push(stack, 200);
//	push(stack, 300);
//	push(stack, 400);
//	push(stack, 500);
//	val = pop(stack);
//	val = pop(stack);
//	val = pop(stack);
//	val = pop(stack);
//	val = pop(stack);
//	val = pop(stack);
//	
//
//	release_stack(stack);
//	return 0;
//}
//
//
////bool stack_full(struct STACK& stack) {
////	return stack.top >= stack.size - 1;
////}
//
////bool stack_empty(struct STACK& stack) {
////	return stack.top < 0;
////}
//
////int push(struct STACK& stack, int val) {
////
////	int i = 0;
////	if (stack.is_full()) {
////		printf("stack is full");
////		return -1;
////	}
////	stack.top++;
////	stack.buf[stack.top] = val;
////	printf("push[%d]: %d\n", stack.top, val);
////	return 0;
////}
//
////int pop(struct STACK& stack) {
////	if (stack.is_empty()) {
////		printf("stack is empty");
////		return -1;
////	}
////	int val = stack.buf[stack.top];
////	printf("pop[%d]: %d\n", stack.top, val);
////	stack.top--;
////	return val;
////}
//
//
//void create_stack(struct STACK& stack, const int size) {
//
//	stack.buf = (int*)malloc(size * sizeof(int));
//	stack.size = size;
//	stack.top = -1;
//}
//
//void release_stack(struct STACK& stack) {
//	free(stack.buf);
//	stack.size = 0;
//	stack.top = -1;
//}
//
