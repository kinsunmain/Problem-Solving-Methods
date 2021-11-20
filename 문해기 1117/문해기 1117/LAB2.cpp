#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	int key;
	NODE* next;
};

int insertKey(struct NODE* head, int newKey);
void traverse(struct NODE* head);
void ClearList(struct NODE* head);

int main() {

	int nums[10] = { 17, 39, 11, 9, 42, 12, 15, 8, 13, 41 };

	struct NODE* head=NULL;
	head = (struct NODE*)malloc(sizeof(struct NODE));
	if (head == (NODE*)NULL) {
		printf("malloc fail");
		exit(1);
	}
	head->next = NULL;

	//insert key-------------------------------------------

	for (int i = 0; i < 10; i++) {
		printf("//---Inserting Key : %d\n", nums[i]);
		if (insertKey(head, nums[i]) == 0) {
			printf("[%d] elements. key inserted..\n", i + 1);
		}
		else {
			printf("key already exists..\n");
		}
	}

	//traverse----------------------------------------------
	printf("\nTraversing the linked list\n");
	traverse(head->next);

	//ClearList---------------------------------------------
	printf("\nDeleting the linked list\n");
	for (int i = 0; i < 10; i++) {
		printf("node[%d] deleted..\n",i);
		ClearList(head);
	}

	free(head);
}

int insertKey(struct NODE* head, int newKey){

	struct NODE* ptr = NULL;
	struct NODE* prv_ptr =NULL;
	int flag = 0;

	ptr = head->next;
	prv_ptr = head;

	while (ptr != NULL) {
		if (ptr->key == newKey) {
			flag = -1;
			break;
		}
		else if (ptr->key > newKey) {
			flag = 0;
			break;
		}

		prv_ptr = ptr;
		ptr = ptr->next;
	}

	if (flag == 0) {
		struct NODE* newNODE = NULL;
		newNODE = (struct NODE*)malloc(sizeof(struct NODE));
		if (newNODE == NULL) {
			printf("malloc fail");
			exit(1);
		}
		newNODE->key = newKey;
		newNODE->next = ptr;
		prv_ptr->next = newNODE;
	}

	return flag;
}

void traverse(struct NODE* head) {

	struct NODE* ptr = NULL;
	int ind = 0;
	ptr = head;

	while (ptr) {
		printf("node[%d] key: %d\n", ind, ptr->key);
		ind++;
		ptr = ptr->next;
	}
}

void ClearList(struct NODE* head) {

	struct NODE* ptr = NULL, *prv_ptr = NULL;

	ptr = head->next;
	prv_ptr = head;

	prv_ptr->next = ptr->next;
	free(ptr);
}
