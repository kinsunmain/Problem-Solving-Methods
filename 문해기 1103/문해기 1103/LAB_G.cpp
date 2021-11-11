//#include <stdio.h>
//#include <string>
//
//
//struct PERSONAL
//{
//	char n[20];
//	int ag;
//	char hb[20];
//};
//
//bool read_FILE(char const *file_name, PERSONAL ps[], int *num_person);
//bool write_FILE(char const* file_name, const PERSONAL ps[], int* num_person);
//void copy(const PERSONAL* soc, PERSONAL* dest);
//void group_by_age(const PERSONAL original[], const int * num_person, PERSONAL grouped[]);
//void group_by_hobby(const PERSONAL original[], const int* num_person, PERSONAL grouped[]);
//
//
//int main() {
//
//	struct PERSONAL ps[50];
//	int num_person=0;
//
//	if (!read_FILE("personal.txt", ps, &num_person)) {
//		return -1;
//	}
//
//	PERSONAL group_age[50];
//	PERSONAL group_hobby[50];
//
//
//	group_by_age(ps, &num_person, group_age);
//	if (!write_FILE("age.txt", group_age, &num_person)) {
//		return -1;
//	}
//	group_by_hobby(ps, &num_person, group_hobby);
//	if (!write_FILE("hobby.txt", group_hobby, &num_person)) {
//		return -1;
//	}
//
//
//
//
//
//
//}
//
//bool read_FILE(char const* file_name, PERSONAL ps[], int* num_person){
//
//	FILE* pFILE;
//
//	pFILE = fopen(file_name, "r");
//
//	if (pFILE == NULL) {
//		printf("Error: Cannot read file");
//		return false;
//	}
//
//	PERSONAL read_person;
//	int num = 0;
//	while (fscanf(pFILE, "%s %d %s", &read_person.n, &read_person.ag, &read_person.hb) == 3) {
//		copy(&read_person, &ps[num]);
//		num++;
//	}
//
//	fclose(pFILE);
//	*num_person = num;
//
//	return true;
//
//}
//
//
//bool write_FILE(char const* file_name, const PERSONAL ps[], int* num_person) {
//
//	FILE* pFILE;
//
//	pFILE = fopen(file_name, "w");
//
//	if (pFILE == NULL) {
//		printf("Error: Cannot open file");
//		return false;
//	}
//
//	
//	for (int i = 0; i < *num_person; i++) {
//		fprintf(pFILE, "%8s %d %8s\n", ps[i].n, ps[i].ag, ps[i].hb);
//	}
//
//
//	fclose(pFILE);
//	
//	return true;
//
//}
//void copy(const PERSONAL* soc, PERSONAL* dest) {
//
//	dest->ag = soc->ag;
//	strcpy(dest->n, soc->n);
//	strcpy(dest->hb, soc->hb);
//}
//void group_by_age(const PERSONAL original[], const int* num_person, PERSONAL grouped[]) {
//
//
//	int index = 0;
//
//	
//	int cnt1 = 0; 
//	int cnt2 = 0; 
//	int cnt3 = 0;
//	int cnt4 = 0;
//
//	for (int i = 0; i < *num_person; i++) {
//		if (original[i].ag < 20)
//			cnt1++;
//		else if (original[i].ag < 30)
//			cnt2++;
//		else if (original[i].ag < 40)
//			cnt3++;
//		else 
//			cnt4++;
//	}
//	cnt4 = cnt1+ cnt2+cnt3;
//	cnt3 = cnt1 + cnt2;
//	cnt2 = cnt1;
//	cnt1 = 0;
//	for (int i = 0; i < *num_person; i++) {
//		if (original[i].ag < 20){
//			copy(&original[i], &grouped[cnt1]);
//			cnt1++;
//		}
//		else if (original[i].ag < 30){
//			copy(&original[i], &grouped[cnt2]);
//			cnt2++;
//		}
//		else if (original[i].ag < 40){
//			copy(&original[i], &grouped[cnt3]);
//			cnt3++;
//		}
//		else {
//			copy(&original[i], &grouped[cnt4]);
//			cnt4++;
//		}
//	}
//
//}
//void group_by_hobby(const PERSONAL original[], const int* num_person, PERSONAL grouped[]) {
//
//
//	int grp_G=0;
//	int grp_P=0;
//	int grp_S=0;
//	int grp_T=0;
//
//	for (int i = 0; i < *num_person; i++) {
//		char ch = original[i].hb[0];
//		if (ch == 'G')
//			grp_G++;
//		else if (ch == 'P')
//			grp_P++;
//		else if (ch == 'S')
//			grp_S++;
//		else
//			grp_T++;
//	}
//
//	grp_T = grp_G + grp_P + grp_S;
//	grp_S = grp_G + grp_P;
//	grp_P = grp_G;
//	grp_G = 0;
//
//	for (int i = 0; i < *num_person; i++) {
//		char ch = original[i].hb[0];
//
//		if (ch == 'G'){
//			copy(&original[i], &grouped[grp_G]);
//			grp_G++;
//		}
//		else if (ch == 'P'){
//			copy(&original[i], &grouped[grp_P]);
//			grp_P++;
//		}
//		else if (ch == 'S'){
//			copy(&original[i], &grouped[grp_S]);
//			grp_S++;
//		}
//		else {
//			copy(&original[i], &grouped[grp_T]);
//			grp_T++;
//		}
//	}
//
//}
