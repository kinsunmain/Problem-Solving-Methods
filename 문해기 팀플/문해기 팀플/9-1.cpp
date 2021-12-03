//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//struct REGISTRATION {
//	int tag;
//	char date[10];
//	char fee[4];
//	char name[25];
//	int age;
//	char organization[35];
//	char job[15];
//};
//
//
//
//
//bool read_file(const char file_name[], REGISTRATION persons[]);	//read file
//void copy(const REGISTRATION* read_person, REGISTRATION* persons);	//save in struct
//void paik_registere_arr(REGISTRATION persons[], int paik_tag);	// paik_추가_배열버전
//
//int main() {
//	 
//	REGISTRATION persons[31];
//	int paik_tag = 30;
//
//
//	if (!read_file("registraion_data.txt", persons)) {	//파일 읽어와서 구조체에 저장
//		return -1;
//	}
//
//
//
//	paik_registere_arr(persons, paik_tag); 
//	for (int i = 0; i < 30; i++) {			//배열의 맨 마지막 부분인 29번째에 부분에 paik 추가해서 프린트
//		printf("%d/%s/%s/%s/%d/%s/%s\n", persons[i].tag, persons[i].date, persons[i].fee, persons[i].name, persons[i].age, persons[i].organization, persons[i].job);
//	}
//}
//
//
//bool read_file(const char file_name[], REGISTRATION persons[]) {
//
//	FILE* pfile;
//
//	pfile = fopen(file_name, "r");
//	if (pfile == NULL) {
//		printf("Error: cannot read file");
//		return -1;
//	}
//
//	char read_file[100];
//
//	REGISTRATION read_person;
//
//	int num = 0;
//	while (fscanf(pfile, "%d / %[^/] / %[^/] / %[^/] / %d / %[^/] / %[^\n]",&read_person.tag, &read_person.date, &read_person.fee, &read_person.name,&read_person.age, &read_person.organization, &read_person.job) != EOF) {
//		copy(&read_person, &persons[num]);
//		num++;
//	}
//	fclose(pfile);
//	return true;
//}
//
//void copy(const REGISTRATION* read_person, REGISTRATION* persons) {	//구조체에 저장하는부분
//	persons->tag = read_person->tag;
//	strcpy(persons->date, read_person->date);
//	strcpy(persons->fee, read_person->fee);
//	strcpy(persons->name, read_person->name);
//	persons->age = read_person->age;
//	strcpy(persons->organization, read_person->organization);
//	strcpy(persons->job, read_person->job);
//}
//
//void paik_registere_arr(REGISTRATION persons[], int paik_tag) {	//paik 저장
//
//	persons[30].tag = paik_tag;
//	strcpy(persons[30].date, "2020-11-30");
//	strcpy(persons[30].fee, "yes");
//	strcpy(persons[30].name, "Gildong Paik");
//	persons[30].age = 35;
//	strcpy(persons[30].organization, "Gachon University");
//	strcpy(persons[30].job, "Student");
//}
//
