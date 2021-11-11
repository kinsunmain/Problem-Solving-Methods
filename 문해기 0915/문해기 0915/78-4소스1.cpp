#include <stdio.h>

void extend(double price[],double quantity[],double amount[],const int arr_len);

int main() {

	//input
	double price[10] = { 10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98 };
	double quantity[10] = { 4, 8.5, 6, 8.35, 9, 15.3, 3, 5.4, 2.9, 4.8 };
	double amount[10];
	const int arr_len = 10;

	//extend
	extend(price, quantity, amount, arr_len);

	//output

	for (int i = 0; i < arr_len; i++) {
		printf("[%d] %.4f\n", i + 1, amount[i]);
	}
}

void extend(double price[], double quantity[], double amount[], const int arr_len) {

	for (int i = 0; i < arr_len; i++) {
		amount[i] = price[i] * quantity[i];
	}

}