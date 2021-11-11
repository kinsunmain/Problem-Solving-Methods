//#include <stdio.h>
//#include <stdlib.h>
//
//void strcopy(char dest[], char source[])
//{
//	int i = 0;
//	while (source[i] != '\0')
//	{
//		dest[i] = source[i];
//		i = i + 1;
//	}
//	dest[i] = '\0';
//	/* print source */
//
//	puts(dest);
//}
//
//int main() {
//	char text1[] = "hello world!!";
//	char text2[128];
//	strcopy(text2, text1);
//	return 0;
//}
//-----------------------------------------------------


//#include <stdio.h>
//
//#define MAXNUM 5
//
//void mile2km(float[MAXNUM]);
//
//int main ()
//{
//	
//	float miles[MAXNUM];
//	/* store into the miles array */
//	for (int i = 0; i < MAXNUM; i++) {
//		miles[i] = i;
//	}
//	mile2km(miles);
//	return 0;
//}
//void mile2km (float local_array[])
//{
//	for (int i = 0; i < MAXNUM; i = i + 1) {
//		printf("%f mile --> %f km\n", 
//			local_array[i],
//			local_array[i] * 1.6093);
//	}
//	
//}



//--------------------------------me-------------------


//#include <stdio.h>
//#define MAX 100
//
//int wordcount(char text[]);
//int main() {
//	char text[MAX]="   hello world       ";
//
//	printf("%d", wordcount(text));
//}
//
//int wordcount(char text[]) {
//	int cnt = 1;
//
//	for (int i = 0; text[i] != '\0'; i++) {
//		if (text[i] == ' ' && text[i+1] != '\0') {
//			if (text[i + 1] != text[i]) {
//				cnt++;
//			}
//		}
//	}
//	return cnt;
//}


//-----------------------------------------------------


//---------------------------Professor-----------------


//#include <stdio.h>
//
//int word_count(char text[]) {
//
//	//------------------
//	// ... c[prev], c[current] ...
//	// ... c[prev] != ' ' && c[current] == ' '
//	//-------------------
//
//	int word_cnt = 0;
//	char prev, cur;
//
//	int i = 0;
//	prev = ' ';
//	cur = text[i];
//	while (text[i] != '\0') {
//
//		cur = text[i];
//
//		if (prev != ' ' && cur == ' ') {
//			word_cnt++;
//		}
//
//		prev = cur;
//		i++;
//	}
//
//	if (cur != ' ') {
//		word_cnt++;
//	}
//
//	return word_cnt;
//}
//
//int main() {
//	int count;
//	char test[] = "Hello World!     ";
//	count = word_count(test);
//	printf("word_count(%s) : %d\n", test, count);
//}


//-----------------------------------------------------


