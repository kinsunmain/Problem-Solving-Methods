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
//
//bool read_file(const char file_name[20], PERSONAL persons[]);
//bool write_file(const char file_name[20], PERSONAL grouped[], int* cnt1, int* cnt2, int* cnt3, int* cnt4);
//void copy(const PERSONAL* read_person, PERSONAL* persons);
//void group_by_age(const PERSONAL* persons, PERSONAL * grouped, int *cnt1, int* cnt2, int* cnt3, int* cnt4);
//
//
//
//int main() {
//
//
//	PERSONAL persons[20];
//	PERSONAL grouped[20];
//
//
//	if (!read_file("personal.txt", persons)) {
//		return -1;
//	}
//
//
//	int cnt1=0;
//	int cnt2=0;
//	int cnt3=0;
//	int cnt4=0;
//
//	group_by_age(persons,grouped, &cnt1, &cnt2, &cnt3, &cnt4);
//	write_file("output.txt", grouped, &cnt1, &cnt2, &cnt3, &cnt4);
//
//}
//
//bool read_file(const char file_name[], PERSONAL persons[]) {
//
//	FILE* pfile;
//
//	pfile = fopen(file_name, "r");
//
//	PERSONAL read_person;
//
//	int num=0;
//	while (fscanf(pfile, "%s %d %s", &read_person.name, &read_person.age, &read_person.hobby) == 3) {
//		copy(&read_person, &persons[num]);
//		num++;
//	}
//	fclose(pfile);
//	return true;
//}
//
//void copy(const PERSONAL *read_person, PERSONAL *persons) {
//	strcpy(persons->name, read_person->name);
//	strcpy(persons->hobby, read_person->hobby);
//	persons->age = read_person->age;
//}
//
//
//void group_by_age(const PERSONAL* persons, PERSONAL* grouped, int* cnt1, int* cnt2, int* cnt3, int* cnt4){
//
//	
//
//	for (int i = 0; i < 20; i++) {
//		if (persons[i].age < 20) {
//			*cnt1=*cnt1+1;
//		}
//		else if (persons[i].age < 30) {
//			*cnt2 = *cnt2 + 1;
//		}
//		else if (persons[i].age < 40) {
//			*cnt3 = *cnt3 + 1;
//		}
//		else {
//			*cnt4 = *cnt4 + 1;
//		}
//	}
//
//	*cnt4 = *cnt1 + *cnt2 + *cnt3;
//	*cnt3 = *cnt1 + *cnt2;
//	*cnt2 = *cnt1;
//	*cnt1 = 0;
//
//	for (int i = 0; i < 20; i++) {
//		if (persons[i].age < 20){
//			copy(&persons[i], &grouped[*cnt1]);
//			(*cnt1)++;
//		}
//		else if (persons[i].age < 30){
//			copy(&persons[i], &grouped[*cnt2]);
//			(*cnt2)++;
//		}
//		else if (persons[i].age < 40){
//			copy(&persons[i], &grouped[*cnt3]);
//			(*cnt3)++;
//		}
//		else {
//			copy(&persons[i], &grouped[*cnt4]);
//			(*cnt4)++;
//		}
//	}
//
//
//}
//
//bool write_file(const char file_name[20], PERSONAL grouped[], int* cnt1, int* cnt2, int* cnt3, int* cnt4){
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
//
//
//	fprintf(pfile, "Age from 10 to 19\n");
//	fprintf(pfile, "-------------------\n");
//	for (int i = 0; i < *cnt1; i++) {
//		fprintf(pfile, "%s %d %s\n", grouped[i].name, grouped[i].age, grouped[i].hobby);
//	}
//	fprintf(pfile, "\n\nAge from 20 to 29\n");
//	fprintf(pfile, "-------------------\n");
//	for (int i = *cnt1; i < *cnt2; i++) {
//		fprintf(pfile, "%s %d %s\n", grouped[i].name, grouped[i].age, grouped[i].hobby);
//	}
//	fprintf(pfile, "\n\nAge from 30 to 39\n");
//	fprintf(pfile, "-------------------\n");
//	for (int i = *cnt2; i < *cnt3; i++) {
//		fprintf(pfile, "%s %d %s\n", grouped[i].name, grouped[i].age, grouped[i].hobby);
//	}
//	fprintf(pfile, "\n\nAge from 40 to 49\n");
//	fprintf(pfile, "-------------------\n");
//	for (int i = *cnt3; i <*cnt4; i++) {
//		fprintf(pfile, "%s %d %s\n", grouped[i].name, grouped[i].age, grouped[i].hobby);
//	}
//	fclose(pfile);
//
//	return true;
//}