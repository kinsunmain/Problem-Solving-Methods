//#include <stdio.h>
//#include <string.h>
//
//
//struct LINE
//{
//	char string[200];
//	bool read_file(const char file_name[], LINE str[]);
//	bool write_encryption_file(const char file_name[], LINE str[], const int key);
//	bool write_decryption_file(const char file_name[], LINE str[], const int key);
//	void copy(LINE* src, LINE* dest);
//};
//
//bool LINE::read_file(const char file_name[], LINE str[]) {
//
//	FILE* pfile;
//
//	pfile = fopen(file_name, "r");
//
//	LINE read_file;
//
//	int num = 0;
//	while (fgets(read_file.string, 200, pfile)) {
//		copy(&read_file,& str[num]);
//		num++;
//	}
//	fclose(pfile);
//	return true;
//
//}
//
//bool  LINE::write_encryption_file(const char file_name[], LINE str[], const int key) {
//
//	FILE* pfile;
//	int j;
//
//	pfile = fopen(file_name, "w");
//
//	for (int i = 0; i < 11; i++) {
//		for ( j = 0; str[i].string[j] != '\0'; j++) {
//			if (str[i].string[j] >= 'A' && str[i].string[j] <= 'Z') {
//				str[i].string[j] = str[i].string[j] - 'A';
//				str[i].string[j] = (str[i].string[j] + key + 26) % 26;
//				str[i].string[j] = str[i].string[j] + 'A';
//			}
//			else if (str[i].string[j] >= 'a' && str[i].string[j] <= 'z') {
//				str[i].string[j] = str[i].string[j] - 'a';
//				str[i].string[j] = (str[i].string[j] + key + 26) % 26;
//				str[i].string[j] = str[i].string[j] + 'a';
//			}
//		}
//		str[i].string[j] = '\0';
//	}
//
//	for (int i = 0; i < 11; i++) {
//		fprintf(pfile, "%s", str[i].string);
//	}
//	fclose(pfile);
//	return true;
//
//}
//bool  LINE::write_decryption_file(const char file_name[], LINE str[], const int key) {
//
//	FILE* pfile;
//	int j;
//
//	pfile = fopen(file_name, "w");
//
//	for (int i = 0; i < 11; i++) {
//		for (j = 0; str[i].string[j] != '\0'; j++) {
//			if (str[i].string[j] >= 'A' && str[i].string[j] <= 'Z') {
//				str[i].string[j] = str[i].string[j] - 'A';
//				str[i].string[j] = (str[i].string[j] - key + 26) % 26;
//				str[i].string[j] = str[i].string[j] + 'A';
//			}
//			else if (str[i].string[j] >= 'a' && str[i].string[j] <= 'z') {
//				str[i].string[j] = str[i].string[j] - 'a';
//				str[i].string[j] = (str[i].string[j] - key + 26) % 26;
//				str[i].string[j] = str[i].string[j] + 'a';
//			}
//		}
//		str[i].string[j] = '\0';
//	}
//
//	for (int i = 0; i < 11; i++) {
//		fprintf(pfile, "%s", str[i].string);
//	}
//	fclose(pfile);
//	return true;
//
//}
//void LINE::copy(LINE* src, LINE* dest) {
//	strcpy(dest->string, src->string);
//}
//
//int main() {
//
//	LINE str[11];
//
//	str->read_file("original.txt", str);
//	str->write_encryption_file("encryption.txt", str, 3);
//	str->read_file("encryption.txt", str);
//	str->write_decryption_file("decryption.txt", str, 3);
//}