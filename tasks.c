#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int task;
	printf("������ ����� ��������: "); scanf("%d", &task);
	switch (task) {
	case 1: {
		int month;
		printf("������ ����� ����� �� (1 �� 12): ");
		scanf("%d", &month);
		switch (month) {
		case 1: printf("ѳ����"); break;
		case 2: printf("�����"); break;
		case 3: printf("��������"); break;
		case 4: printf("������"); break;
		case 5: printf("�������"); break;
		case 6: printf("�������"); break;
		case 7: printf("������"); break;
		case 8: printf("�������"); break;
		case 9: printf("��������"); break;
		case 10: printf("�������"); break;
		case 11: printf("��������"); break;
		case 12: printf("�������"); break;
		default: printf("�������! ������ ����� �� ����"); break;
		}; break;
	}
	case 2: {
		int option;
		float x, y, a, f;
		printf("������ �������� x: "); scanf("%f", &x);
		printf("������ �������� y: "); scanf("%f", &y);

		printf("������ ��� ������� f(x):\n1) sin(x);\n2) x^2;\n3) e^x;\n"); scanf("%d", &option);

		switch (option) {
		case 1: f = sin(x); printf("f(x) = sin(x);"); break;
		case 2: f = pow(x, 2); printf("f(x) = x^2;"); break;
		case 3: f = exp(x); printf("f(x) = e^x;"); break;
		default: printf("�������! ���� ������� �� ��������"); break;
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
	default: {
		printf("�������! ������ �������� �� ��������"); break;
	}
	}

	return 0;
}