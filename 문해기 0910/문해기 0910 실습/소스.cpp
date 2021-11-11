#include <stdio.h>

void calculate(int*, int*,int*, int*, int*, int*);

int main() {
	int re1, re2, re3, re4;

//	int n1 = 10, n2 = 5;
//	int n1 = 10, n2 = 0;
//	int n1 = 0, n2 = 10;
	int n1 = 5, n2 = -10;

	if (n2 == 0) {
		printf("n1 = %d, n2 = %d", n1, n2);
		printf("\n\nCan't not calulate!!\n\n");
	}

	calculate(&n1, &n2, &re1, &re2, &re3, &re4);
	printf("n1 = %d, n2 = %d\n\n", n1, n2);
	printf("%d * %d = %d\n",n1,n2, re1);
	printf("%d / %d = %d\n", n1, n2, re2);
	printf("%d %% %d = %d\n", n1, n2, re3);
	printf("%d + %d = %d\n", n1, n2, re4);

}

void calculate(int* n1, int* n2, int* re1, int* re2, int* re3, int* re4) {
	
	*re1 = *n1 * *n2;
	*re2 = *n1 / *n2;
	*re3 = *n1 % *n2;
	*re4 = *n1 + *n2;

}
