#include <stdio.h>
#include <string>



struct SALARY
{
	char name[20];
	int age;
	double salary;
};

bool read_file(const char file_name[], SALARY salary[]);
bool write_file(const char file_name[], SALARY salary[]);
void copy(const SALARY* src, SALARY* dest);
void raised_10(SALARY salary[]);
void raised_20(SALARY salary[]);
void diff(SALARY salary[], SALARY grouped[]);


int main() {

	SALARY salary[20];
	SALARY original[20];
	if (!read_file("salary_v1.txt", salary)) {
		printf("Error: cannot open file");
		return -1;
	}

	copy(salary, original);


	raised_10(salary);
	if (!write_file("salary_v2.txt", salary)) {
		printf("Error: cannot open file");
		return -1;
	}
	raised_20(salary);
	if (!write_file("salary_v3.txt", salary)) {
		printf("Error: cannot open file");
		return -1;
	}

	diff(salary, original);
	return 0;
}

bool read_file(const char file_name[], SALARY salary[]) {

	FILE* pfile;
	pfile = fopen(file_name, "r");

	SALARY read_salary;
	int num = 0;
	while (fscanf(pfile, "%s %d %lf", &read_salary.name, &read_salary.age, &read_salary.salary) == 3) {
		copy(&read_salary, &salary[num]);
		num++;
	}

	fclose(pfile);
	return true;
}
void copy(const SALARY* src, SALARY* dest) {

	for (int i = 0; i < 20; i++) {
		strcpy(dest[i].name, src[i].name);
		dest[i].age = src[i].age;
		dest[i].salary = src[i].salary;
	}
}


bool write_file(const char file_name[], SALARY salary[]) {

	FILE* pfile;

	pfile = fopen(file_name, "w");

	if (pfile == NULL) {
		printf("Error: cannot write file");
	}


	for (int i = 0; i < 20; i++) {
		fprintf(pfile, "%8s  %d %12.2lf\n", salary[i].name, salary[i].age, salary[i].salary);
	}
	
	fclose(pfile);
	return true;
}


void raised_10(SALARY grouped[]) {
	
	for (int i=0;i<20;i++){
		if (grouped[i].age >= 40) {
			grouped[i].salary *= 1.1;
		}
	}
}
void raised_20(SALARY grouped[]) {

	for (int i = 0; i < 20; i++) {
		if (grouped[i].age >= 30 && grouped[i].age < 40) {
			grouped[i].salary *= 1.2;
		}
	}
}


void diff(SALARY salary[], SALARY original[]) {

	for (int i = 0; i < 20; i++) {
		if (salary[i].salary != original[i].salary) {
			printf("%8s %d %.1lf -> %.1lf Different\n", salary[i].name, salary[i].age, salary[i].salary, original[i].salary);
		}
		else {
			printf("%8s %d %.1lf -> %.1lf\n", salary[i].name, salary[i].age, salary[i].salary, original[i].salary);
		}
	}
}