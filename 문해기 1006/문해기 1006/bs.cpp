#include <stdio.h>
#define testset 7
#define listset 7

int bs(int list[], int lo, int hi, int key);

int main() {
	int list[testset][listset] = { {5,10,15,25,45,90,100 },
								{5,10,15,25,45,90,100 },
								{5,10,15,25,45,90,100 },
								{-10,-8,-6,-4,-2,0,2},
								{-10,-8,-6,-4,-2,0,2},
								{-1000,0,50,68,10000,10001,10002},
								{1,2,3,4,5,6,7} };
	int lo = 0;
	int hi = 7;
	int key[testset] = { 10,46,1001,-8,0,50,4 };

	for (int i = 0; i < testset; i++) {
		printf("-----test[%d]-----\n", i + 1);
		printf("list : ");
		for (int j = 0; j < listset; j++) {
			printf("%d, ", list[i][j]);
		}
		printf("\nkey = %d\n", key[i]);
		printf("result : [%d]\n\n\n", bs(list[i], lo, hi, key[i]));
	}
	

}

int bs(int list[], int lo, int hi, int key) {
	int mid;

	if (lo > hi)
		return -1;
	mid = (lo + hi) / 2;
	if (list[mid] == key)
		return mid;
	else if (list[mid] > key)
		return bs(list, lo, mid - 1, key);
	else if (list[mid] < key)
		return bs(list, mid + 1, hi, key);

	return -1;
}