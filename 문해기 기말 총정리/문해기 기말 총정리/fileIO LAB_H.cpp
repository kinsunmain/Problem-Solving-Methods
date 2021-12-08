//#include <stdio.h>
//#include <string.h>
//
//struct PERSONS
//{
//	char name[10];
//	int age;
//	char hobby[10];
//};
//
//bool read_file(const char file_name[], PERSONS person[], int &num);
//bool write_file(const char file_name[], PERSONS personp[], int& num);
//void copy(const PERSONS* src, PERSONS* dest);
//void decompose(const PERSONS person[], PERSONS decompose[], int& num);
//void print_decompose(const PERSONS person[], int&num);
//
//
//int main() {
//
//	PERSONS person[20];
//	PERSONS com_person[20];
//	int numPerson = 0;
//
//	if (!read_file("personal.txt", person, numPerson)) {
//		printf("cannot readfile");
//	}
//
//	decompose(person, com_person,numPerson);
//
//	if (!write_file("personal_compose.txt", com_person, numPerson)) {
//		printf("cannot writefile");
//	}
//	print_decompose(com_person, numPerson);
//
//}
//
//bool read_file(const char file_name[], PERSONS person[], int& num) {
//
//	FILE* pfile;
//
//	pfile = fopen(file_name, "r");
//
//	PERSONS readperson;
//
//	num = 0;
//	while (fscanf(pfile, "%s %d %s", &readperson.name, &readperson.age, &readperson.hobby) == 3) {
//		copy(&readperson, &person[num]);
//		num++;
//	}
//
//	fclose(pfile);
//	return true;
//}
//
//void copy(const PERSONS* src, PERSONS* dest) {
//	strcpy(dest->name, src->name);
//	dest->age = src->age;
//	strcpy(dest->hobby, src->hobby);
//}
//
//bool write_file(const char file_name[], PERSONS person[], int & num) {
//
//	FILE* pfile;
//	pfile = fopen(file_name, "w");
//
//	for (int i = 0; i < num; i++) {
//		fprintf(pfile, "%s %d %s\n", person[i].name, person[i].age, person[i].hobby);
//	}
//
//	fclose(pfile);
//	return true;
//}
//
//void decompose(const PERSONS person[], PERSONS decompose[], int& num) {
//
//	int age10 = 0;
//	int age20 = 0;
//	int age30 = 0;
//	int age40 = 0;
//
//	for (int i = 0; i < num; i++) {
//		if (person[i].age < 20) age10++;
//		else if (person[i].age < 30) age20++;
//		else if (person[i].age < 40) age30++;
//		else age40++;
//	}
//	age40 = age10 + age20 + age30;
//	age30 = age10 + age20;
//	age20 = age10;
//	age10 = 0;
//
//	for (int i = 0; i < num; i++) {
//		if (person[i].age < 20) {
//			decompose[age10] = person[i];
//			age10++;
//		}
//		else if (person[i].age < 30) {
//			decompose[age20] = person[i];
//			age20++;
//		}
//		else if (person[i].age < 40) {
//			decompose[age30] = person[i];
//			age30++;
//		}
//		else {
//			decompose[age40] = person[i];
//			age40++;
//		}
//	}
//}
//
//void print_decompose(const PERSONS person[], int& num) {
//
//	for (int i = 0; i < num; i++) {
//	
//		if (person[i].age / 10 != person[i - 1].age / 10) printf("--------------\n\n");
//		printf("%s %d %s\n", person[i].name, person[i].age, person[i].hobby);
//
//	}
//}
