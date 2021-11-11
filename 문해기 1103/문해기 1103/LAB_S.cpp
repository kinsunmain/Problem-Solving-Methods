//#include <stdio.h>
//#include <string>
//
//
//struct VOTE
//{
//	char region[20];
//	int age;
//	char candidate_voted[20];
//};
//
//bool read_file(const char *file_name, VOTE vote[]);
//void compute_vote(const VOTE vote[], double*wash, double*lin, double*roos);
//void compute_vote_3(const VOTE vote[], double* wash, double* lin, double* roos);
//void compute_vote_10(const VOTE vote[], double* wash, double* lin, double* roos);
//
//void copy(const VOTE* soc, VOTE* dest);
//
//
//int main() {
//
//	VOTE vote[2001];
//	double wash = 0;
//	double lin = 0;
//	double roos = 0;
//
//	if (!read_file("vote.txt", vote)) {
//		return -1;
//	}
//
//	compute_vote(vote, &wash, &lin, &roos);
//	printf("\neach candidate received : \n");
//	printf("Washington: [%lf] Lincoln: [%lf] Roosevelt: [%lf]\n", wash, lin, roos);
//	compute_vote_3(vote, &wash, &lin, &roos);
//	printf("\nThird row candidate received : \n");
//	printf("Washington: [%lf] Lincoln: [%lf] Roosevelt: [%lf]\n", wash, lin, roos);
//	compute_vote_10(vote, &wash, &lin, &roos);
//	printf("\nTenth row received : \n");
//	printf("Washington: [%lf] Lincoln: [%lf] Roosevelt: [%lf]\n", wash, lin, roos);
//	
//
//	return 0;
//}
//
//bool read_file(const char* file_name, VOTE vote[]) {
//
//	FILE* pFILE;
//
//	pFILE = fopen(file_name, "r");
//
//	if (pFILE == NULL) {
//		printf("Error: Cannot read file");
//		return false;
//	}
//
//	VOTE read_vote;
//	int num = 0;
//
//	while (fscanf(pFILE, "%s %d %s", read_vote.region, &read_vote.age, read_vote.candidate_voted) == 3) {
//		copy(&read_vote, &vote[num]);
//		num++;
//	}
//}
//
//
//void copy(const VOTE* soc, VOTE* dest){
//	strcpy(dest->region, soc->region);
//	dest->age = soc->age;
//	strcpy(dest->candidate_voted, soc->candidate_voted);
//}
//
//void compute_vote(const VOTE vote[], double *wash, double*lin, double*roos) {
//	*wash = 0;
//	*lin = 0;
//	*roos = 0;
//	for (int i = 0; i < 2000; i++) {
//		if (strcmp( vote[i].candidate_voted , "Washington")==0) {
//			*wash= *wash+1;
//		}
//		else if (strcmp(vote[i].candidate_voted, "Lincoln") == 0) {
//			*lin= *lin+1;
//		}
//		else if (strcmp(vote[i].candidate_voted, "Roosevelt") == 0) {
//			*roos= *roos+1;
//		}
//	}
//
//	*wash = (*wash / 2000) * 100;
//	*lin = (*lin / 2000) * 100;
//	*roos = (*roos / 2000) * 100;
//}
//void compute_vote_3(const VOTE vote[], double* wash, double* lin, double* roos) {
//	*wash = 0;
//	*lin = 0;
//	*roos = 0;
//	for (int i = 0; i < 2000; i = i + 3) {
//		if (strcmp(vote[i].candidate_voted, "Washington") == 0) {
//			*wash = *wash + 1;
//		}
//		else if (strcmp(vote[i].candidate_voted, "Lincoln") == 0) {
//			*lin = *lin + 1;
//		}
//		else if (strcmp(vote[i].candidate_voted, "Roosevelt") == 0) {
//			*roos = *roos + 1;
//		}
//	}
//
//	*wash = (*wash / 667) * 100;
//	*lin = (*lin / 667) * 100;
//	*roos = (*roos / 667) * 100;
//}
//void compute_vote_10(const VOTE vote[], double* wash, double* lin, double* roos) {
//	*wash = 0;
//	*lin = 0;
//	*roos = 0;
//	for (int i = 0; i < 2000; i=i+10) {
//		if (strcmp(vote[i].candidate_voted, "Washington") == 0) {
//			*wash = *wash + 1;
//		}
//		else if (strcmp(vote[i].candidate_voted, "Lincoln") == 0) {
//			*lin = *lin + 1;
//		}
//		else if (strcmp(vote[i].candidate_voted, "Roosevelt") == 0) {
//			*roos = *roos + 1;
//		}
//	}
//
//	*wash = (*wash / 200) * 100;
//	*lin = (*lin / 200) * 100;
//	*roos = (*roos / 200) * 100;
//}