#include <stdio.h>
#include <string.h>


struct PERSON
{
	char name[10];
	int age;
	char hobby[10];
};

bool read_file(const char file_name[], PERSON person[]);
bool write_file_age(const char file_name[], PERSON person[]);
bool write_file_hobby(const char file_name[], PERSON person[]);
void copy(const PERSON* src, PERSON* dest);

int main() {

	PERSON person[20];

	if (!read_file("personal.txt", person)) {
		printf("cannot read file");
	}

	if (!write_file_age("age.txt", person)) {
		printf("cannot write file");
	}

	if (!write_file_hobby("hobby.txt", person)) {
		printf("cannot write file");
	}

}


bool read_file(const char file_name[], PERSON person[]) {

	FILE* pfile;

	pfile = fopen(file_name, "r");

	PERSON read_file;
	int num = 0;
	while (fscanf(pfile, "%s %d %s", &read_file.name, &read_file.age, &read_file.hobby) == 3) {
		copy(&read_file, &person[num]);
		num++;
	}

	fclose(pfile);
	return true;
}
bool write_file_age(const char file_name[], PERSON person[]) {

	FILE* pfile;

	pfile = fopen(file_name, "w");

	for (int i = 0; i < 20; i ++ ) {
		fprintf(pfile, "%s %d\n", person[i].name, person[i].age);
	}
	fclose(pfile);
	return true;

}
bool write_file_hobby(const char file_name[], PERSON person[]) {

	FILE* pfile;

	pfile = fopen(file_name, "w");

	for (int i = 0; i < 20; i++) {
		fprintf(pfile, "%s %s\n", person[i].name, person[i].hobby);
	}
	fclose(pfile);
	return true;

}
void copy(const PERSON* src, PERSON* dest) {

	strcpy(dest->name, src->name);
	dest->age = src->age;
	strcpy(dest->hobby, src->hobby);
}