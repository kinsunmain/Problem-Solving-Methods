//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct QUEUE
//{
//	int *recode;
//	int size;
//	int front=0;
//	int back=0;
//}queue;
//
//
//void create_queue(const int size);
//int enqueue(int value);
//int dequeue();
//bool queue_full();
//bool queue_empty();
//void release_stack();
//
//int main() {
//
//
//	int value = 10;
//
//	create_queue(10);
//
//	while (!queue_full()) {
//		enqueue(value);
//		value += 10;
//	}
//
//	while (!queue_empty()) {
//		value = dequeue();
//	}
//
//	release_stack();
//	return 0;
//}
//int enqueue(int value) {
//
//	queue.recode[queue.back] = value;
//	printf("enqueue[%d] : %d\n", queue.back, queue.recode[queue.back]);
//	queue.back++;
//
//	return 0;
//}
//int dequeue() {
//
//	queue.recode[queue.front] = NULL;
//	queue.front++;
//	printf("dequeue[%d] : %d\n", queue.front, queue.recode[queue.front]);
//	return 0;
//}
//bool queue_full() {
//
//	if (queue.back >= queue.size) {
//		printf("Queue is full\n");
//		queue.back--;
//		return true;
//	}
//	else return false;
//}
//bool queue_empty() {
//	if (queue.front+1 > queue.back) {
//		printf("Queue is empty\n");
//		return true;
//	}
//	else return false;
//}
//
//void create_queue(const int size) {
//
//	queue.recode = (int*)malloc(size * sizeof(int));
//	queue.size = size;
//	queue.back = 0;
//	queue.front = 0;
//}
//
//void release_stack() {
//	free(queue.recode);
//	queue.size = 0;
//	queue.back = -1;
//	queue.front = -1;
//}
