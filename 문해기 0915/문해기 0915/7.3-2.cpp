//#include <stdio.h>
//
//
//void change(float cash, int *cent25, int* cent10, int* cent5, int* cent1);
//
//int main() {
//	//input
//	float Cash[] = { 12.34f,0.33f,123.99f,6666.01f };
//	int cent25 = 0, cent10 = 0, cent5 = 0, cent1 = 0;
//	int times = 4;
//
//	for (int i = 0; i < times; i++) {
//		float cash = Cash[i];
//		//change
//		change(cash, &cent25, &cent10, &cent5, &cent1);
//		//output
//
//		printf("\n-------------test(%d)-------------\n", i+1);
//		printf("%.2f ----> (%d)cent25, (%d)cent10, (%d)cent5, (%d)cent1\n", cash, cent25, cent10, cent5, cent1);
//	}
//
//}
//
//void change(float cash, int* cent25, int* cent10, int* cent5, int* cent1) {
//	cash = cash * 100;
//
//	*cent25 = 0;
//	*cent10 = 0;
//	*cent5 = 0;
//	*cent1 = 0;
//
//	cash = (int)cash % 100;
//
//
//	while(1){
//		if ((cash / 25) > 1) {
//			*cent25 = *cent25 + 1;
//			cash = cash - 25;
//		}
//		else if ((cash / 10) > 1) {
//			*cent10 = *cent10 + 1;
//			cash = cash - 10;
//		}
//		else if ((cash / 5) > 1) {
//			*cent5 = *cent5 + 1;
//			cash = cash - 5;
//		}
//		else if ((cash / 5) < 1) {
//			*cent1 = cash;
//			break;
//		}
//	}
//}