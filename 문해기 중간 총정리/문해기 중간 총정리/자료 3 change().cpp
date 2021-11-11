//#include <stdio.h>
//
//void change(int *doller,int* quarters, int* dimes, int* nickels, int* pennies);
//
//int main() {
//
//	int quarters=0, dimes = 0, nickels = 0, pennies = 0;
//	int doller;
//
//	scanf_s("%d", &doller);
//
//	change(&doller, &quarters, &dimes, &nickels, &pennies);
//
//	printf("%d doller is (%d)quarters, (%d)dimes, (%d)nickels, (%d)pennies",doller, quarters, dimes, nickels, pennies);
//}
//
//void change(int* doller, int* quarters, int* dimes, int* nickels, int* pennies) {
//	while (*doller > 5){
//
//		if (*doller >= 25) {
//			*quarters = *quarters + 1;
//			*doller = *doller - 25;
//		}
//		else if (*doller >= 10) {
//			*dimes = *dimes + 1;
//			*doller = *doller - 10;
//		}
//		else if (*doller >= 5) {
//			*nickels = *nickels + 1;
//			*doller = *doller - 5;
//		}
//	}
//	*pennies = *doller;
//
//}
