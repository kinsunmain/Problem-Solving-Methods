//#include <stdio.h>
//#include <stdlib.h>
//
//
//struct NODE
//{
//	int key;
//	NODE* next;
//};
//
//
//bool insertkey(NODE* head, const int value){
//
//
//	NODE* p = head->next;
//	NODE* prev = head;
//
//	while (p) {
//
//		if (p->key == value) return -1;
//		else if (p->key >= value) break;
//
//		prev = p;
//		p = p->next;
//	}
//
//	NODE* newNODE = (NODE*)malloc(sizeof(NODE));
//	newNODE->key = value;
//	prev->next = newNODE;
//	newNODE->next = p;
//	return true;
//}
//
//void trav(NODE* head) {
//	NODE* p = head->next;
//	NODE* prev = head;
//
//	int i = 0;
//	while (p) {
//		printf("node[%d] : %d\n",i, p->key);
//		i++;
//		p = p->next;
//	}
//}
//
//int main() {
//
//	NODE* head = (NODE*)malloc(sizeof(NODE));
//	head->next = NULL;
//
//	int val[7] = { 100, 250, 467, 250,300, 50, 500 };
//	for (int i=0;i<7;i++){
//		insertkey(head, val[i]);
//	}
//	trav(head);
//
//
//}