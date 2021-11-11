#include <stdio.h>

void mul(int a[3][3], int b[3][3]);

int main() {
	int a[3][3] = { {1,2,3},
					{4,5,6},
					{7,8,9} };
	int b[3][3] = { {1,2,1},
					{2,4,6},
					{7,2,5} };

	mul(a, b);

}


void mul(int a[3][3], int b[3][3]) {

	int c[3][3] = { 0, };
	int temp = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
			
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", c[i][j]);

		}
		printf("\n");
	}

}
