//#define _CRT_SECURE_NO_WARNINGS
//#define _CRT_NONSTDC_NO_DEPRECATE // itoa()함수가 오류가 생겨서 추가
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define ROW 30
//
//struct DATA
//{
//    int rgst_num;
//    char date[11];
//    char fee[4];
//    char name[25];
//    int age;
//    char organ[35];
//    char job[15];
//}datas[31];
//
//bool read_file(const char* file_name, char data[][100], const int row) // reads registration file and saves it to string 'data'
//{
//    FILE* rgst_file = NULL;
//    rgst_file = fopen(file_name, "r");
//    if (rgst_file == NULL)
//    {
//        printf("Could not open file!");
//        return false;
//    }
//
//    for (int i = 0; i < row; i++)
//    {
//        fgets(data[i], 100, rgst_file);
//    }
//
//    fclose(rgst_file);
//    return true;
//}
//
//void organize_data(const char data[][100], const int row, DATA* rgst_data) // organizes and moves data to structure
//{
//    int tmp;
//    int num;
//    char temp[10];
//
//    for (int i = 0; i < row; i++)
//    {
//        tmp = 0;
//        num = 0;
//        for (int j = 0; j < 100; j++)
//        {
//            if (data[i][j] == '/')
//            {
//                switch (num)
//                {
//                case 0:
//                    strncpy(temp, data[i] + tmp, j - tmp);
//                    rgst_data->rgst_num = atoi(temp);
//                    tmp = j + 1;
//                    num++;
//                    break;
//                case 1:
//                    strncpy(rgst_data[i].date, data[i] + tmp, j - tmp);
//                    tmp = j + 1;
//                    num++;
//                    break;
//                case 2:
//                    strncpy(rgst_data[i].fee, data[i] + tmp, j - tmp);
//                    tmp = j + 1;
//                    num++;
//                    break;
//                case 3:
//                    strncpy(rgst_data[i].name, data[i] + tmp, j - tmp);
//                    tmp = j + 1;
//                    num++;
//                    break;
//                case 4:
//                    strncpy(temp, data[i] + tmp, j - tmp);
//                    rgst_data->rgst_num = atoi(temp);
//                    tmp = j + 1;
//                    num++;
//                    break;
//                case 5:
//                    strncpy(rgst_data[i].organ, data[i] + tmp, j - tmp);
//                    tmp = j + 1;
//                    num++;
//                    strcpy(rgst_data[i].job, data[i] + tmp);
//                    break;
//                default:
//                    break;
//                }
//            }
//        }
//    }
//}
//
//bool search_string(const char* string, const char* search)
//{
//    int search_len = strlen(search), string_len = strlen(string);
//    for (int i = 0; i < string_len - search_len + 1; i++)
//    {
//        if (strncmp(string + i, search, search_len) == 0)
//            return true;
//    }
//    return false;
//}
//
//void search_struct_name(const DATA* rgst_data, const char* search_name, const int row) // searches the structure for a certain name 1-1 문제
//{
//    printf("Search result for name: \"%s\": \n\n", search_name);
//
//    for (int i = 0; i < row; i++)
//    {
//        if (search_string(rgst_data[i].name, search_name))
//        {
//            printf("Registration Number: %-5d, registration date: %-13s, fee-paid: %-6s, name: %-27s, age: %-5d, organization: %-37s, job: %s\n",
//                rgst_data[i].rgst_num,
//                rgst_data[i].date,
//                rgst_data[i].fee,
//                rgst_data[i].name,
//                rgst_data[i].age,
//                rgst_data[i].organ,
//                rgst_data[i].job
//            );
//        }
//    }
//
//    printf("\n\n");
//}
//
//void search_struct_organ(const DATA* rgst_data, const char* search_univ, const int row) // searches the structure for a certain University 2-1 문제
//{
//    printf("Search result for organization: \"%s\": \n\n", search_univ);
//
//    for (int i = 0; i < row; i++)
//    {
//        if (search_string(rgst_data[i].organ, search_univ))
//        {
//            printf("Registration Number: %-5d, registration date: %-13s, fee-paid: %-6s, name: %-27s, age: %-5d, organization: %-37s, job: %-17s\n",
//                rgst_data[i].rgst_num,
//                rgst_data[i].date,
//                rgst_data[i].fee,
//                rgst_data[i].name,
//                rgst_data[i].age,
//                rgst_data[i].organ,
//                rgst_data[i].job
//            );
//        }
//    }
//
//    printf("\n\n");
//}
//
//void copy_struct(DATA* dest, const DATA* src)
//{
//    dest->rgst_num = src->rgst_num;
//    strcpy(dest->date, src->date);
//    strcpy(dest->fee, src->fee);
//    strcpy(dest->name, src->name);
//    dest->age = src->age;
//    strcpy(dest->organ, src->organ);
//    strcpy(dest->job, src->job);
//}
//
//void sort_by_tag(DATA* rgst_data, const int row) // 3-1 문제
//{
//    int min_index = 0;
//    DATA temp;
//    for (int i = 1; i < row; i++)
//    {
//        for (int j = i; j < row; j++)
//        {
//            if (rgst_data[j].rgst_num < rgst_data[min_index].rgst_num)
//            {
//                min_index = j;
//            }
//        }
//        copy_struct(&temp, rgst_data + (i - 1));
//        copy_struct(rgst_data + (i - 1), rgst_data + (min_index));
//        copy_struct(rgst_data + (min_index), &temp);
//        min_index = i;
//    }
//}
//
//void sort_by_age(DATA* rgst_data, const int row) //5-1 문제, 나이순으로 정렬
//{
//    int min_index = 0;
//    DATA temp;
//    for (int i = 1; i < row; i++)
//    {
//        for (int j = i; j < row; j++)
//        {
//            if (rgst_data[j].age < rgst_data[min_index].age)
//            {
//                min_index = j;
//            }
//        }
//        copy_struct(&temp, rgst_data + (i - 1));
//        copy_struct(rgst_data + (i - 1), rgst_data + (min_index));
//        copy_struct(rgst_data + (min_index), &temp);
//        min_index = i;
//    }
//}
//
//bool write_to_file(const char* file_name, const DATA* rgst_data, const char row)
//{
//    FILE* write_file = NULL;
//    write_file = fopen(file_name, "w");
//    if (write_file == NULL)
//    {
//        printf("Could not open file!");
//        return false;
//    }
//
//    for (int i = 0; i < row; i++)
//    {
//        fprintf(write_file, "Registration Number: %-5d, registration date: %-13s, fee-paid: %-6s, name: %-27s, age: %-5d, organization: %-37s, job: %-17s\n",
//            rgst_data[i].rgst_num,
//            rgst_data[i].date,
//            rgst_data[i].fee,
//            rgst_data[i].name,
//            rgst_data[i].age,
//            rgst_data[i].organ,
//            rgst_data[i].job);
//    }
//
//    fclose(write_file);
//    return true;
//}
//
//bool write_to_file_grp(const char* file_name, const DATA* rgst_data, const char row)
//{
//    FILE* write_file = NULL;
//    write_file = fopen(file_name, "w");
//    if (write_file == NULL)
//    {
//        printf("Could not open file!");
//        return false;
//    }
//
//    int k = 0;
//
//    for (int i = 0; i < row; i++)
//    {
//        if ((rgst_data[i].age) / 10 != k)
//            fprintf(write_file, "\nage group: %d\n", 10 * (rgst_data[i].age / 10));
//        fprintf(write_file, "Registration Number: %-5d, registration date: %-13s, fee-paid: %-6s, name: %-27s, age: %-5d, organization: %-37s, job: %-17s\n",
//            rgst_data[i].rgst_num,
//            rgst_data[i].date,
//            rgst_data[i].fee,
//            rgst_data[i].name,
//            rgst_data[i].age,
//            rgst_data[i].organ,
//            rgst_data[i].job);
//        k = rgst_data[i].age / 10;
//    }
//
//    fclose(write_file);
//    return true;
//}
//
//void cancel_rgst(DATA* rgst_data, const char* cancel_name, int* row) //6-1 문제
//{
//    int count = 0;
//    for (int i = 0; i < *row; i++)
//    {
//        if (search_string(rgst_data[i].name, cancel_name))
//        {
//            for (int j = i; j < *row - count; j++)
//            {
//                copy_struct(&rgst_data[j], &rgst_data[j + 1]);
//            }
//            count++;
//        }
//    }
//    *row -= count;
//}
//
//void insert_data(DATA* rgst_data, const char* string, int* row) // 7-1 문제 가장 작은 unique registration number을 찾아서 새로 추가하는 데이터의 registration number로 사용, 5-1 문제에서 나이순으로 정렬했기 때문에 나이순에 맞도록 새로운 데이터를 추가
//{
//    int j = 0, temp = 0, st = 0;
//    char tmp[7][35] = { 0 };
//    for (int i = 0; i < 7; i++)
//    {
//        while (string[j] != '/')
//        {
//            if (string[j] == '\0')
//            {
//                st = 1;
//                break;
//            }
//            tmp[i][temp] = string[j];
//            temp++;
//            j++;
//        }
//        if (st == 1)
//            break;
//        temp = 0;
//        j++;
//    }
//    int min = 1, i;
//
//    while (1)
//    {
//        for (i = 0; i < ROW; i++)
//        {
//            if (rgst_data[i].rgst_num == min)
//            {
//                min++;
//                break;
//            }
//        }
//        if (i == ROW)
//            break;
//    }
//
//    itoa(min, tmp[0], 10);
//
//    for (i = 0; i < *row; i++)
//    {
//        if (rgst_data[i].age > atoi(tmp[4]))
//            break;
//    }
//
//    for (int k = *row; k > i; k--)
//    {
//        copy_struct(&rgst_data[k + 1], &rgst_data[k]);
//    }
//    rgst_data[i].rgst_num = atoi(tmp[0]);
//    strcpy(rgst_data[i].date, tmp[1]);
//    strcpy(rgst_data[i].fee, tmp[2]);
//    strcpy(rgst_data[i].name, tmp[3]);
//    rgst_data[i].age = atoi(tmp[4]);
//    strcpy(rgst_data[i].organ, tmp[5]);
//    strcpy(rgst_data[i].job, tmp[6]);
//
//    *row += 1;
//}
//
//int main()
//{
//    char file_name[30] = { "registraion_data.txt" };
//    char data[ROW][100];
//    int row = ROW;
//
//    if (!read_file(file_name, data, row))
//        return -1;
//
//    organize_data(data, row, datas);
//
//    search_struct_name(datas, "Choi", row);
//
//    search_struct_organ(datas, "Gachon University", row);
//
//    sort_by_tag(datas, row);
//
//    write_to_file("Sorted_by_tag.my", datas, row);
//
//    sort_by_age(datas, row);
//
//    write_to_file("Sorted_by_age.my", datas, row);
//
//    write_to_file_grp("P5-1.txt", datas, row);
//
//    cancel_rgst(datas, "Choi", &row);
//
//    write_to_file("Sorted_by_age_delete_Choi.my", datas, row);
//
//    insert_data(datas, "00/2020-11-30/yes/Gildong Paik/35/Gachon University/Student", &row); // 새로 추가하는 데이터의 registration number가 뭔지 모르기 때문에 일단 00으로 시작
//
//    write_to_file("Sorted_by_age_added_Paik.my", datas, row);
//
//    return 0;
//}