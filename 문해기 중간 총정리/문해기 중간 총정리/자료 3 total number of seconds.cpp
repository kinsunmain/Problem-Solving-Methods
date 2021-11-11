//#include <stdio.h>
//
////int secs(int hour, int min, int sec);
////
////int main() {
////
////	int hour=3, min=45, sec=30;
////
////
////	printf("%d",secs(hour, min, sec));
////}
////
////int secs(int hour, int min, int sec) {
////	sec += hour * 3600;
////	sec += min * 60;
////	return sec;
////}
//void secs(int *hour, int *min, int *sec);
//
//int main() {
//
//	int hour = 3, min = 45, sec = 30;
//
//
//	secs(&hour, &min, &sec);
//	printf("%d", sec);
//}
//
//void secs(int *hour, int *min, int *sec) {
//	*sec += *hour * 3600;
//	*sec += *min * 60;
//}
//
