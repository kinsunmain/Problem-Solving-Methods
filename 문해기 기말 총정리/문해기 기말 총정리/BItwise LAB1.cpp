//#include <stdio.h>
//
//#define TESTSET 5
//
//int main() {
//
//	char test[TESTSET] = { 'a','b','z','A','H' };
//
//
//	for (int i = 0; i < TESTSET; i++) {
//		int mask = 128;
//		int bin[8] = { 0, };
//		printf("%c : ", test[i]);
//		for (int j = 0; j < 8; j++) {
//			if (test[i] & mask) bin[j] = 1;
//			else bin[j] = 0;
//			mask = mask >> 1;
//		}
//		for (int j = 0; j < 8; j++) {
//			printf("%d", bin[j]);
//		}
//		printf("\n");
//	}
//}