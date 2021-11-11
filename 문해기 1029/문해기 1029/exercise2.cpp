//#include <stdio.h>
//#include <stdlib.h>
//

//
//
//void main() {
//
//	struct CAR car[4] = { {"Avante",2007,13000.00 },{"Sonata",2008,18000.00}, {"SM7",2009,22000.00},{"Equus",2010,35000.00} };
//
//	FILE* myFile;
//
//
//
//	//File Writing
//	myFile = fopen("cars.txt", "w");
//	for (int i = 0; i < 4; i++) {
//		fprintf(myFile, "%s %d %lf\n", car[i].name, car[i].year, car[i].price);
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
//	double p;
//	printf("-----------------------------------\n");
//	printf("|Name	|Year	|Price		|\n");
//	while (fscanf(myFile, "%s %d %lf", &n, &y, &p) != EOF) {
//
//		if (i == 0 ) {
//			printf("-----------------------------------\n");
//			
//		}
//		printf("|%s\t |\t%d|\t%.2lf|\n", n, y, p);
//		i++;
//	}
//	printf("-----------------------------------");
//
//	//---------
//
//	fclose(myFile);
//}