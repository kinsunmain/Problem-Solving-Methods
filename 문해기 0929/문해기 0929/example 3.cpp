//#include <stdio.h>
//#include <string.h>
//
//#define NUM_DATASET 5
//#define NUM_TEST_SET 5
//struct DATASET {
//	char name[10];
//	int age;
//	char hobby[10];
//}dataset[NUM_DATASET] = { "Kim",39,"Tennis",
//						"Ko",15,"Soccer",
//						"Lee",17,"Soccer",
//						"Choi",21,"Tennis",
//						"Park",10,"Tennis" };
//
//struct INDEX {
//	char key[10];
//	int index;
//};
//
//int Search_Index(char* search) {
//	int cnt = 0;
//	for (int i = 0; i < NUM_DATASET; i++) {
//		for (int j = 0; dataset[i].name[j] != '\0'; j++) {
//			if (search[j] == dataset[i].name[j]) {
//				cnt++;
//
//			}
//		}
//		if (cnt > 2) {
//			return i;
//		}
//
//	}
//
//
//	return -1;
//}
//
//int main() {
//	char test_search_keys[NUM_TEST_SET][10] = { "Choi","Lee","Park","Kim","Jung" };
//	
//	for (int t = 0; t < NUM_TEST_SET; t++) {
//		char* search_key = test_search_keys[t];
//		int index = Search_Index(search_key);
//
//		printf("\n//--- Experiment (%d) ---\n", t + 1);
//		printf("[Key:] [%s]\n", search_key);
//		if (index < 0) {
//			printf("The key does not exist !!\n");
//		}
//		else {
//			printf("result: index(%d), name(%s), age(%d), hobby(%s)\n "
//				,index+1, dataset[index].name, dataset[index].age, dataset[index].hobby);
//		}
//	}
//}