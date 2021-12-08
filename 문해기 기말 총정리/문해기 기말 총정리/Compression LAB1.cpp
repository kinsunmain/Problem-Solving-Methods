//#include <stdio.h>
//#include <string.h>
//
//
//struct ADD
//{
//	char fir_add[5];
//	char sec_add[5];
//	bool read_file(const char file_name[], ADD add[]);
//	bool com_read_file(const char file_name[], ADD add[]);
//	bool write_file(const char file_name[], ADD add[]);
//	bool decom_write_file(const char file_name[], ADD add[]);
//	void copy(const ADD* src, ADD* dest);
//};
//
//bool ADD::read_file(const char file_name[], ADD add[]) {
//
//	FILE* pfile;
//	pfile = fopen(file_name, "r");
//
//	ADD read_file;
//
//	int num = 0;
//	while (fscanf(pfile, "%s - %s   ", &read_file.fir_add, &read_file.sec_add) == 2) {
//		copy(&read_file, &add[num]);
//		num++;
//	}
//	fclose(pfile);
//	return true;
//}
//bool ADD::com_read_file(const char file_name[], ADD add[]) {
//
//	FILE* pfile;
//	pfile = fopen(file_name, "r");
//
//	ADD read_file;
//
//	int num = 0;
//	while (fscanf(pfile, "%s %s ", &read_file.fir_add, &read_file.sec_add) == 2) {
//		copy(&read_file, &add[num]);
//		num++;
//	}
//	fclose(pfile);
//	return true;
//}
//bool ADD::write_file(const char file_name[], ADD add[]) {
//
//
//	FILE* pfile;
//	pfile = fopen(file_name, "w");
//
//	for (int i = 0; i < 500; i++) {
//		fprintf(pfile, "%s %s ", add[i].fir_add, add[i].sec_add);
//	}
//
//
//	fclose(pfile);
//	return true;
//}
//
//bool ADD::decom_write_file(const char file_name[], ADD add[]) {
//
//
//	FILE* pfile;
//	pfile = fopen(file_name, "w");
//
//	for (int i = 0; i < 500; i++) {
//		fprintf(pfile, "%s - %s   ", add[i].fir_add, add[i].sec_add);
//	}
//
//
//	fclose(pfile);
//	return true;
//}
//
//void ADD::copy(const ADD* src, ADD* dest) {
//	strcpy(dest->fir_add, src->fir_add);
//	strcpy(dest->sec_add, src->sec_add);
//}
//
//
//
//int main() {
//
//	ADD add[500];
//
//	add->read_file("address.txt", add);
//	add->write_file("compression.txt", add);
//	add->com_read_file("compression.txt", add);
//	add->decom_write_file("decompression.txt",add);
//}
