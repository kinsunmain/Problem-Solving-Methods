#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	int key;
	NODE* next;

};

bool insertkey(NODE* head, const int value);
bool del_key(NODE* head);
void trav(NODE* head);

int main() {

	NODE* head = (NODE*)malloc(sizeof(NODE));

	head->next = NULL;

	int testset[10]{ 17, 39, 11, 9, 42, 12, 15, 8, 13, 41 };

	for (int i = 0; i < 10; i++) {
		insertkey(head, testset[i]);
	}

	trav(head);

	del_key(head);

	free(head);
	return 0;

}

bool insertkey(NODE* head, const int value) {

	NODE* p;
	NODE* prev;
	p = head->next;
	prev = head;

	while (p) {
		if (p->key == value) return -1;
		else if (p->key > value) break;
		prev = p;
		p = p->next;
	}

	NODE* newNODE = (NODE*)malloc(sizeof(NODE));
	newNODE->key = value;
	newNODE->next = p;
	prev->next = newNODE;

}

void trav(NODE* head) {

	NODE* p = head->next;

	int i = 0;
	while (p) {
		printf("node[%d] : %d\n", i, p->key);
		i++;
		p = p->next;
	}

}

bool del_key(NODE* head) {

	NODE* p = head->next;
	NODE* prev = head;

	int i = 0;
	while (p) {
		NODE* newNODE = p;
		p = p->next;
		printf("node[%d] deleted\n", i);
		free(newNODE);
		i++;
	}
	return true;

}
