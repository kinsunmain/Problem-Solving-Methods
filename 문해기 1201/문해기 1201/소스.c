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

    result[0] = question("������ ��︮�� ���� �޽��̶�� �����Ѵ�. 1. �� 2. �ƴϿ�\n");
    result[1] = question("��� ���󰡶�� ���� ���� ��´�. 1. �� 2. �ƴϿ�\n");
    //����
    //result[99] = question("���� ���̾�� �÷��ʸ� ���� ���� ����. 1. �� 2. �ƴϿ�\n");

    int E = result[0];
    int I = 25 - E;
    //����
    //int P = 25 - J;

    int result_1, result_2, result_3, result_4;
    char* result1 = calculate(E, I, &result_1, "E", "I");
    /*char* result2 = calculate(S, N, &result_2, "S", "N");
    char* result3 = calculate(T, F, &result_3, "T", "F");
    char* result4 = calculate(J, P, &result_4, "J", "P");*/

    printf("����� %s�� ��ȣ �и� ������ %s : %d �Դϴ�.", result1, result1, result_1);
    //printf("����� %s%s%s%s�� ��ȣ �и� ������ %s : %d, %s : %d, %s : %d, %s : %d �Դϴ�.", );
}