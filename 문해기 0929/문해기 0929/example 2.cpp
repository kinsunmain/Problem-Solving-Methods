#include <stdio.h>
#include <string.h>

#define NUM_TEST_SET 8

void Divide_Search_String(const char* search_str, char* first, char* second);
int Partial_Match_Count(const char* str, const char* first, const char* second);
bool Exact_Match(const char* str, const char* search_str, int *index); //example1

int main() {
	char test_str[NUM_TEST_SET][256] = { "hello mister monkey","hello mister monkey", "hello mister monkey",
										"my name is lee jongho","my name is lee jongho",
						"My name is hong gil dong.My brother is hong je dong.My sister is hong gilja,and her friend is hongdong.",
						"hong hong dong dong",
						"A thief named hong gil dong lived with friends named hong gil donand hong gil jaand hhhong gil dongand kong gil dongand honggil dongand hong gil donggg in a village named hong gil dong village." };
	char test_search_str[NUM_TEST_SET][128] = { "money","mon*ey", "m*y","lee *ho", "lee *ha", "hong*dong","hong*dong", "hong *dong" };

	for (int t = 0; t < NUM_TEST_SET; t++) {
		char* str = test_str[t];
		char* search_str = test_search_str[t];

		char first[128] = { 0, };
		char second[128] = { 0, };
		Divide_Search_String(search_str, first, second);

		printf("\n//--- Experiment (%d) ---\n", t + 1);
		printf("[String:] %s\n", str);
		printf("[Search-First:] [%s]\n", first);
		printf("[Search-second:] [%s]\n", second);

		int num_matches = Partial_Match_Count(str, first, second);

		printf("[Num Matches:] %d\n", num_matches);

	}

}

void Divide_Search_String(const char* search_str, char* first, char* second) {
	int t = 0;
	int j=0,k = 0;
	int i;
	second[0] = '\0';
	for (i = 0; search_str[i] != '\0'; i++) {
		if (search_str[i] == '*') {
			t = 1;
			continue;
		}

		if (t == 0) {
			first[k] = search_str[i];
			k++;
		}
		else if (t==1) {
			second[j] = search_str[i];
			j++;
		}
	}

}

int Partial_Match_Count(const char* str, const char* first, const char* second) {
	
	int Match = 0;
	bool fir_st ;
	bool se_cond ;
	int index = 0;

	int fir_len = strlen(first);
	int sec_len = strlen(second);
	int str_len = strlen(str);

	do {
		fir_st = Exact_Match(str, first, &index);
		if (fir_st == true) {
			se_cond = Exact_Match(str, second, &index);
			if (se_cond == true) {
				Match++;
			}
		}
	} while (index < str_len);





	return Match;
}

bool Exact_Match(const char* str, const char* search_str, int *i) {

	char first_str = search_str[0];
	int cnt = 0, str_cnt = 0, match=0;
	
	for (int t = 0; search_str[t] != '\0'; t++) {
		str_cnt++;
	}

	int t=0;
	for (*i ; str[*i] != '\0'; (*i)++) {
		if (str[*i] == first_str) {
			cnt = 0;
			for (int j = 0; search_str[j] != '\0'; j++) {
				if (search_str[j] == str[*i + j]) {
					cnt++;
				}

			}
			if (cnt == str_cnt) {
				return true;
			}
		}
		t++;
	
	}
	return false;

}