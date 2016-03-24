// laba6_massiv_dvumer.cpp: определяет точку входа для консольного приложения.
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
	const int R = 15; //кол-во строк
	const int C = 12; //кол-во столбцов
	int a[R][C]; //инициализ массив принимающий занчения R и C
	int i(0), j(0); //счетчики
	srand((unsigned)time(0)); //инициализируем заполнение случайными числами
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

