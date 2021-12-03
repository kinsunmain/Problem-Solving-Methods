//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//struct REGISTRATION {
//	int tag;
//	char date[11];
//	char fee[4];
//	char name[25];
//	int age;
//	char organization[35];
//	char job[15];
//};
//
//
//bool write_last10_file(const char file_name[20], REGISTRATION grouped[]);
//bool read_file(const char file_name[], REGISTRATION persons[]);
//void copy(const REGISTRATION* read_person, REGISTRATION* persons);
//void paik_registere_arr(REGISTRATION* persons, int paik_tag);
//int check_sum(REGISTRATION persons[],int i);
//
//int main() {
//	 
//	REGISTRATION persons[31];
//	int paik_tag = 30;	//30으로 임의로 지정했습니다.
//
//
//	if (!read_file("registraion_data.txt", persons)) {
//		return -1;
//	}
//
//	paik_registere_arr(persons, paik_tag);
//	
//	
//	for (int i = 0; i < 30; i++) {
//		printf("%d/%s/%s/%s/%d/%s/%s\n", persons[i].tag, persons[i].date, persons[i].fee, persons[i].name, persons[i].age, persons[i].organization, persons[i].job);
//	}
//	printf("===============\n");
//
//	write_last10_file("copy.txt", persons);
//
//	REGISTRATION copyed[11];
//	if (!read_file("copy.txt", copyed)) {
//		return -1;
//	}
//	
//	printf("copyed check_sum = %d", check_sum(copyed,0));
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
//
//	REGISTRATION read_person;
//
//	int num = 0;
//	while (fscanf(pfile, "%d / %[^/] / %[^/] / %[^/] / %d / %[^/] / %[^\n]",&read_person.tag, &read_person.date, &read_person.fee, &read_person.name,&read_person.age, &read_person.organization, &read_person.job) == 7) {
//		copy(&read_person, &persons[num]);
//		num++;
//	}
//	fclose(pfile);
//	return true;
//}
//
//void copy(const REGISTRATION* read_person, REGISTRATION* persons) {
//	persons->tag = read_person->tag;
//	strcpy(persons->date, read_person->date);
//	strcpy(persons->fee, read_person->fee);
//	strcpy(persons->name, read_person->name);
//	persons->age = read_person->age;
//	strcpy(persons->organization, read_person->organization);
//	strcpy(persons->job, read_person->job);
//}
//
//void paik_registere_arr(REGISTRATION persons[], int paik_tag) {
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
//int check_sum(REGISTRATION persons[], int i) {	//checksum 하는부분, i로 시작점 받기
//
//	int checksum = 0;
//	int t = i;
//	while(t != i+10){
//		for (int j = 0; persons[t].name[j] != '\0'; j++) {
//			checksum ^= persons[t].name[j];
//		}
//		t++;
//	}
//
//	return checksum;
//}
//
//
//bool write_last10_file(const char file_name[20], REGISTRATION persons[]) {
//
//	FILE* pfile;
//	pfile = fopen(file_name, "w");
//
//	if (pfile == NULL) {
//		printf("Error: cannot open file");
//		return -1;
//	}
//
//	for (int i = 20; i < 30; i++) {
//		fprintf(pfile, "%d/%s/%s/%s/%d/%s/%s\n", persons[i].tag, persons[i].date, persons[i].fee, persons[i].name, persons[i].age, persons[i].organization, persons[i].job );
//	}
//
//	fprintf(pfile,"checksum is %d", check_sum(persons,20));
//
//	fclose(pfile);
//	return true;
//}