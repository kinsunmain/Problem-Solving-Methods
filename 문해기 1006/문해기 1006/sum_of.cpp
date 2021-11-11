//#include <stdio.h>
//
//int sum_of(int a[],int n);
//
//int main() {
//
//	int a[] = { 1,2,3,4,5,6,7,8,9 };
//	int result = 0;
//	result = sum_of(a, 5);
//
//	printf("%d", result);
//}
//
//
//int sum_of(int a[],int n) {
//
//	if (n == 1) {
//		return a[0];
//	}
//
//	return a[n - 1] + sum_of(a, n - 1);
//
//}