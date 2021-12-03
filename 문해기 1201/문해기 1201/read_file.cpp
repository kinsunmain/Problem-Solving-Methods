#include <stdio.h>
#include "mydef.h"
#include "read_file.h"
#include "copy.h"

bool read_file(const char filename[], PLAYER* arr) {

	FILE* pfile;
	pfile = fopen(filename, "r");

	if (pfile == NULL) {
		printf("cannot open file");
		return false;
	}

	PLAYER read_file;
	int num = 0;

	while (fscanf(pfile, "%d/%[^/]/%d/%d/%d", &read_file.backn, &read_file.name, &read_file.age, &read_file.A_match, &read_file.goal) == 5) {
		copy(&read_file, &arr[num]);
		num++;
	}

	return true;
}