#include <stdio.h>
#include <stdlib.h>


struct QUEUE
{
	int front;
	int back;
	int sized;
	int* buf;

	QUEUE(const int size);
	~QUEUE();

	bool queue_full();
	bool queue_empty();
	void enqueue(const int value);
	int dequeue();
};
QUEUE::QUEUE(const int size) {
	front = 0;
	back = 0;
	sized = size;
	buf = (int*)malloc(size * sizeof(int));
}
QUEUE::~QUEUE() {
	front = 0;
	back = 0;
	sized = 0;
	free(buf);
}

void QUEUE::enqueue(const int value) {
	if (!queue_full()) {
		buf[back] = value;
		printf("enqueue[%d] : %d\n", back, buf[back]);
		back++;
	}

}

int QUEUE::dequeue() {
	if (!queue_empty()) {
		printf("dequeue[%d] : %d\n", front, buf[front]);
		buf[front] = 0;
		front++;
	}

	return 0;
}


bool QUEUE::queue_full()
{
	if (back >= sized) {
		printf("Queue is full\n");
		return true;
	}
	else return false;
}

bool QUEUE::queue_empty() {
	if (front >= back) {
		printf("Queue is empty\n");
		return true;
	}
	else return false;
}

int main() {

	QUEUE queue(5);
	int val = 10;


	for (int i = 0; i < 6; i++) {
		queue.enqueue(val);
		val += 10;
	}

	for (int i = 0; i < 6; i++) {
		queue.dequeue();
	}


}