//#include <stdio.h.>
//#include <math.h>
//
//
//void liquid(int* gallons, int* quarts, int*pints, int*cups);
//
//int main() {
//
//	//input
//	int gallons = 0; // 1gallon = 16 cups
//	int quarts = 0;  // 1quart = 4 cups
//	int pints = 0;   // 1pint = 2cups
//	int CUPS[] = { 6,0,-5,89 };
//	int times = 4;
//
//
//
//	//output
//	for (int i = 0; i < times; i++) {
//		back:
//		int cups = CUPS[i];
//		printf("\n------- %d test -------\n", i+1);
//		printf("Input: %d cups\n", cups);
//
//		if (cups < 0) {
//			printf("Error: The input is less than zero.\n");
//			i++;
//			goto back;
//		}
//
//		//liquid()
//		liquid(&gallons, &quarts, &pints, &cups);
//		printf("Output: %d gallons, %d quarts, %d pints, %d cups\n", gallons, quarts, pints, cups);
//	}
//}
//
//void liquid(int* gallons, int* quarts, int* pints, int* cups) {
//
//	*gallons = *cups;
//	*quarts = *cups;
//	*pints = *cups;
//
//	*gallons = ceil((double)*gallons / 16);
//	*quarts = ceil((double)*quarts / 4);
//	*pints = ceil((double)*pints / 2);
//	
//}
