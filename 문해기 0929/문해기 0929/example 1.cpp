//#include <stdio.h>
//
//#define NUM_TEST_SET 5
//
//int Search_String(char* str, char* search_str);
//
//int main() {
//
//	char test_str[NUM_TEST_SET][256] = {"Is your name Bob?", "No, my name is Rob","Hello Rob.",
//	"A thief named hong gil dong lived with friends named hong gil don and hong gil ja and hhhong gil dong and kong gil dong and honggil dong and hong gil donggg in a village named hong gil dong village.",
//	"A thief named hong gil dong lived with friends named hhhong gil dong and hong gil don in a village named hong gil dong village.",};
//	char test_search_str[NUM_TEST_SET][128] = {"name", "name", "name", "hong gil dong", "hong gil dong"};
//
//
//	for (int i = 0; i < NUM_TEST_SET; i++) {
//
//		char* str = test_str[i];
//		char* search_str = test_search_str[i];
//		int num_matches = Search_String(str, search_str);
//
//		printf("\n//--- Experiment (%d) ---\n", i + 1);
//		printf("[String:] %s\n",str);
//		printf("[Search:] %s\n", search_str);
//		printf("[Num Matches:] %d\n", num_matches);
//	}
//
//	return 0;
//
//
//}
//int Search_String(char* str, char* search_str) {
//
//
//	char first_str = search_str[0];
//	int cnt = 0, str_cnt = 0, match=0;
//
//	for (int t = 0; search_str[t] != '\0'; t++) {
//		str_cnt++;
//	}
//
//
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (str[i] == first_str) {
//			cnt = 0;
//			for (int j = 0; search_str[j] != '\0'; j++) {
//				if (search_str[j] == str[i + j]) {
//					cnt++;
//				}
//
//			}
//			if (cnt == str_cnt) {
//				match++;
//			}
//		}
//
//	}
//	return match;
//
//}