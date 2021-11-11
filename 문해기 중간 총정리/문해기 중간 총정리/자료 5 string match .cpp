//#include <stdio.h>
//#include <string.h>
//
//
//int match(char string[], char search_string[]);
//
//int main() {
//
//	char string[128] = { "A thief named hong gil dong lived with friends named hong gil don and hong gil ja in a village named hong gil dong village. " };
//	char search_string[128] = { "hong gil dong" };
//
//	int times = 0;
//	times = match(string, search_string);
//
//	printf("%d ", times);
//
//
//}
//
//
//int match(char string[], char search_string[]) {
//
//	int cnt = 0;
//	int len;
//	for (int i = 0; string[i] != '\0'; i++) {
//		if (string[i] == 'h') {
//			int t = i;
//			len = 0;
//			for (int j = 0; search_string[j] != '\0'; j++) {
//
//				
//				if (string[t] == search_string[j]) {
//					len++;
//				}
//				else break;
//				t++;
//			}
//			if (len == strlen(search_string)) {
//				cnt++;
//			}
//		}
//
//
//		
//	}
//	return cnt;
//
//}