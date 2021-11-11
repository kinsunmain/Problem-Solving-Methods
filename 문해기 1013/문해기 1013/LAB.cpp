#include <stdio.h>
#include <string.h>

#define TESTSET 5


int sal(float sal, float bon);
int adf(const char* RRN);

struct {
	char RRN[14];
	char name[20];
	float salary;
	float bonus;
} employee[1000];


int main() {

	char RRNset[TESTSET][14] = {"2013516849513",
							"2013516849513",
							"5462156842320",
							"8761598623059",
							"1265984629587"};

	char nameset[TESTSET][20] = { "kim","choi", "lee", "park", "ki" };
	float salaryset[TESTSET] = { 200,300,400,100,50 };
	float bonusset[TESTSET] = { 50, 40, 70, 30, 60 };


	printf("---------TESTSET---------\n");
	for (int i = 0; i < TESTSET; i++) {
		printf("RRN: %s\n", RRNset[i]);
		printf("name: %s\n", nameset[i]);
		printf("salary: %.2f\n",salaryset[i]);
		printf("bonus: %.2f\n",bonusset[i]);
		printf("\n");
	}


	for (int i = 0; i < TESTSET; i++) {
		printf("--------(%d)test--------\n", i + 1);
		int RRNtest = adf(RRNset[i]);
		int salaryTEST = sal(salaryset[i], bonusset[i]);


		if (RRNtest == 0 && salaryTEST !=0) {
			printf("ERROR: not unique RRN\n\n");
			continue;
		}
		else if (salaryTEST == 0 && RRNtest !=0) {
			printf("ERROR: bonus is bigger than salary\n\n");
			continue;
		}
		else if (salaryTEST == 0 && RRNtest == 0) {
			printf("ERROR: not unique RRN and bonus is bigger than salary\n\n");
			continue;
		}

		else if (RRNtest == 1 && salaryTEST == 1) {
			strcpy_s(employee[i].RRN, RRNset[i]);
			strcpy_s(employee[i].name, nameset[i]);
			employee[i].salary = salaryset[i];
			employee[i].bonus = bonusset[i];
		}

		printf("[%s] [%s] [%.2f] [%.2f]\n\n", employee[i].RRN, employee[i].name, employee[i].salary, employee[i].bonus);
	}
}



int adf(const char* RRN) {

	for (int i = 0; i < TESTSET; i++) {
		int t = strcmp(RRN, employee[i].RRN);

		if (t == 0) {
			return 0;
		}


	}
	return 1;

}

int sal(float sal, float bon) {
	if (bon > sal)
		return 0;
	else
		return 1;
}