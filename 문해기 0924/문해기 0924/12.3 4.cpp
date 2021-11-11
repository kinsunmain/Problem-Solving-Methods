#include <stdio.h>

struct DATE
{
	int month;
	int day;
	int year;

};


DATE recent(struct DATE, struct DATE);

int main() {

	DATE A[5] = { { 1 , 1 , 2021 },{ 9 , 24 , 2021 },{ 11 , 13 , 2000 },{ 1 , 14 , 2002 },{ 10 , 24 , 2015 } };
	DATE B[5] = { { 12 , 12 , 2021 },{ 9 , 24 , 2021 },{ 12 , 1 , 2021 },{ 1 , 1 , 2002 },{ 1 , 1 , 2007 } };
	DATE result;


	for (int i = 0; i < 5; i++) {
		DATE a = A[i];
		DATE b = B[i];
		
		printf("test(%d)Input : Date1: %d/%d/%d    Date2: %d/%d/%d\n",i+1, a, b);
		
		result = recent(a, b);
		printf("Output : %d/%d/%d\n\n", result);

	}
}

DATE recent(struct DATE a, struct DATE b) {

	if (a.year > b.year) {
		return a;
	}
	else if (a.year == b.year) {
		if (a.month > b.month) {
			return a;
		}
		else if (a.month == b.month) {
			if (a.day > b.day) {
				return a;
			}
			else if (a.day > b.day) {
				return a;
			}
			else {
				return b;
			}
		}
		else {
			return b;
		}
	}
	else {
		return b;
	}
}

