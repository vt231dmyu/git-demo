#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int task;
	printf("¬вед≥ть номер завданн€: "); scanf("%d", &task);
	switch (task) {
	case 1: {
		int month;
		printf("¬вед≥ть номер м≥с€ц€ в≥д (1 до 12): ");
		scanf("%d", &month);
		switch (month) {
		case 1: printf("—≥чень"); break;
		case 2: printf("Ћютий"); break;
		case 3: printf("Ѕерезень"); break;
		case 4: printf(" в≥тень"); break;
		case 5: printf("“равень"); break;
		case 6: printf("„ервень"); break;
		case 7: printf("Ћипень"); break;
		case 8: printf("—ерпень"); break;
		case 9: printf("¬ересень"); break;
		case 10: printf("∆овтень"); break;
		case 11: printf("Ћистопад"); break;
		case 12: printf("√рудень"); break;
		default: printf("ѕќћ»Ћ ј! “акого м≥с€ц€ не ≥снуЇ"); break;
		}; break;
	}
	case 2: {
		int num;
		printf("¬вед≥ть в≥к в≥д 20 до 69: "); scanf("%d", &num);
		if (20 <= num && num <= 69) {
			switch (num / 10) {
			case 2: printf("%d - двадц€ть ", num); break;
			case 3: printf("%d - тридц€ть ", num); break;
			case 4: printf("%d - сорок ", num); break;
			case 5: printf("%d - п'€тдес€т ", num); break;
			case 6: printf("%d - ш≥стдес€т ", num); break;
			}
			switch (num % 10) {
			case 1: printf("один "); break;
			case 2: printf("два "); break;
			case 3: printf("три "); break;
			case 4: printf("чотири "); break;
			case 5: printf("п'€ть "); break;
			case 6: printf("ш≥сть "); break;
			case 7: printf("с≥м "); break;
			case 8: printf("в≥с≥м "); break;
			case 9: printf("дев'€ть "); break;
			}
			switch (num % 10) {
			case 1: printf("р≥к"); break;
			case 2:
			case 3:
			case 4: printf("роки"); break;
			case 0:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9: printf("рок≥в"); break;
			}
		}
		else {
			printf("ѕќћ»Ћ ј! ¬ведений в≥к не входить у вказаний пром≥жок");
		}
		break;
	}
	default: {
		printf("ѕќћ»Ћ ј! “акого завданн€ не знайдено"); break;
	}
	}

	return 0;
}