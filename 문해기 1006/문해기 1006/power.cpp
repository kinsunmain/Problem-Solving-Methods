//#include <stdio.h>
//
//double power(float val, int pow);
//
//int main() {
//	float val = 5;
//	int pow = 3;
//	double value=0;
//	value = power(val, pow);
//	printf("%f", value);
//}
//
//double power(float val, int pow) {
//	if (pow == 0) {
//		return 1;
//	}
//	else {
//		return (val * power(val,pow - 1));
//	}
//}