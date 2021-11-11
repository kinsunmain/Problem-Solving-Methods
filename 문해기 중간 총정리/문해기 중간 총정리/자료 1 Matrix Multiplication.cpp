//#include <stdio.h>
//
//
//void mat_multi(int a[3][3], int b[3][3], int c[3][3]);
//
//int main() {
//
//	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int b[3][3] = { {10,11,12},{13,14,15},{16,17,18} };
//	int c[3][3];
//
//	mat_multi(a, b, c);
//}
//
//void mat_multi(int a[3][3], int b[3][3], int result[3][3]) {
//
//	for (int r = 0; r < 3; r++) {
//		for (int c = 0; c < 3; c++) {
//			result[r][c] = 0;
//			for (int d = 0; d < 3; d++) {
//				result[r][c] += a[r][d] * b[d][c];
//			}
//		}
//	}
//
//	for (int r = 0; r < 3; r++) {
//		for (int c = 0; c < 3; c++) {
//			printf("%d ", result[r][c]);
//		}
//		printf("\n");
//	}
//}