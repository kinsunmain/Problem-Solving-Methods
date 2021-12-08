//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//
//struct EMPLOYEE {
//	char name[10];
//	char fir_name[10];
//	int fee;
//	double fee2;
//	char numbers[20];
//};
//
//
//bool write_file(const char filename[], EMPLOYEE persons[], const int num_person);
//bool read_file(const char filename[], EMPLOYEE persons[], const int num_person);
//void copy(const EMPLOYEE *src, EMPLOYEE *dest);
//
//int main() {
//
//	EMPLOYEE origin_persons[5];
//	EMPLOYEE copy_persons[5];
//
//	origin_persons[0] = { "Anthony", "A.J.", 10031, 7.82, "12/18/62" };
//	origin_persons[1] = { "Burrows", "W.K.", 10067, 9.14, "6/9/63" };
//	origin_persons[2] = { "Fain", "B.D.", 10083, 8.79, "5/18/59" };
//	origin_persons[3] = { "Janney", "P.", 10095, 10.57, "9/28/62" };
//	origin_persons[4] = { "Smith", "G.J.", 10105, 8.50, "12/20/61" };
//
//
//
//	if (!write_file("employee.txt", origin_persons, 5)) {
//		printf("cannot write file");
//	}
//
//	if (!read_file("employee.txt", copy_persons, 5)) {
//		printf("cannot read file");
//	}
//
//	if (!write_file("employee2.txt", copy_persons, 5)) {
//		printf("cannot write file");
//	}
//
//
//}
//
//bool write_file(const char filename[], EMPLOYEE persons[], const int num_person) {
//
//	FILE* pfile;
//
//	pfile = fopen(filename, "w");
//
//	if (pfile == NULL) {
//		printf("cannot open file_write");
//		return -1;
//	}
//
//	for (int i = 0; i < num_person; i++) {
//		fprintf(pfile, "%s %s %d %lf %s\n", persons[i].name, persons[i].fir_name, persons[i].fee, persons[i].fee2, persons[i].numbers);
//	}
//
//	fclose(pfile);
//	return true;
//}
//
//bool read_file(const char filename[], EMPLOYEE persons[], const int num_person) {
//
//
//	FILE* pfile;
//
//	pfile = fopen(filename, "r");
//
//	if (pfile == NULL) {
//		printf("cannot open file_read");
//		return -1;
//	}
//	EMPLOYEE read_persons;
//	int num = 0;
//	while (fscanf(pfile, "%s %s %d %lf %s\n", &read_persons.name, &read_persons.fir_name, &read_persons.fee, &read_persons.fee2, &read_persons.numbers) == 5) {
//		copy(&read_persons, &persons[num]);
//		num++;
//	}
//	fclose(pfile);
//	return true;
//}
//
//void copy(const EMPLOYEE *src, EMPLOYEE *dest) {
//
//	strcpy(dest->name, src->name);
//	strcpy(dest->fir_name, src->fir_name);
//	dest->fee = src->fee;
//	dest->fee2 = src->fee2;
//	strcpy(dest->numbers, src->numbers);
//
//}
