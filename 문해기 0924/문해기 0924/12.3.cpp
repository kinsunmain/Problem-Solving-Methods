//#include <stdio.h>
//
//struct Date
//{
//	int month;
//	int day;
//	int year;
//}emplyee[5] = { {9, 24, 2021},
//				{12, 30, 2010},
//				{1, 1, 2000},
//				{1, 1, 2001},
//				{1, 1, 1900} };
//
//
//int Days(int month, int day, int year);
//
//int main() {
//
//	int days = 0;
//
//	for (int i = 0; i < 5; i++) {
//		printf("\nInput: %d/%d/%d\n", emplyee[i].month, emplyee[i].day, emplyee[i].year);
//		
//		days = Days(emplyee[i].month, emplyee[i].day, emplyee[i].year);
//
//		if (days >= 0) {
//			printf("Output: %d\n", days);
//		}
//		else {
//			printf("ERROR: Before 1/1/2000\n");
//		}
//	}
//
//
//
//}
//
//int Days(int month, int day, int year) {
//	int cnt = 0;
//
//	cnt = cnt + ((month - 1) * 30);
//	cnt = cnt + (day - 1);
//	cnt = cnt + ((year - 2000) * 360);
//
//	return cnt;
//}