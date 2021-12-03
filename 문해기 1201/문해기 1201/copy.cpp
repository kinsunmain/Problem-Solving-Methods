#include "mydef.h"
#include "copy.h"
#include <stdio.h>
#include <string.h>



void copy(const PLAYER* src, PLAYER* dest) {

	dest->backn = src->backn;
	strcpy(dest->name, src->name);
	dest->age = src->age;
	dest->A_match = src->A_match;
	dest->goal = src->goal;
}