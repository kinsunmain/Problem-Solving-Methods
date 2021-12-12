//#include <stdio.h>
//#include <stdlib.h>
//
//#define SIZE 5
//
//
//struct QUEUE
//{
//	int* buf;
//	int front;
//	int back;
//	int size;
//
//	QUEUE(const int size_);
//	~QUEUE();
//
//	void enqueue(const int value);
//	int dequeue();
//	bool queue_full();
//	bool queue_empty();
//};
//
//
//QUEUE::QUEUE(const int size_) {
//	buf = (int*)malloc(size_ * sizeof(int));
//	front = -1;
//	back = -1;
//	size = size_;
//}
//
//QUEUE::~QUEUE() {
//	free(buf);
//	front = -1;
//	back = -1;
//	size = 0;
//}
//
//void QUEUE::enqueue(const int value) {
//
//	if (!queue_full()) {
//		back++;
//		buf[back] = value;
//		printf("enqueue[%d] value : %d front : %d back : %d\n", back,buf[back], front, back);
//	}
//
//}
//
//bool QUEUE::queue_full() {
//	if (back >= size-1) {
//		printf("queue is full\n");
//		return true;
//	}
//	else return false;
//}
//
//int QUEUE::dequeue() {
//
//	if (!queue_empty()) {
//		front++;
//		buf[front] = 0;
//		printf("dequeue[%d] front : %d back : %d\n", buf[front], front, back);
//	}
//	return buf[front];
//}
//
//bool QUEUE::queue_empty() {
//
//	if (front >= back) {
//		printf("queue is empty\n");
//		return true;
//	}
//	else return false;
//}
//
//int main() {
//
//	QUEUE queue(SIZE);
//	int value = 0;
//
//	for (int i = 0; i < SIZE + 1; i++) {
//		queue.enqueue(value);
//		value += 10;
//	}
//
//	for (int i = 0; i < SIZE + 1; i++) {
//		queue.dequeue();
//	}
//	return 0;
//}