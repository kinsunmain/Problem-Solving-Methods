//#include <stdio.h>
//#include <string>
//
//struct ADDRESS
//{
//	char add1[20] = {'\0'};
//	char add2[20] = {'\0'};
//};
//
//bool read_file(const char file_name[], ADDRESS add[]);
//bool read_compressed_file(const char file_name[], ADDRESS add[]);
//bool write_file(const char file_name[], ADDRESS add[]);
//bool decompressed_file(const char file_name[], ADDRESS add[]);
//
//
//int main() {
//
//	ADDRESS add[500];
//	ADDRESS comp_add[500];
//
//	if (!read_file("address.txt", add)) {
//		printf("cannot read file");
//	}
//
//	if (!write_file("compressed.txt", add)) {
//		printf("cannot read file");
//	}
//
//	if (!read_compressed_file("compressed.txt", comp_add)) {
//		printf("cannot read file");
//	}
//
//	if (!decompressed_file("decompressed.txt", comp_add)) {
//		printf("cannot read file");
//	}
//
//	return 0;
//}
//
//
//bool read_file(const char file_name[], ADDRESS add[]) {
//
//	FILE* pfile;
//
//	pfile = fopen(file_name, "r");
//
//	ADDRESS read_add;
//
//
//	int num = 0;
//	while (fscanf(pfile, "%s - %s   ", &read_add.add1, &read_add.add2) == 2) {
//		strcpy(add[num].add1, read_add.add1);
//		strcpy(add[num].add2, read_add.add2);
//		num++;
//	}
//	fclose(pfile);
//	return true;
//}
//
//bool write_file(const char file_name[], ADDRESS add[]) {
//
//	FILE* pfile;
//
//	pfile = fopen(file_name, "w");
//
//	if (pfile == NULL) {
//		printf("cannot open file");
//	}
//
//	for (int i = 0; i < 500; i++) {
//		fprintf(pfile, "%s%s ", add[i].add1, add[i].add2);
//	}
//
//
//	fclose(pfile);
//	return true;
//}
//
//bool read_compressed_file(const char file_name[], ADDRESS add[]) {
//
//	FILE* pfile;
//
//	pfile = fopen(file_name, "r");
//
//	ADDRESS read_add;
//	
//
//
//	int num = 0;
//
//
//	while (fscanf(pfile, "%s ", &read_add.add2) == 1) {
//		
//		strncat(read_add.add1, read_add.add2,3);
//
//		for (int i = 0; i < 4; i++) {
//			read_add.add2[i] = read_add.add2[i+3];
//		}
//		read_add.add2[4] = NULL;
//
//		strcpy(add[num].add1, read_add.add1);
//		strcpy(add[num].add2, read_add.add2);
//		num++;
//		for (int i = 0; i < 7; i++) {
//			read_add.add1[0] = NULL;
//		}
//		
//	}
//
//	fclose(pfile);
//	return true;
//}
//
//
//bool decompressed_file(const char file_name[], ADDRESS add[]) {
//
//	FILE* pfile;
//
//	pfile = fopen(file_name, "w");
//
//	if (pfile == NULL) {
//		printf("cannot open file");
//	}
//
//	for (int i = 0; i < 500; i++) {
//		fprintf(pfile, "%s - %s   ", add[i].add1, add[i].add2);
//	}
//
//
//	fclose(pfile);
//	return true;
//}