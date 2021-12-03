#include "mydef.h"
#include "insert_linkedlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool insert_linkedlist(const PLAYER arr[], PLAYER* head, const int i) {

	PLAYER* p = head->next;
	PLAYER* perv = head;

	while (1) {
		if (p == NULL) break;
		perv = p;
		p = p->next;
	}

	PLAYER* newNODE;
	newNODE = (PLAYER*)malloc(sizeof(PLAYER));

	newNODE->backn = arr[i].backn;
	strcpy(newNODE->name, arr[i].name);
	newNODE->age = arr[i].age;
	newNODE->A_match = arr[i].A_match;
	newNODE->goal = arr[i].goal;


	perv->next = newNODE;
	newNODE->next = p;

	return true;
}