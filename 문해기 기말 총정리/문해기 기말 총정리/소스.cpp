//#include <stdio.h>
//
//
//void func1(int a, int b) {
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//void func2(int* a, int* b) {
//	int temp;
//	printf("%p %p   asdfasdf\n", a, b);
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//void func3(int& a, int& b) {
//	int temp;
//
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//	int num1 = 10;
//	int num2 = 20;
//	int* num3 = &num1;
//	int* num4 = &num2;
//
//	
//	func1(num1, num2);
//	printf("%d %d\n", num1, num2);
//
//
//	printf("%p %p\n", &num1, &num2);
//	func2(&num1, &num2);
//	printf("%d %d\n", num1, num2);
//	printf("%p %p\n", &num1, &num2);
//	
//	printf("------\n");
//	func2(num3, num4);
//	printf("%d %d\n", *num3, *num4);
//
//	func3(num1, num2);
//	printf("%d %d\n", num1, num2);
//}