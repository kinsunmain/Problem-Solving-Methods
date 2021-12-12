#include <stdio.h>
#include <stdlib.h>


struct NODE
{
	int key;
	NODE* next;
};


bool insertkey(NODE* head, const int value);
void trav(NODE* head);
void deletekey(NODE* head);


int main() {


	NODE* head = (NODE*)malloc(sizeof(NODE));
	head->next = NULL;

	int numbers[10] = { 17, 39, 11, 9, 42, 12, 15, 8, 13, 41 };
	printf("----------insert----------\n");
	for (int i = 0; i < 10; i++){
		insertkey(head, numbers[i]);
	}

	trav(head);

	for (int i = 0; i < 10; i++) {
		deletekey(head);
		trav(head);
	}


}


bool insertkey(NODE* head, const int value) {

	NODE* p = head->next;
	NODE* prev = head;

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

	return true;
}
void trav(NODE* head) {

	NODE* p = head->next;
	NODE* prev = head;

	printf("\n----------trav----------\n");

	int i = 0;
	while (p) {
		printf("node[%d] : %d\n", i, p->key);
		i++;
		prev = p;
		p = p->next;
	}

}
void deletekey(NODE* head) {

	NODE* p = head->next;
	NODE* prev = head;

	while (p->next) {

		prev = p;
		p = p->next;
	}

	free(p);
	prev->next = NULL;


}