// laba6_massiv_dvumer.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	const int R = 15; //���-�� �����
	const int C = 12; //���-�� ��������
	int a[R][C]; //��������� ������ ����������� �������� R � C
	int i(0), j(0); //��������
	srand((unsigned)time(0)); //�������������� ���������� ���������� �������
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			a[i][j] = rand() % 50;
		}
	}
	for (i = 0; i < R; i++) {
		printf("\n\t")
			for (j = 0; j < C; j++) {
				printf("%4d", a[i][j]);
			}
	}


    _getch()
    return 0;
}

