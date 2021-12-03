#include <stdio.h>
#include <string.h>

int question(char q[])
{
    char yes[4] = "yes"; // using array
    char* no = "no"; // using pointer variable
    char answer[4];
    printf("%s : ", q);
    scanf("%s", answer);
    if (strcmp(answer, yes) == 0)
        return 1;
    else if (strcmp(answer, no) == 0)
        return 0;
    else
        return -1;
}

char* calculate(int x, int y, int* z, char* a, char* b)
{
    if (x > y)
    {
        *z = x;
        return a;
    }
    else
    {
        *z = y;
        return b;
    }

}

void main()
{

    int result[100];

    result[0] = question("사람들과 어울리는 것이 휴식이라고 생각한다. 1. 예 2. 아니오\n");
    result[1] = question("평소 몽상가라는 말을 많이 듣는다. 1. 예 2. 아니오\n");
    //생략
    //result[99] = question("나는 다이어리나 플래너를 쓰는 것을 즐긴다. 1. 예 2. 아니오\n");

    int E = result[0];
    int I = 25 - E;
    //생략
    //int P = 25 - J;

    int result_1, result_2, result_3, result_4;
    char* result1 = calculate(E, I, &result_1, "E", "I");
    /*char* result2 = calculate(S, N, &result_2, "S", "N");
    char* result3 = calculate(T, F, &result_3, "T", "F");
    char* result4 = calculate(J, P, &result_4, "J", "P");*/

    printf("결과는 %s로 선호 분명도 지수는 %s : %d 입니다.", result1, result1, result_1);
    //printf("결과는 %s%s%s%s로 선호 분명도 지수는 %s : %d, %s : %d, %s : %d, %s : %d 입니다.", );
}