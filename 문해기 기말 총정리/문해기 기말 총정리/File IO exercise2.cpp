//#include <stdio.h>
//#include <string.h>
//
//
//struct CAR
//{
//	char name[20];
//	int year;
//	double price;
//}car[4];
//
//
//bool write_file(const char file_name[]);
//
//int main() {
//
//	car[0] = { "Avante", 2007, 13000.00 };
//	car[1] = { "Sonata", 2008, 18000.00 };
//	car[2] = { "SM7", 2009, 22000.00 };
//	car[3] = { "Equus", 2010, 35000.00 };
//
//
//	if (!write_file("cars.txt")) {
//		printf("cannot read fie");
//	}
//
//
//}
//
//bool write_file(const char file_name[]) {
//
//	FILE* pfile;
//
//	pfile = fopen(file_name, "w");
//
//	for (int i = 0; i < 4; i++) {
//		fprintf(pfile, "%s %d %lf\n", car[i].name, car[i].year, car[i].price);
//	}
//
//	fclose(pfile);
//	return true;
//}