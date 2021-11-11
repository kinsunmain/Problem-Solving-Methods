//#include <stdio.h>
//
//#define TEST_SET 10 
//
//int main() {
//
//	char a[TEST_SET] = { 'a', 'b', 'd', 's', 'z', 'A', 'B', 'D', 'I', 'Z' };
//	int flag;
//
//
//
//
//	for (int i = 0; i < TEST_SET; i++) {
//		int mask = 128;
//		printf("%c : ", a[i]);
//		for (int j = 0; j < 8; j++) {
//			if (a[i] & mask) {
//				printf("1");
//			}
//			else {
//				printf("0");
//			}
//			mask = mask >> 1;
//		}
//		printf("\n");
//
//	}
//
//}