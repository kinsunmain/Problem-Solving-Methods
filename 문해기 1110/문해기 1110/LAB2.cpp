#include <stdio.h>

#define TESTSET 10


int main() {


	int a[TESTSET] = { 1,2,10,128,99,100,54,31,910,1000};
		


	for (int i = 0; i < TESTSET; i++) {
		printf("DEC %d :   \t", a[i]);
		printf("BIN: ");
		int mask = 128;
		int cnt = 0;
		for (int j = 0; j < 8; j++) {
			
			if (!(a[i] & mask)) {
				if (cnt==1)
					printf("0");
			}
			else {
				printf("1");
				cnt = 1;
			}
			mask = mask >> 1;
		}
		printf("\t\t");
		printf("HEX: %X\n", a[i]);

	}


}

