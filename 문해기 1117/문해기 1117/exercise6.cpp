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
//	NODE node[4];
//
//	node[0].key = 100;
//	node[1].key = 250;
//	node[2].key = 467;
//	node[3].key = 300;
//
//	node[0].next = NULL;
//	node[1].next = NULL;
//	node[2].next = NULL;
//	node[3].next = NULL;
//
//	for (int i = 0; i < 2; i++) {
//		node[i].next = &node[i + 1];
//	}
//	//------------------------------------------
//	NODE* ptr = NULL;
//	ptr = &node[0];
//	int ind = 0;
//	
//	while (ptr != NULL) {
//		if (node[3].key < ptr->key) {
//			node[3].next = ptr;
//			node[ind-1].next = &node[3];
//		}
//		ind++;
//		ptr = ptr->next;
//	}
//
//	ptr = &node[0];
//	while (ptr != NULL) {
//		printf("%d ", ptr->key);
//		ptr = ptr->next;
//	}
//
//	////---------------------------------
//	//struct NODE* ptr, * old_ptr = NULL;
//	//int newkey, fail = -1;
//	//node[3].key = newkey = 300;
//	//node[3].next = NULL;
//	//// search the linked list
//	//ptr = &node[0];
//	//while (ptr)
//	//{
//	//	if (ptr->key == newkey)
//	//	{
//	//		printf("key already exists");
//	//		break;
//	//	}
//	//	if (ptr->key < newkey)
//	//	{
//	//		old_ptr = ptr;
//	//		ptr = ptr->next;
//	//	}
//	//	else
//	//	{
//	//		old_ptr->next = &node[3];
//	//		node[3].next = ptr;
//	//		printf("key inserted");
//	//		break;
//	//	}
//	//}
//
//
//	return 0;
//}