#include <stdio.h>
#include <string>

struct ADDRESS
{
	char add_1[20];
	char add_2[20];
};

bool Read_file(const char filename[], ADDRESS add[]);
void copy(const ADDRESS* src, ADDRESS* dest);

int main() {

	ADDRESS add[500];


	if (!Read_file("address.txt", add)) {
		return -1;
	}

	for (int i = 0; i < 500; i++) {
		printf("%s\n", add[i].add_1);
	}


}

bool Read_file(const char filename[], ADDRESS add[]){

	ADDRESS read_address;

	FILE* pfile;
	pfile = fopen(filename, "r");

	if (pfile == NULL) {
		printf("Error: cannot read file");
		return -1;
	}

	int num=0;
	while (fscanf(pfile, "%s - %s   ", &read_address.add_1, &read_address.add_2 )== 2) {
		copy(&read_address, &add[num]);
		num++;
	}

	fclose(pfile);
	return true;
}

void copy(const ADDRESS* src, ADDRESS* dest) {

	for (int i = 0; i < 500; i++) {
		strcpy(dest[i].add_1, src[i].add_1);
		strcpy(dest[i].add_2, src[i].add_2);
	}
}