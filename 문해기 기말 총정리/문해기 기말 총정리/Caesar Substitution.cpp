#include <stdio.h>
#include <string.h>


struct STRING
{
	char str[200];
};


bool read_file(const char file_name[], STRING string[]);
bool cypher_write_file(const char file_name[], STRING string[], const int key);
bool decypher_write_file(const char file_name[], STRING string[], const int key);
void copy(const STRING* src, STRING* dest);


int main() {

	STRING string[11];
	int key = 3;

	if (!read_file("original.txt", string)) {
		printf("cannot read file");
	}

	if (!cypher_write_file("cypher_1.txt", string, key)) {
		printf("cannot write file");
	}

	if (!read_file("cypher_1.txt", string)) {
		printf("cannot read file");
	}

	if (!decypher_write_file("decrypted_1.txt", string, key)) {
		printf("cannot write file");
	}

	return 0;
}


bool read_file(const char file_name[], STRING string[]) {

	FILE* pfile;
	pfile = fopen(file_name, "r");

	STRING read_file;
	int num=0;
	while (fgets(read_file.str,200,pfile)) {
		copy(&read_file, &string[num]);
		num++;
	}
	fclose(pfile);
	return true;
}
bool cypher_write_file(const char file_name[], STRING string[],const int key) {

	FILE* pfile;
	int j;
	pfile = fopen(file_name, "w");

	for (int i = 0; i < 11; i++) {
		for (j=0;string[i].str[j] != '\0';j++){
			if (string[i].str[j] >= 'A' & string[i].str[j] <= 'Z') {
				string[i].str[j] = string[i].str[j] - 'A' + 26 + key;
				string[i].str[j] = string[i].str[j] % 26;
				string[i].str[j] = string[i].str[j] + 'A';
			}
			else if (string[i].str[j] >= 'a' & string[i].str[j] <= 'z') {
				string[i].str[j] = string[i].str[j] - 'a' + 26 + key;
				string[i].str[j] = string[i].str[j] % 26;
				string[i].str[j] = string[i].str[j] + 'a';
			}
		}
		string[i].str[j] = '\0';

	}

	for (int i = 0; i < 11; i++) {
		fprintf(pfile, "%s", string[i].str);
	}
	fclose(pfile);
	return true;
}
bool decypher_write_file(const char file_name[], STRING string[], const int key) {

	FILE* pfile;
	int j;
	pfile = fopen(file_name, "w");

	for (int i = 0; i < 11; i++) {
		for (j = 0; string[i].str[j] != '\0'; j++) {
			if (string[i].str[j] >= 'A' & string[i].str[j] <= 'Z') {
				string[i].str[j] = string[i].str[j] - 'A' + 26 - key;
				string[i].str[j] = string[i].str[j] % 26;
				string[i].str[j] = string[i].str[j] + 'A';
			}
			else if (string[i].str[j] >= 'a' & string[i].str[j] <= 'z') {
				string[i].str[j] = string[i].str[j] - 'a' + 26 - key;
				string[i].str[j] = string[i].str[j] % 26; 
				string[i].str[j] = string[i].str[j] + 'a';
			}
		}
		string[i].str[j] = '\0';
	}

	for (int i = 0; i < 11; i++) {
		fprintf(pfile, "%s", string[i].str);
	}
	fclose(pfile);
	return true;
}


void copy(const STRING* src, STRING* dest) {
	strcpy(dest->str, src->str);
}