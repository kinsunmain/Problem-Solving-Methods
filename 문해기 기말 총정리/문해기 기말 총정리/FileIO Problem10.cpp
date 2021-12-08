#include <stdio.h>
#include <stdlib.h>



bool write_file(const char file_name[], const int data[]);
bool read_file(const char file_name[]);

int main() {

	int data[18] = { 5, 96, 87, 78, 93, 21, 4, 92, 82, 85, 87, 6, 72, 69, 85, 75, 81, 73 };

	if (!write_file("datas.txt", data)) {
		printf("cannot write file");
	}

	if (!read_file("datas.txt")) {
		printf("cannot read file");
	}

}


bool write_file(const char file_name[], const int data[]) {
	FILE* pfile;

	pfile = fopen(file_name, "w");

	for (int i = 0; i < 18; i++) {
		fprintf(pfile, "%d ", data[i]);
	}

	fclose(pfile);
	return true;
}


bool read_file(const char file_name[]) {


	FILE* pfile;

	pfile = fopen(file_name, "r");

	int read_file;


	while (fscanf(pfile, "%d ", &read_file) == 1) {

		int number;
		int sum = 0;
		for (int i = 0; i < read_file; i++) {
			fscanf(pfile, "%d ", &number);
			sum += number;
		}
		printf("%lf ", (double)sum / read_file);

	}

	fclose(pfile);
	return true;
}