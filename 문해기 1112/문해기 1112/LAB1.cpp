#include <stdio.h>
#include <string>

struct ADDRESS
{
	char address1[20];
	char address2[20];
};

bool read_file(const char file_name[], ADDRESS address[]);
void copy(const ADDRESS* src, ADDRESS* dest);

int main() {

	ADDRESS address[501];

	if (!read_file("address.txt", address)) {
		printf("Error: cannot open file");
		return -1;
	}

	for (int i = 0; i < 500; i++) {
		printf("%s %s\n", address[i].address1, address[i].address2);
	}
	return 0;
}

bool read_file(const char file_name[], ADDRESS add[]) {

	FILE* pfile;
	pfile = fopen(file_name, "r");

	ADDRESS read_add;
	int num = 0;
	while (fscanf(pfile, "%s %s", &read_add.address1, &read_add.address2) == 2) {
		copy(&read_add, &add[num]);
		num++;
	}



	fclose(pfile);
	return true;
}

void copy(const ADDRESS* src, ADDRESS* dest) {

	for (int i = 0; i < 20; i++) {
		strcpy(dest[i].address1, src[i].address1);
		strcpy(dest[i].address2, src[i].address2);

	}
}