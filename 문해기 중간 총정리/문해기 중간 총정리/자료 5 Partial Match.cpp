//#include <stdio.h>
//#include <string.h>
//
//
//void divid(char search_string[], char fir_st[], char sec_st[]);
//int match(char string[], char fir_st[],char sec_st[]);
//
//
//
//int main() {
//
//	char string[128] = { "A thief named hong gil dong lived with friends named hong gil don and hong gil ja in a village named hong gil dong village. " };
//	char search_string[128] = { "h*g" };
//	
//	char fir_st[20] = { 0, };
//	char sec_st[20] = { 0, };
//
//	divid(search_string, fir_st, sec_st);
//	int times = match(string, fir_st, sec_st);
//	printf("%d", times);
//}
//
//void divid(char search_string[], char fir_st[], char sec_st[]) {
//	
//	int cnt = 0;
//
//	for (int i = 0; search_string[i] != '\0'; i++) {
//		if (search_string[i] == '*') {
//			cnt = 1;
//			continue;
//		}
//		if (cnt == 0) {
//			fir_st[i] = search_string[i];
//		}
//		else {
//			int j = 0;
//			sec_st[j] = search_string[i];
//		}
//	}
//
//}
//
//int match(char string[], char fir_st[], char sec_st[]) {
//	int cnt = 0;
//
//	return cnt;
//
//
//}