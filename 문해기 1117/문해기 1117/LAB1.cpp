//#include <stdio.h>
//#include <stdlib.h>
//
//struct NODE
//{
//	int key;
//	NODE* next;
//};
//
//int insertKey(struct NODE* head, int newKey, struct  NODE** newfirst_add);
//void traverse(struct NODE* head);
//
//int main() {
//
//	struct NODE node[3];
//	
//	node[0].key = 100;
//	node[1].key = 250;
//	node[2].key = 467;
//
//	for (int i = 0; i < 3; i++) {
//		node[i].next = NULL;
//	}
//
//	for (int i = 0; i < 2; i++) {
//		node[i].next = &node[i+1];
//	}
//
//	struct NODE* head=NULL;
//	head = (struct NODE*)malloc(sizeof(struct NODE));
//	if (head == (NODE*)NULL) {
//		printf("malloc fail");
//		exit(1);
//	}
//	head->next = &node[0];
//
//	struct NODE** first_node = NULL;
//	first_node = (struct NODE**)malloc(sizeof(struct NODE*));
//	if (first_node == NULL) {
//		printf("malloc fail");
//		exit(1);
//	}
//	*first_node = &node[0];
//
//
//	//insert key-------------------------------------------
//	int keys[4] = {250,300,50,500};
//	for (int i = 0; i < 4; i++) {
//		printf("//---Inserting Key : %d\n", keys[i]);
//		if (insertKey(head, keys[i], first_node) == 0) {
//			printf("key inserted..\n");
//		}
//		else {
//			printf("key already exists..\n");
//		}
//	}
//	//------------------------------------------------------
//	//traverse----------------------------------------------
//	printf("\nTraversing the linked list\n");
//	traverse(head->next);
//	//------------------------------------------------------
//
//	free(head);
//	free(first_node);
//}
//
//int insertKey(struct NODE* head, int newKey, struct NODE** newfirst_add){
//
//	struct NODE* ptr = NULL;
//	struct NODE* prv_ptr =NULL;
//	int flag = 0;
//
//	ptr = head->next;
//	prv_ptr = head;
//
//	while (ptr != NULL) {
//		if (ptr->key == newKey) {
//			flag = -1;
//			break;
//		}
//		else if (ptr->key > newKey) {
//			flag = 0;
//			break;
//		}
//
//		prv_ptr = ptr;
//		ptr = ptr->next;
//	}
//
//	if (flag == 0) {
//		struct NODE* newNODE = NULL;
//		newNODE = (struct NODE*)malloc(sizeof(struct NODE));
//		if (newNODE == NULL) {
//			printf("malloc fail");
//			exit(1);
//		}
//		newNODE->key = newKey;
//		newNODE->next = ptr;
//		prv_ptr->next = newNODE;
//	}
//
//	if (prv_ptr->next == head->next) {
//		*newfirst_add = head->next;
//	}
//
//	return flag;
//}
//
//void traverse(struct NODE* head) {
//
//	struct NODE* ptr = NULL;
//	int ind = 0;
//	ptr = head;
//
//	while (ptr) {
//		printf("node[%d] key: %d\n", ind, ptr->key);
//		ind++;
//		ptr = ptr->next;
//	}
//}
