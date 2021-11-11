//#include <stdio.h>
//#include <string>
//
//
//struct PERSONAL
//{
//	char name[20];
//	int age;
//	char hobby[20];
//};
//
//bool read_file(const char file_name[], PERSONAL persons[]);
//bool write_file_age(const char file_name[], PERSONAL persons[]);
//bool write_file_hobby(const char file_name[], PERSONAL persons[]);
//void copy(const PERSONAL* read_person, PERSONAL* persons);
//
//
//int main() {
//
//	PERSONAL persons[20];
//
//
//	if (!read_file("personal.txt", persons)) {
//		return -1;
//	}
//
//
//	if (!write_file_age("age.txt", persons)) {
//		return -1;
//	}
//	if (!write_file_hobby("hobby.txt", persons)) {
//		return -1;
//	}
//
//	return 0;
//
//}
//
//bool read_file(const char file_name[], PERSONAL persons[]) {
//
//	FILE* pfile;
//
//	pfile = fopen(file_name, "r");
//	if (pfile == NULL) {
//		printf("Error: cannot read file");
//		return -1;
//	}
//		
//	PERSONAL read_person;
//
//	int num = 0;
//	while (fscanf(pfile, "%s %d %s", &read_person.name, &read_person.age, &read_person.hobby) == 3) {
//		copy(&read_person, &persons[num]);
//		num++;
//	}
//	fclose(pfile);
//	return true;
//}
//
//bool write_file_age(const char file_name[20], PERSONAL persons[]) {
//
//
//	FILE* pfile;
//	pfile = fopen(file_name, "w");
//
//	if (pfile == NULL) {
//		printf("Error: cannot open file");
//		return -1;
//	}
//
//	for (int i = 0; i < 20; i++) {
//		fprintf(pfile, "%s %d\n", persons[i].name, persons[i].age);
//	}
//
//
//	
//	fclose(pfile);
//
//	return true;
//}
//bool write_file_hobby(const char file_name[20], PERSONAL persons[]) {
//
//
//	FILE* pfile;
//	pfile = fopen(file_name, "w");
//
//	if (pfile == NULL) {
//		printf("Error: cannot open file");
//		return -1;
//	}
//
//	for (int i = 0; i < 20; i++) {
//		fprintf(pfile, "%s %s\n", persons[i].name, persons[i].hobby);
//	}
//
//
//
//	fclose(pfile);
//
//	return true;
//}
//void copy(const PERSONAL* read_person, PERSONAL* persons) {
//	strcpy(persons->name, read_person->name);
//	strcpy(persons->hobby, read_person->hobby);
//	persons->age = read_person->age;
//}