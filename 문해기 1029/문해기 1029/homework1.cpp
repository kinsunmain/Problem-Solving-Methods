//#include <stdio.h>
//
//struct EMPLOYEE
//{
//	char name[20];
//	char name2[5];
//	int id;
//	double salay;
//	char date[20];
//};
//
//int main(int argc, char* argv[]) {
//
//
//
//	struct EMPLOYEE test[5] = { {"Anthony", "A.J.", 10031, 7.82, "12/18/62"},
//						{"Burrows", "W.K.", 10067, 9.14, "6/9/63"},
//						{"Fain", "B.D.", 10083, 8.79, "5/18/59"},
//						{"Janney", "P.", 10095, 10.57, "9/28/62"},
//						{"Smith", "G.J.", 10105, 8.50, "12/20/61"} };
//
//
//	FILE* flie1=NULL;
//	FILE* flie2=NULL;
//
//	char src[50];
//	char dest[50];
//
//	scanf("%s", &src);
//	scanf("%s", &dest);
//	flie1 = fopen(src, "w");
//	if (flie1 == NULL) {
//		printf("cannot open ");
//		return false;
//	}
//	for (int i = 0; i < 5; i++) {
//		fprintf(flie1, "%s %s %d %lf %s\n", test[i].name, test[i].name2, test[i].id, test[i].salay, test[i].date);
//	}
//
//	fclose(flie1);
//
//	
//	flie1 = fopen(src, "r");
//	flie2 = fopen(dest, "w");
//	char n[20];
//	char n2[5];
//	int num;
//	double num2;
//	char d[20];
//	while (fscanf(flie1, "%s %s %d %lf %s\n", &n, &n2, &num, &num2, &d) != EOF) {
//		fprintf(flie2, "%s %s %d %.2lf %s\n", n, n2, num, num2, d);
//	}
//		
//
//
//	fclose(flie1);
//	fclose(flie2);
//}