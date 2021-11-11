#include <stdio.h>


int main() {
	int numbers[18] = { 5, 96, 87, 78, 93, 21, 4, 92, 82, 85, 87, 6, 72, 69, 85, 75, 81, 73 };

	FILE* num_flie;

	num_flie = fopen("test.txt", "w");

	for (int i = 0; i < 18; i++) {
		fprintf(num_flie, "%d ", numbers[i]);
	}
	fclose(num_flie);


	num_flie = fopen("test.txt", "r");

	int n;
	int a[18];
	int i = 0;
	int t = 1;
	while (fscanf(num_flie, "%d", &n) != EOF) {
		a[i] = n;
		i++;
	}
	for (int i = 0; i < 18; i++) {
		int cnt = a[i];
		int grp = 0;
		int j;

		for (j = 0; j < cnt; j++) {
			grp += a[i+j+1];
		}
		printf("group %d [%f]\n", t,(float)grp / j);
		i += j;
		t++;
	}

}