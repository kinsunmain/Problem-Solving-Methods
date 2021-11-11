#include <stdio.h>


int Fibo(int n);

int main() {


	printf("%d", Fibo(4));
}

int Fibo(int n) {

	if (n < 2)
		return n;
	else
		return (Fibo(n - 2) + Fibo(n - 1));

}

