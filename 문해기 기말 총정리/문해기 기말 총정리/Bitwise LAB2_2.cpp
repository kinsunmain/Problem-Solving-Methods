//#include <stdio.h>
//#include <string.h>
//
//void bin(const int num, char fix_str[]);
//void oct(const int num, char fix_str[]);
//void hex(const int num, char fix_str[]);
//void fix(char str[], char fix_str[]);
//
//int main() {
//
//	char bin_str[32];
//	char oct_str[33];
//	char hex_str[32];
//
//	for (int i = 1; i <= 1000; i++) {
//		printf("DEC : %-4d", i);
//		bin(i, bin_str);
//		printf("BIN : %-12s", bin_str);
//		oct(i, oct_str);
//		printf("OCT : %-12s", oct_str);
//		hex(i, hex_str);
//		printf("HEX : %-12s\n", hex_str);
//	}
//
//}
//
//
//void bin(const int num, char fix_str[]) {
//
//	const char digit[] = "01";
//
//	char str[33];
//	str[32] = '\0';
//	for (int i = 0; i < 32; i++) {
//		str[31 - i] = digit[(num >> i) & 1];
//	}
//
//	fix(str, fix_str);
//
//}
//void oct(const int num, char fix_str[]) {
//
//	const char digit[] = "01234567";
//
//	char str[12];
//	str[11] = '\0';
//	for (int i = 0; i < 11; i++) {
//		str[10 - i] = digit[(num >> i * 3) & 7];
//	}
//	fix(str, fix_str);
//}
//void hex(const int num, char fix_str[]) {
//
//	const char digit[] = "0123456789ABCDEF";
//
//	char str[9];
//	str[8] = '\0';
//	for (int i = 0; i < 8; i++) {
//		str[7 - i] = digit[(num >> (i * 4)) & 15];
//	}
//	fix(str, fix_str);
//}
//
//void fix(char str[], char fix_str[]) {
//
//	int locat=0;
//
//	for (int i = 0; i < strlen(str); i++) {
//		if (str[i] != '0') {
//			locat = i;
//			break;
//		}
//	}
//
//	strcpy(fix_str, str + locat);
//}