//#include <stdio.h>
//
//struct Date{
//	int month;
//	int day;
//	int year;
//}employee{ 6,25,2021 };
//
//int Days(Date *days);
//
//int main() {
//
//	int days = 0;
//	
//	printf("%d %d %d\n", employee.month, employee.day, employee.year);
//
//	days = Days(&employee);
//	printf("%d ", days);
//}
//
//int Days(Date* days) {
//
//	int cnt = 0;
//
//	cnt = cnt + days->day - 1;
//	cnt = cnt + (days->month - 1)*30;
//	cnt = cnt + (days->year - 2000)*360;
//	return cnt;
//}