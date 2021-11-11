//#include <stdio.h>
//#include <string.h>
//
//struct NODE
//{
//	char key[20];
//	struct NODE* next;
//};
//
//
//int main() {
//
//	NODE nodes[5];
//
//	strcpy_s(nodes[0].key, "aa");
//	strcpy_s(nodes[1].key, "bb");
//	strcpy_s(nodes[2].key, "cc");
//	strcpy_s(nodes[3].key, "dd");
//	strcpy_s(nodes[4].key, "ee");
//
//	for (int i = 0; i < 5; i++) {
//		nodes[i].next = NULL;
//	}
//
//	for (int i = 0; i < 4; i++) {
//		nodes[i].next = &nodes[i+1];
//	}
//
//	NODE* ptr;
//	ptr = &nodes[0];
//
//	while (ptr->next != NULL) {
//		printf("%s ", ptr->key);
//		ptr = ptr->next;
//	}
//}