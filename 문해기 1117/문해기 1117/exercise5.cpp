//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct NODE* nd_next;
//
//struct NODE
//{
//	int key;
//	nd_next next;
//
//};
//
//
//int main() {
//
//	NODE node[3];
//
//	node[0].key = 100;
//	node[1].key = 250;
//	node[2].key = 467;
//
//	node[0].next = NULL;
//	node[1].next = NULL;
//	node[2].next = NULL;
//
//	for (int i = 0; i < 2; i++) {
//		node[i].next = &node[i + 1];
//	}
//
//	NODE* ptr = NULL;
//	ptr = &node[0];
//	int key = 250;
//	int found = 0;
//	while (ptr != NULL) {
//		if (ptr->key == key) {
//			found = 1;
//			break;
//		}
//		ptr = ptr->next;
//	}
//	if (found) {
//		printf("found key");
//	}
//	else printf("not found key");
//
//	return 0;
//}