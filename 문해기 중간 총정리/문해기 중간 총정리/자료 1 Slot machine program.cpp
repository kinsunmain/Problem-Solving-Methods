//#include <stdio.h>
//#include <random>
//
//#define BAR 1
//#define BELL 2
//#define LEMON 3
//#define CHERRY 4
//#define OUTCOMES 4
//
//void check_slot(int slot);
//void check_JACKPOT(int slot1, int slot2, int slot3);
//
//int main() {
//
//	int slot1;
//	int slot2;
//	int slot3;
//	int check = 1;
//	
//	printf("Welcome to KW Land\n");
//	printf("Please pull the slot machine!!\n\n");
//
//	do{
//		check = 1;
//		slot1 = 1 + rand() % OUTCOMES;
//		slot2 = 1 + rand() % OUTCOMES;
//		slot3 = 1 + rand() % OUTCOMES;
//
//
//		printf("First is ");
//		check_slot(slot1);
//		printf("Second is ");
//		check_slot(slot2);
//		printf("Third is ");
//		check_slot(slot3);
//
//		check_JACKPOT(slot1, slot2, slot3);
//
//		printf("\nPress any key to '0'\n");
//		scanf_s("%d", &check);
//
//	
//	}while (check != '0');
//	
//}
//
//void check_slot(int slot) {
//
//	if (slot == 1)
//		printf("BAR\n");
//	else if (slot == 2)
//		printf("BELL\n");
//	else if (slot == 3)		
//		printf("LEMON\n");
//	else
//		printf("JACKPOT\n");
//}
//
//void check_JACKPOT(int slot1, int slot2, int slot3){
//
//	if (slot1 == 4 && slot2 == 4 && slot3 == 4) {
//		printf("Paid out : JACKPOT\n");
//	}
//	else if ((slot1 == 4) || (slot2 == 4) || (slot3 == 4)) {
//		printf("Paid out : One Dime\n");
//	}
//	else if (slot1 == slot2 && slot2 == slot3) {
//		printf("Paid out : NICKEL\n");
//	}
//	else {
//		printf("Sorry. Better Luck Next Time\n");
//	}
//}