//#include <stdio.h>
//#include <string.h>
//
//struct VOTE {
//	char region[20];
//	int age;
//	char candidate[20];
//};
//
//bool read_file(const char file_name[], VOTE persons[]);
//void copy(const VOTE* src, VOTE* dest);
//void calc(VOTE persons[]);
//
//int main() {
//
//	VOTE persons[2000];
//
//	if (!read_file("vote.txt", persons)) {
//		printf("cannot read file");
//		return -1;
//	}
//
//	calc(persons);
//
//	return 0;
//}
//
//bool read_file(const char file_name[], VOTE persons[]) {
//
//	FILE* pfile;
//
//	pfile = fopen(file_name, "r");
//
//
//	VOTE read_person;
//
//	int num = 0;
//	while (fscanf(pfile, "%s %d %s", &read_person.region, &read_person.age, &read_person.candidate) == 3) {
//		copy(&read_person, &persons[num]);
//		num++;
//	}
//	fclose(pfile);
//	return true;
//}
//
//void copy(const VOTE* src, VOTE* dest) {
//
//	strcpy(dest->region, src->region);
//	dest->age = src->age;
//	strcpy(dest->candidate, src->candidate);
//}
//
//void calc(VOTE persons[]) {
//
//	double cnt_Lincoln = 0;
//	double cnt_Washington = 0;
//	double cnt_Roosevelt = 0;
//
//	for (int i = 0; i < 2000; i++) {
//
//		if (!strcmp(persons[i].candidate, "Lincoln")) {
//			cnt_Lincoln++;
//		}
//		if (!strcmp(persons[i].candidate, "Washington")) {
//			cnt_Washington++;
//		}
//		if (!strcmp(persons[i].candidate, "Roosevelt")) {
//			cnt_Roosevelt++;
//		}
//	}
//
//	cnt_Lincoln = (cnt_Lincoln / 2000) * 100;	
//	cnt_Roosevelt = (cnt_Roosevelt / 2000) * 100;
//	cnt_Washington = (cnt_Washington / 2000) * 100;
//
//	printf("Lincoln : %lf Washington : %lf Roosevelt : %lf", cnt_Lincoln, cnt_Washington, cnt_Roosevelt);
//}
