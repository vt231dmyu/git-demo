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
		int num;
		printf("������ �� �� 20 �� 69: "); scanf("%d", &num);
		if (20 <= num && num <= 69) {
			switch (num / 10) {
			case 2: printf("%d - �������� ", num); break;
			case 3: printf("%d - �������� ", num); break;
			case 4: printf("%d - ����� ", num); break;
			case 5: printf("%d - �'������� ", num); break;
			case 6: printf("%d - ��������� ", num); break;
			}
			switch (num % 10) {
			case 1: printf("���� "); break;
			case 2: printf("��� "); break;
			case 3: printf("��� "); break;
			case 4: printf("������ "); break;
			case 5: printf("�'��� "); break;
			case 6: printf("����� "); break;
			case 7: printf("�� "); break;
			case 8: printf("��� "); break;
			case 9: printf("���'��� "); break;
			}
			switch (num % 10) {
			case 1: printf("��"); break;
			case 2:
			case 3:
			case 4: printf("����"); break;
			case 0:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9: printf("����"); break;
			}
		}
		else {
			printf("�������! �������� �� �� ������� � �������� �������");
		}
		break;
	}
	default: {
		printf("�������! ������ �������� �� ��������"); break;
	}
	}

	return 0;
}