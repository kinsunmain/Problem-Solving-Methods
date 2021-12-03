#include "trav.h"
#include "mydef.h"
#include <stdio.h>

void trav(const PLAYER* head) {

	PLAYER* p = head->next;

	while (p) {
		if (p->age >= 25 && p->age <= 29 && p->goal >= 5 && p->A_match >= 30) {
			printf("%d/%s/%d/%d/%d\n", p->backn, p->name, p->age, p->A_match, p->goal);
		}
		p = p->next;
	}

}