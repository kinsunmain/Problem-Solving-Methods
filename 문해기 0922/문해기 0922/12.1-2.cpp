#include <stdio.h>

struct 
{
	char name[20];
	float share;
	float ratio;

} Company[5];


int main() {
	for (int i = 0; i < 5; i++) {
		printf("Type (%d)company's name share ratio : \n", i+1);

		scanf_s("%s %f %f", &Company[i].name, &Company[i].share, &Company[i].ratio);
	}

	for (int i = 0; i < 5; i++) {
		printf("%s's stock price: %f\n", Company[i].name, Company[i].share * Company[i].ratio);
	}
}