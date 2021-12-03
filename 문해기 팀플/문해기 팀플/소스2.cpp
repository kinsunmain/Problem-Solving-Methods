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

// make ordered array
void selection_sort(struct DATA original[], struct DATA sorted[]) {
	for (int i = 0; i < 30; i++) {
		copy_element(&original[i], &sorted[i]); // copy in sorted from original
	}

	for (int i = 0; i < 29; i++) { // original order (assume a)
		for (int j = i + 1; j < 30; j++) { // compare with back order elements of a (assume b)
			if (sorted[i].age > sorted[j].age) { // if a > b -> swap a and b location.
				struct DATA temp;
				copy_element(&sorted[i], &temp);
				copy_element(&sorted[j], &sorted[i]);
				copy_element(&temp, &sorted[j]);
			}
		}
	}

}

// print out txt file to grouping data with ordered array
bool write_file_age_group(const char* fname, const struct DATA persons[]) {
	FILE* pFile;

	pFile = fopen(fname, "w");
	if (pFile == NULL) {
		printf("Error : Cannot Open the  File %s\n", fname);
		return false;
	}

	int age = 0;

	for (int i = 0; i < 30; i++) {

		if (age != (persons[i].age / 10) * 10) { // calculate age rounddown and compare variable age
			age = (persons[i].age / 10) * 10; // if not same, print out new age term and update age
			fprintf(pFile, "\nAge from %d to %d\n", age, age + 9);
			fprintf(pFile, "----------------------\n");
		}

		fprintf(pFile, "%d/%s/%s/%s/%d/%s/%s\n", // print out each member
			persons[i].tag,
			persons[i].date,
			persons[i].fee,
			persons[i].name,
			persons[i].age,
			persons[i].organization,
			persons[i].job
		);
	}

	fclose(pFile);
	return true;
}

// insert new node in linked list not ordered
bool InsertKey(struct NODE* head, const struct DATA src) {
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

	return true;
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

// delete data of using "Choi" in name. and store adjust data in deleted array.
void delete_choi(struct DATA original[], struct DATA deleted[], int* num_deleted) {
	int num = *num_deleted; // deleted array's size
	for (int i = 0; i < 30; i++) {
		if (strstr(original[i].name, "Choi") != NULL) { // if "Choi" in name,
			continue; // not copy to deleted array
		}
		else { // if "Choi" not in name, copy to deleted array
			deleted[30 - num].tag = original[i].tag;
			strcpy(deleted[30 - num].date, original[i].date);
			strcpy(deleted[30 - num].fee, original[i].fee);
			strcpy(deleted[30 - num].name, original[i].name);
			deleted[30 - num].age = original[i].age;
			strcpy(deleted[30 - num].organization, original[i].organization);
			strcpy(deleted[30 - num].job, original[i].job);
			num--;
		}
	}
	*num_deleted = 30 - num; // adjust deleted array's size
}

// delete data of using "Choi" in name. this function excute 1 time. need to loop in main
void delete_choi_node(struct NODE* head) {
	struct NODE* p = head->next, * prev = head;
	while (p != NULL) {
		if (strstr(p->name, "Choi") != NULL) {
			break;
		}
		prev = p;
		\
		p = p->next;
	}
	if (p) {
		prev->next = p->next; // node deleted
		free(p); // free memory 
	}
}

int main() {
	struct DATA persons[30];

	// problem 6
	if (!read_file("registraion_data.txt", persons)) { // read txt file and store array
		return -1;
	}
	struct DATA sorted_persons[30];
	selection_sort(persons, sorted_persons); // selection sort

	if (!write_file_age_group("registraion_data_age_group.txt", sorted_persons)) { // grouping write
		return -1;
	}

	// problem 7
	struct NODE* head;

	head = (struct NODE*)malloc(sizeof(struct NODE));

	head->key = 0;
	head->next = NULL;

	for (int i = 0; i < 30; i++) {
		InsertKey(head, persons[i]);
	}

	struct DATA deleted[30]; // array to store copied datd deleted "Choi"
	int num_deleted = 30; // deleted's size
	delete_choi(persons, deleted, &num_deleted);

	// "Choi" delete in linked list
	for (int i = 0; i < 30 - num_deleted; i++) {
		delete_choi_node(head);
	}

	// problem 8

	// insert to array
	deleted[num_deleted].tag = 0;
	strcpy(deleted[num_deleted].date, "2020-11-30");
	strcpy(deleted[num_deleted].fee, "yes");
	strcpy(deleted[num_deleted].name, "Gildong Paik");
	deleted[num_deleted].age = 35;
	strcpy(deleted[num_deleted].organization, "Gachon University");
	strcpy(deleted[num_deleted].job, "Student");


	for (int i = 0; i < num_deleted+1; i++) {
		printf("%d/%s/%s/%s/%d/%s/%s\n", deleted[i].tag, deleted[i].date, deleted[i].fee, deleted[i].name, deleted[i].age, deleted[i].organization, deleted[i].job);
	}


	// insert to linked list
	InsertKey(head, deleted[num_deleted]);

	num_deleted++;



}