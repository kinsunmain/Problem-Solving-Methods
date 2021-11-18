#include <stdio.h>
#include <string.h>

#define key 3

struct ORIGIN
{
	char string[128];
};


bool read_file(const char file_name[], ORIGIN file[], int *num);
bool write_file(const char file_name[], ORIGIN file[],int num);
void file_cypher(ORIGIN cypher[], int num);
void file_decrypted(ORIGIN decrypted[], int num);
void copy(const ORIGIN *src, ORIGIN *dest);


int main() {

	ORIGIN origin[200];
	ORIGIN cypher[200];
	ORIGIN decrypted[200];


	int num = 0;
	if (!read_file("original.txt", origin,&num)) {			
		printf("cannot read file");
	}
	
	for (int i = 0; i < num; i++) {							
		copy(&origin[i], &cypher[i]);
	}


	int word_count = num-1;
	
	file_cypher(cypher, word_count);						

	if (!write_file("cypher.txt", cypher, word_count)) {	
		printf("cannot read file");
	}


	num = 0;
	if (!read_file("cypher.txt", decrypted, &num)) {		
		printf("cannot read file");
	}

	file_decrypted(decrypted, word_count);						

	if (!write_file("decrypted.txt", decrypted, word_count)) {	
		printf("cannot read file");
	}

	return 0;
}

bool read_file(const char file_name[], ORIGIN file[], int* num){

	FILE* pfile;

	pfile = fopen(file_name, "r");

	ORIGIN read_ori;

	*num = 0;
	while (!feof(pfile)) {
		fgets(read_ori.string, 128, pfile);
		copy(&read_ori, &file[*num]);
		*num = *num+1;
	}

	fclose(pfile);
	return true;
}

bool write_file(const char file_name[], ORIGIN file[], int num){

	FILE* pfile;

	pfile = fopen(file_name, "w");
	
	if (pfile == NULL)
		printf("cannot open file");
	
	
	for (int i = 0; i < num; i++) {
		fprintf(pfile, "%s", &file[i].string);
	}

	fclose(pfile);
	return true;
}

void file_cypher(ORIGIN cypher[], int num) {

	int i, j;

	for (i = 0; i < num; i++) {
		for (j = 0; cypher[i].string[j] != '\0'; j++) {
			if (cypher[i].string[j] >= 'a' && cypher[i].string[j] <= 'z') {  //a = 97
				cypher[i].string[j] -= 'a';
				if (cypher[i].string[j] + key < 0)
					cypher[i].string[j] += 26;
				cypher[i].string[j] = (cypher[i].string[j] + key) % 26;
				cypher[i].string[j] += 'a';
			}
			else if (cypher[i].string[j] >= 'A' && cypher[i].string[j] <= 'Z') {
				cypher[i].string[j] -= 'A';
				if (cypher[i].string[j] + key < 0)
					cypher[i].string[j] += 26;
				cypher[i].string[j] = (cypher[i].string[j] + key) % 26;
				cypher[i].string[j] += 'A';
			}
		}
	}

	cypher[i].string[j] = '\0';

}

void file_decrypted(ORIGIN decrypted[], int num){

	int i, j;

	for (i = 0; i < num; i++) {
		for (j = 0; decrypted[i].string[j] != '\0'; j++) {
			if (decrypted[i].string[j] >= 'a' && decrypted[i].string[j] <= 'z') {  
				decrypted[i].string[j] -= 'a';
				if (decrypted[i].string[j] - key < 0)
					decrypted[i].string[j] += 26;
				decrypted[i].string[j] = (decrypted[i].string[j] - key) % 26;
				decrypted[i].string[j] += 'a';
			}
			else if (decrypted[i].string[j] >= 'A' && decrypted[i].string[j] <= 'Z') {
				decrypted[i].string[j] -= 'A';
				if (decrypted[i].string[j] - key < 0)
					decrypted[i].string[j] += 26;
				decrypted[i].string[j] = (decrypted[i].string[j] - key) % 26;
				decrypted[i].string[j] += 'A';
			}
		}
	}
}

void copy(const ORIGIN* src, ORIGIN* dest) {

	strcpy(dest->string,src->string);
}