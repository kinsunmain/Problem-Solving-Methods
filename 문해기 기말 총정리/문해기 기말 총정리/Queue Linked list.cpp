//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct QUEUE
//{
//	int val;
//	int back;
//	int front;
//	QUEUE* next;
//};
//
//void enqueue(QUEUE* head, const int value);
//void dequeue(QUEUE* head);
//bool queue_empty(QUEUE* head);
//void trav(QUEUE* head);
//
//int main() {
//
//	QUEUE* head = (QUEUE*)malloc(sizeof(QUEUE));
//	head->next = NULL;
//	head->back = -1;
//	head->front = -1;
//
//	int value = 10;
//
//
//	printf("\n-------------enqueue-----------\n");
//	for (int i = 0; i < 10; i++) {
//		enqueue(head, value);
//		value += 10;
//	}
//
//
//	printf("\n-------------dequeue-----------\n");
//	for (int i = 0; i < 11; i++) {
//		dequeue(head);
//	}
//
//
//
//
//
//
//}
//void enqueue(QUEUE* head, const int value) {
//
//	QUEUE* p = head->next;
//	QUEUE* prev = head;
//
//	while (p) {
//		prev = p;
//		p = p->next;
//	}
//
//	QUEUE* newNODE = (QUEUE*)malloc(sizeof(QUEUE));
//	prev->next = newNODE;
//	newNODE->next = p;
//	newNODE->val = value;
//	newNODE->back = prev->back + 1;
//
//}
//void dequeue(QUEUE* head) {
//
//	QUEUE* p = head->next;
//	QUEUE* prev = head;
//
//
//	prev->next = p->next;
//	free(p);
//}
//bool queue_empty(QUEUE* head) {
//
//
//
//
//}
//void trav(QUEUE* head) {
//
//	QUEUE* p = head->next;
//	QUEUE* prev = head;
//
//
//	while(p)
//
//}