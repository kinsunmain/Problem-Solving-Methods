//#include <stdio.h>
//#include <stdlib.h>
//
//struct NODE
//{
//	int key;
//	struct NODE* next;
//};
//
//
//int main() {
//
//	NODE* node0 = NULL;
//	NODE* node1 = NULL;
//	NODE* node2 = NULL;
//
//
//	node0 = (struct NODE*)malloc(sizeof(struct NODE)); 
//	node1 = (struct NODE*)malloc(sizeof(struct NODE)); 
//	node2 = (struct NODE*)malloc(sizeof(struct NODE));
//
//	if (node0 == (NODE*)NULL) {
//		printf("malloc fail");
//		exit(1);
//	}
//	if (node1 == (NODE*)NULL) {
//		printf("malloc fail");
//		exit(1);
//	}
//	if (node2 == (NODE*)NULL) {
//		printf("malloc fail");
//		exit(1);
//	}
//
//	node0->key = 10;
//	node1->key = 10;
//	node2->key = 10;
//
//	node0->next = node1;
//	node1->next = node2;
//	node2->next = NULL;
//
//	struct NODE* ptr = NULL;
//	ptr = node0;
//
//	while (ptr != NULL) {
//		printf("%d ", ptr->key);
//		ptr = ptr->next;
//	}
//
//	free(node0);
//	free(node1);
//	free(node2);
//	return 0;
//}