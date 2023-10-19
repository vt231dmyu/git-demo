#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int task;
	printf("Введіть номер завдання: "); scanf("%d", &task);
	switch (task) {
	case 1: {
		int month;
		printf("Введіть номер місяця від (1 до 12): ");
		scanf("%d", &month);
		switch (month) {
		case 1: printf("Січень"); break;
		case 2: printf("Лютий"); break;
		case 3: printf("Березень"); break;
		case 4: printf("Квітень"); break;
		case 5: printf("Травень"); break;
		case 6: printf("Червень"); break;
		case 7: printf("Липень"); break;
		case 8: printf("Серпень"); break;
		case 9: printf("Вересень"); break;
		case 10: printf("Жовтень"); break;
		case 11: printf("Листопад"); break;
		case 12: printf("Грудень"); break;
		default: printf("ПОМИЛКА! Такого місяця не існує"); break;
		}; break;
	}
	case 2: {
		int option;
		float x, y, a, f;
		printf("Введіть значення x: "); scanf("%f", &x);
		printf("Введіть значення y: "); scanf("%f", &y);

		printf("Оберіть вид функції f(x):\n1) sin(x);\n2) x^2;\n3) e^x;\n"); scanf("%d", &option);

		switch (option) {
		case 1: f = sin(x); printf("f(x) = sin(x);"); break;
		case 2: f = pow(x, 2); printf("f(x) = x^2;"); break;
		case 3: f = exp(x); printf("f(x) = e^x;"); break;
		default: printf("ПОМИЛКА! Такої функції не знайдено"); break;
		}

		if (option == 1 || option == 2 || option == 3) {
			if (fabs(x * y) > 10) {
				a = log(fabs(f) + fabs(y));
			}
			else if (fabs(x * y) < 10) {
				a = exp(f + y);
			}
			else {
				a = pow(fabs(f), 1.0 / 3) + y;
			}

			printf("\na = %f", a);
		}; break;
	}
	case 3: {
		int num;
		printf("Введіть вік від 20 до 69: "); scanf("%d", &num);
		if (20 <= num && num <= 69) {
			switch (num / 10) {
			case 2: printf("%d - двадцять ", num); break;
			case 3: printf("%d - тридцять ", num); break;
			case 4: printf("%d - сорок ", num); break;
			case 5: printf("%d - п'ятдесят ", num); break;
			case 6: printf("%d - шістдесят ", num); break;
			}
			switch (num % 10) {
			case 1: printf("один "); break;
			case 2: printf("два "); break;
			case 3: printf("три "); break;
			case 4: printf("чотири "); break;
			case 5: printf("п'ять "); break;
			case 6: printf("шість "); break;
			case 7: printf("сім "); break;
			case 8: printf("вісім "); break;
			case 9: printf("дев'ять "); break;
			}
			switch (num % 10) {
			case 1: printf("рік"); break;
			case 2:
			case 3:
			case 4: printf("роки"); break;
			case 0:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9: printf("років"); break;
			}
		}
		else {
			printf("ПОМИЛКА! Введений вік не входить у вказаний проміжок");
		}
		break;
	}
	default: {
		printf("ПОМИЛКА! Такого завдання не знайдено"); break;
	}
	}

	return 0;
}