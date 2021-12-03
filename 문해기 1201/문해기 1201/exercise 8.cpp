//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "mydef.h"
//#include "insert_linkedlist.h"
//#include "read_file.h"
//#include "copy.h"
//#include "trav.h"
//
//struct PLAYER
//{
//	int backn;
//	char name[20];
//	int age;
//	int A_match;
//	int goal;
//	PLAYER* next;
//};
//
//bool insert_linkedlist(const PLAYER arr[], PLAYER * head,const int i);
//bool read_file(const char filename[], PLAYER* arr);
//void copy(const PLAYER src[], PLAYER* dest);
//void trav(const PLAYER* head);
//
//int main() {
//
//	PLAYER* head;
//	head = (PLAYER*)malloc(sizeof(PLAYER));
//	head->next = NULL;
//
//	PLAYER arr[7];
//	
//
//	if (!read_file("player.txt", arr)) {
//		printf("cannot read file");
//		exit(1);
//	}
//
//	for (int i = 0; i < 7; i++) {
//		insert_linkedlist(arr, head, i);
//	}
//
//	trav(head);
//
//}
//
//bool insert_linkedlist(const PLAYER arr[], PLAYER* head, const int i) {
//
//	PLAYER* p = head->next;
//	PLAYER* perv= head;
//	
//	while(1){
//		if (p == NULL) break;
//		perv = p;
//		p = p->next;
//	}
//
//	PLAYER* newNODE;
//	newNODE = (PLAYER*)malloc(sizeof(PLAYER));
//	
//	newNODE->backn = arr[i].backn;
//	strcpy(newNODE->name, arr[i].name);
//	newNODE->age = arr[i].age;
//	newNODE->A_match = arr[i].A_match;
//	newNODE->goal = arr[i].goal;
//	
//
//	perv->next = newNODE;
//	newNODE->next = p;
//
//	return true;
//}
//
//bool read_file(const char filename[], PLAYER *arr) {
//
//	FILE* pfile;
//	pfile = fopen(filename, "r");
//
//	if (pfile == NULL) {
//		printf("cannot open file");
//		return false;
//	}
//
//	PLAYER read_file;
//	int num = 0;
//
//	while (fscanf(pfile, "%d/%[^/]/%d/%d/%d", &read_file.backn, &read_file.name, &read_file.age, &read_file.A_match, &read_file.goal) == 5) {
//		copy(&read_file, &arr[num]);
//		num++;
//	}
//
//	return true;
//}
//
//void copy(const PLAYER* src, PLAYER* dest) {
//
//	dest->backn = src->backn;
//	strcpy(dest->name, src->name);
//	dest->age = src->age;
//	dest->A_match = src->A_match;
//	dest->goal = src->goal;
//}
//
//void trav(const PLAYER* head) {
//
//	PLAYER* p = head->next;
//	
//	while (p) {
//		if (p->age >= 25 && p->age <= 29 && p->goal >= 5 && p->A_match >= 30) {
//			printf("%d/%s/%d/%d/%d\n", p->backn, p->name, p->age, p->A_match, p->goal);
//		}
//		p = p->next;
//	}
//
//}
