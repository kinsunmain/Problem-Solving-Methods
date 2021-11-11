//#include <stdio.h>
//
//int secs(int hour, int min, int sec);
//
//int main() {
//
//	//input
//	int HOUR[] = { 1,3,5,24 };
//	int MIN[] = { 10,35,47,70 };
//	int SEC[] = { 30,1,50,800 };
//	int total_sec = 0;
//	int times = 4;
//
//
//	for (int i = 0; i < times; i++) {
//		int hour = HOUR[i];
//		int min = MIN[i];
//		int sec = SEC[i];
//
//		int roundingOff_Sec = 0;
//		int roundingOff_Min = 0;
//
//
//		printf("\n--------%d test--------\n", i + 1);
//		printf("Input : %dhour %dmin %dsec\n\n", hour, min, sec);
//
//		while (1) {
//			if (sec > 60) {
//				min++;
//				sec = sec - 60;
//				roundingOff_Sec++;
//			}
//			else if (min > 60) {
//				hour++;
//				min = min - 60;
//				roundingOff_Min++;
//			}
//			else if (sec < 60 || min < 60) {
//				break;
//			}
//		}
//
//		//secs
//		total_sec = secs(hour, min, sec);
//
//
//		if (roundingOff_Min >= 1) {
//			printf("Minute rounded up beyond 60. %d times\n", roundingOff_Min);
//		}
//		if (roundingOff_Sec >= 1) {
//			printf("Second rounded up beyond 60. %d times\n", roundingOff_Sec);
//		}
//		printf("%dhour %dmin %dsec ----> %dsec\n", hour, min, sec, total_sec);
//	}
//
//}
//
//int secs(int hour, int min, int sec) {
//	sec = sec + (hour * 3600) + (min * 60);
//	return sec;
//}