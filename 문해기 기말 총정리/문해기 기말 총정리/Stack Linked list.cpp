//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//struct NODE
//{
//	int key;
//	int top;
//	NODE* next;
//};
//
//bool insertkey(NODE* head, const int value) {
//
//	NODE* p = head->next;
//	NODE* prev = head;
//
//	while (p) {
//		prev = p;
//		p = p->next;
//	}
//
//	NODE* newNODE = (NODE*)malloc(sizeof(NODE));
//	prev->next = newNODE;
//	newNODE->key = value;
//	newNODE->top = prev->top + 1;
//	newNODE->next = p;
//
//	return true;
//}
//
//bool stack_empty(NODE* head) {
//	NODE* p = head->next;
//	NODE* prev = head;
//
//	while (p) {
//		prev = p;
//		p = p->next;
//	}
//	if (prev->top == -1) {
//		printf("stack is empty\n");
//		return true;
//	}
//	else return false;
//}
//
//
//void deleted(NODE* head) {
//
//	if (!stack_empty(head)) {
//
//		NODE* p = head->next;
//		NODE* prev = head;
//		int i = 0;
//		while (p->next) {
//			prev = p;
//			p = p->next;
//			i++;
//		}
//		printf("pop node[%d] top : %d value : %d\n",i, p->top, p->key);
//		prev->next = NULL;
//		free(p);
//	}
//}
//
//
//void trav(NODE* head) {
//	NODE* p = head->next;
//	printf("\n------------------trav--------------------\n");
//	int i = 0;
//	while (p) {
//		printf("node[%d] top : %d value : %d\n", i, p->top, p->key);
//		i++;
//		p = p->next;
//	}
//
//}
//
//int main() {
//
//	NODE* head;
//	head = (NODE*)malloc(sizeof(NODE));
//	head->key = 0;
//	head->top = -1;
//	head->next = NULL;
//
//
//	int top = -1;
//
//	int value = 100;
//
//	for (int i = 0; i < 10; i++) {
//		insertkey(head, value);
//		value -= 5;
//	}
//
//	trav(head);
//
//	for (int i = 0; i < 12; i++) {
//		deleted(head);
//	}
//	return 0;
//}