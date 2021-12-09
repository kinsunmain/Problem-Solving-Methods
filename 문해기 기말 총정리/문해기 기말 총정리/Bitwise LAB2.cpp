 //#include <stdio.h>
//#include <string.h>
//
//
//void binary(const int num, char fix_str[]);
//void oct(const int num, char fix_str[]);
//void hex(const int num, char fix_str[]);
//void del_zero(char str[], char fix_str[]);
//
//int main() {
//
//	char bin_str[32];
//	char oct_str[33];
//	char hex_str[32];
//
//
//	for (int i = 1; i <= 1000; i++) {
//		binary(i, bin_str);
//		oct(i, oct_str);
//		hex(i, hex_str);
//		
//		printf("DEC: %-12d", i);
//		printf("BIN: %-12s", bin_str);
//		printf("OCT: %-12s", oct_str);
//		printf("HEX: %-12s\n", hex_str);
//	}
//}
//
//
//void binary(const int num, char fix_str[]) {
//
//	const char digits[] = "01";
//	char bins[33];
//	bins[32] = '\0';
//
//	for (int i = 0; i < 32; i++) {
//		bins[31 - i] = digits[(num >> i) & 1];
//	}
//
//	del_zero(bins, fix_str);
//}
//void oct(const int num, char fix_str[]) {
//
//	const char digits[] = "01234567";
//	char octs[12];
//	octs[11] = '\0';
//	for (int i = 0; i < 11; i++) {
//		octs[10 - i] = digits[(num >> i * 3) & 7];
//	}
//	del_zero(octs, fix_str);
//}
//void hex(const int num, char fix_str[]) {
//	const char digits[] = "0123456789ABCDEF";
//	char hexs[9];
//	hexs[8] = '\0';
//	for (int i = 0; i < 8; i++) {
//		hexs[7 - i] = digits[(num >> i * 4) & 15];
//	}
//	del_zero(hexs, fix_str);
//}
//void del_zero(char str[], char fix_str[]) {
//	int location = 0;
//
//	for (int i = 0; i < strlen(str); i++) {
//		if (str[i] != '0') {
//			location = i;
//			break;
//		}
//	}
//	strcpy(fix_str, str + location);
//}