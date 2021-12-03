#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

// Data structure using array
struct DATA {
    int tag;
    char date[20];
    char fee[10];
    char name[30];
    int age;
    char organization[40];
    char job[20];
};

// Node structure using linked list 
struct  NODE {
    int key; // size of linked list. using in head
    int tag;
    char date[20];
    char fee[10];
    char name[30];
    int age;
    char organization[40];
    char job[20];
    struct NODE* next;
};

// function using in readfile and store array. copy structure
void copy_element(const struct DATA* src, struct DATA* dest) {
    dest->tag = src->tag;
    strcpy(dest->date, src->date);
    strcpy(dest->fee, src->fee);
    strcpy(dest->name, src->name);
    dest->age = src->age;
    strcpy(dest->organization, src->organization);
    strcpy(dest->job, src->job);
}

// read txt file and store in array
bool read_file(const char* fname, struct DATA persons[]) {
    FILE* pFile = NULL;

    pFile = fopen(fname, "r"); // open file
    if (pFile == NULL) {
        printf("Error : Cannot Read File %s\n", fname);
        return false;
    }

    struct DATA read_person; // create temp struct
    int num = 0;;
    char strTemp[500]; // buffer
    for (int i = 0; i < 30; i++) {
        fgets(strTemp, sizeof(strTemp), pFile); // read each line of txt
        char* ptr = strtok(strTemp, "/"); // split line to each word
        while (true) {
            switch (num)
            {
            case 0:
                read_person.tag = atoi(ptr); // store in temp
                ptr = strtok(NULL, "/");
                break;
            case 1:
                strcpy(read_person.date, ptr);
                ptr = strtok(NULL, "/");
                break;
            case 2:
                strcpy(read_person.fee, ptr);
                ptr = strtok(NULL, "/");
                break;
            case 3:
                strcpy(read_person.name, ptr);
                ptr = strtok(NULL, "/");
                break;
            case 4:
                read_person.age = atoi(ptr);
                ptr = strtok(NULL, "/");
                break;
            case 5:
                strcpy(read_person.organization, ptr);
                ptr = strtok(NULL, "\n");
                break;
            case 6:
                strcpy(read_person.job, ptr);
                break;
            default:
                break;
            }
            if (num == 6) {
                break;
            }
            num++;
        }
        num = 0;
        copy_element(&read_person, &persons[i]); // copy in array
    }

    fclose(pFile);
    return true;
}

// insert new node in linked list not ordered
void InsertKey(struct NODE* head, const struct DATA src) {
    struct NODE* p = head->next, * prev = head;
    struct NODE* new_node; // create point variable
    int num = 1; // head key (size of linked list)
    while (p != NULL) { // loop ston in end node
        prev = p;
        p = p->next;
        num++;
    }
    new_node = (struct NODE*)malloc(sizeof(struct NODE)); // assign memory

    // copy data in array to new node
    new_node->tag = src.tag;
    strcpy(new_node->date, src.date);
    strcpy(new_node->fee, src.fee);
    strcpy(new_node->name, src.name);
    new_node->age = src.age;
    strcpy(new_node->organization, src.organization);
    strcpy(new_node->job, src.job);

    // link new node
    prev->next = new_node;
    new_node->next = p;
    head->key = num; // head's key adjust to size of linked list
}

// traverse linked list and print out each member
void ScanList(struct NODE* head) {
    struct NODE* ptr = NULL;
    int index = 0;
    ptr = head->next;
    while (ptr != NULL) {
        printf("list [%d] key : %d/%s/%s/%s/%d/%s/%s\n", index + 1, ptr->tag, ptr->date, ptr->fee, ptr->name, ptr->age, ptr->organization, ptr->job);
        ptr = ptr->next;
        index++;
    }
}

void paik_registere_arr(struct NODE* head, int paik_tag) {

    struct NODE* p = head->next, * prev = head;
    struct NODE* new_node; // create point variable
    int num = 1; // head key (size of linked list)
    while (p != NULL) { // loop ston in end node
        prev = p;
        p = p->next;
        num++;
    }
    new_node = (struct NODE*)malloc(sizeof(struct NODE)); // assign memory

    // copy data in array to new node
    new_node->tag = paik_tag;
    strcpy(new_node->date, "2020-11-30");
    strcpy(new_node->fee, "yes");
    strcpy(new_node->name, "Gildong Paik");
    new_node->age = 35;
    strcpy(new_node->organization, "Gachon University");
    strcpy(new_node->job, "Student");

    // link new node
    prev->next = new_node;
    new_node->next = p;
    head->key = num;


}

int main() {
    struct DATA persons[30];

    if (!read_file("registraion_data.txt", persons)) { // read txt file and store array
        return -1;
    }

    struct NODE* head;

    head = (struct NODE*)malloc(sizeof(struct NODE));

    head->key = 0;
    head->next = NULL;

    for (int i = 0; i < 30; i++) {
        InsertKey(head, persons[i]);
    }

    int paik_tag = 111;
    paik_registere_arr(head, paik_tag);

    ScanList(head);
}