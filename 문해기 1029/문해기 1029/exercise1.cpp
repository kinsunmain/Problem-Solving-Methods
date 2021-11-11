//#include <stdio.h>
//#include <stdlib.h>
//
//struct CAR
//{
//	char name[20];
//	int year;
//};
//
//
//void main() {
//
//	struct CAR car[2] = { {"Avante",2007 },{"Sonata",2008} };
//
//	FILE* myFile;
//	char ch;
//
//
//	
//	//File Writing
//	myFile = fopen("cars.txt", "w");
//	for (int i = 0; i < 2; i++) {
//		fprintf(myFile,"%s %d\n", car[i].name, car[i].year);
//	}
//
//	fclose(myFile);
//
//	//---------
//
//
//	//----------
//	//File Reading
//
//
//	myFile = fopen("cars.txt", "r");
//	int i = 0;
//	char n[20];
//	int y;
//	while (fscanf(myFile,"%s %d", &n, &y) != EOF) {
//		
//
//		printf("%s %d\n", n, y);
//		i++;
//	}
//
//
//	//---------
//
//	fclose(myFile);
//}