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
//    struct DATA* next;
//}datas[31];
//
//bool InsertKey(struct DATA* head)
//{
//    // Start from head->next instead of head 
//    struct DATA* p = head->next, * prev = head;
//    struct DATA* new_node;
//
//    while (p)
//    {
//
//        prev = p;
//        p = p->next;
//    }
//
//
//    // adjust next pointers 
//    if (prev == head)
//    {
//        new_node->next = head->next;
//        head->next = new_node;
//    }
//    else
//    {
//        prev->next = new_node;
//        new_node->next = p;
//    }
//    head->key += 1; // num elements sotred here
//    return true;
//}
//void search_string_linked(const struct DATA* rgst_data, const char* search_name) //1-2 linked list
//{
//    struct NODE* p = head->next;
//    printf("//------ Search by Choi in list ------//\n");
//    for (int i = 0; i < 30; i++) {
//        char* field = strtok(p->name, " ");
//        field = strtok(NULL, " ");
//        if (strcmp(field, "Choi") == 0) {
//            printf("%d %s %s %s %d %s %s", p->tag,
//                p->date,
//                p->fee_paid,
//                p->name,
//                p->age,
//                p->organization,
//                p->job);
//        }
//        p = p->next;
//    }
//
//
//}
//int main()
//{
//    char file_name[30] = { "registraion_data.txt" };
//    char data[ROW][100];
//    int row = ROW;
//    char search_name[5] = "Choi";
//    struct DATA* head;
//    head = (struct DATA*)malloc(sizeof(struct DATA));
//    head->rgst_num = 0;
//    head->next = NULL;
//
//    if (!read_file(file_name, data, row))
//        return -1;
//
//    organize_data(data, row, datas);
//
//    //search_struct_name(datas, "Choi", row);
//
//    search_string_linked(datas, search_name);
//
//    //search_struct_organ(datas, "Gachon University", row);
//
//    sort_by_tag(datas, row);
//
//    //write_to_file("Sorted_by_tag.my", datas, row);
//
//    //sort_by_age(datas, row);
//
//    //write_to_file("Sorted_by_age.my", datas, row);
//
//    //write_to_file_grp("P5-1.txt", datas, row);
//
//    //cancel_rgst(datas, "Choi", &row);
//
//    //write_to_file("Sorted_by_age_delete_Choi.my", datas, row);
//
//    //insert_data(datas, "00/2020-11-30/yes/Gildong Paik/35/Gachon University/Student", &row); // 새로 추가하는 데이터의 registration number가 뭔지 모르기 때문에 일단 00으로 시작
//
//    //write_to_file("Sorted_by_age_added_Paik.my", datas, row);
//
//    return 0;
//}