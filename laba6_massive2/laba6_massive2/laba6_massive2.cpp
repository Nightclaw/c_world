// laba6_massive2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//Дан двумерный маассив, число столбцов и строк не совпадают. Нужно найти min  и max значения и их номера строк и столбцов. Результат вывести на экран.


int main()
{
	setlocale(LC_ALL, "RUS");
	const int R = 2; //кол-во строк
	const int C = 3; //кол-во столбцов
	int a[R][C]; //инициализ массив принимающий занчения R и C
	int b[1][1] = { 0 };
	int c[1][1] = { 0 };
	int i(0), j(0), l(0), m(0), k(0), p(0); //счетчики
	int min, max;


	//Задаем и выводим массив

	srand((unsigned)time(0)); //инициализируем заполнение случайными числами
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

	//ищем минимальное и максимальное значение

	printf("\n\n Минимальное и максимальное значение: \n");
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
	//печать
	printf("\n\t Max:");
	printf("%d(%d;%d);", max, l, m);
	printf("\n\t Min:");
	printf("%d(%d;%d);\n", min, k, p);

	//Задаем и выводим одномерный массив
	const int W = 5; //кол-во элементов в массиве
	int z[W] = { 0 }; //инициализировать массив
	int i1; //счетчик

	printf("\n");
	srand((unsigned)time(0)); //инициализируем заполнение случайными числами
	for (i = 0; i < W; i++) {
		z[i] = rand() % 50;
	}
	for (i = 0; i < W; i++) {
		//printf("\n\t");
		printf("%4d;", z[i]);
	}

	//Сортируем


	_getch();
	return 0;
}

