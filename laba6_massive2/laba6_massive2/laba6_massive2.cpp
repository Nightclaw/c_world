// laba6_massive2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//��� ��������� �������, ����� �������� � ����� �� ���������. ����� ����� min  � max �������� � �� ������ ����� � ��������. ��������� ������� �� �����.


int main()
{
	setlocale(LC_ALL, "RUS");
	const int R = 2; //���-�� �����
	const int C = 3; //���-�� ��������
	int a[R][C]; //��������� ������ ����������� �������� R � C
	int b[1][1] = { 0 };
	int c[1][1] = { 0 };
	int i(0), j(0), l(0), m(0), k(0), p(0); //��������
	int min, max;


	//������ � ������� ������

	srand((unsigned)time(0)); //�������������� ���������� ���������� �������
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			a[i][j] = rand() % 50;
		}
	}
	for (i = 0; i < R; i++) {
		printf("\n\t");
		for (j = 0; j < C; j++) {
			printf("%4d", a[i][j]);
		}
	}

	//���� ����������� � ������������ ��������

	printf("\n\n ����������� � ������������ ��������: \n");
	min = max = a[0][0];
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			if (a[i][j]> max) {
				l = i;
				m = j;
				max = a[i][j];
			}
			if (a[i][j] < min) {
				k = i;
				p = j;
				min = a[i][j];
			}

		}
	}
	//������
	printf("\n\t Max:");
	printf("%d(%d;%d);", max, l, m);
	printf("\n\t Min:");
	printf("%d(%d;%d);\n", min, k, p);

	//������ � ������� ���������� ������
	const int W = 5; //���-�� ��������� � �������
	int z[W] = { 0 }; //���������������� ������
	int i1; //�������

	printf("\n");
	srand((unsigned)time(0)); //�������������� ���������� ���������� �������
	for (i = 0; i < W; i++) {
		z[i] = rand() % 50;
	}
	for (i = 0; i < W; i++) {
		//printf("\n\t");
		printf("%4d;", z[i]);
	}

	//���������


	_getch();
	return 0;
}

