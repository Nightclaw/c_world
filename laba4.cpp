// laba4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
bool next()
	{
		const char key0 = '0', key1 = '1';
		int loop(1);  //условие запуска цикла
		char cb('0'); //переменная для хранения ввода пользователя
		printf ("\n\n Меню игры:");
		printf ("\n\n 0 - выход; \n 1 - играть; \n\n Ваш выбор...?:");
		while (loop)
			{
				cb = _getch();
				if ((cb == key0) || (cb == key1))
					{
						loop--;
					}	
			}
		return cb != key0;
	}

void show_result(unsigned total, unsigned count) {
	double p = (!total) ? 0.0 : \
		(100.0*(double)count / (double)total);
	printf("\n\t кол-во попыток...: %ln", total);
	printf("\n\t кол-во попаданий...: %ln %6.2 lf %% \n", count, p);
}

void game() 
	{
		const unsigned n = 9, m = 2;
		unsigned all(0), cht(0); //all - счетчик попыток,cht - счетчик попаданий
		unsigned u(0), v(0); //координаты мишени
		unsigned x(0), y(0); //координаты пользователя
		srand((unsigned)time(0)); 
		while (next()) 
			{
				u = rand() % (n - m + 1);
				v = rand() % (n - m + 1);
				printf("\n%d", u);
				printf("\n%d", v);
				printf("\n\n Укажите координаты точки:\n ");
				scanf_s("%d %d", &x, &y);
				all++;

				if (((x >= u)&&(x <= (u +2)))&&((y >= v)&&(y <= (v + 2))))
					{
						printf("\n Попал\n");
						cht++;
					}
				else
					{
						printf("\n Промах\n");
					}
				show_result(all, cht);
			}
	//	show_result(all, cht);
		//printf("%s %d", "\n\n Вы выбрали выход. \n Ваш результат:\n Всего попыток:", (double)all);
		//printf("%s %d", "\n Всего попаданий:", (double)cht);
	}

bool menu()
	{
		const char key2 = '0', key3 = '1', key4 = '2';
		int loop(1);  //условие запуска цикла
		char ck('0'); //переменная для хранения ввода пользователя
		printf("\n\n Меню рисовалки:");
		printf("\n\n 0 - Выход; \n 1 - Рисоввать; \n\n Ваш выбор...?:");
		while (loop)
			{
				ck = _getch();
				if ((ck == key2) || (ck == key3))
				{
					loop--;
				}
			}
		return ck != key2;
	}

void draw()
	{
		
		int h(0); //высота фигуры
		while (menu())
			{	
				char a('0');
				printf("\n\n Выберите рисуемую фигуру: \n 1-Прямоугольный треугольник; \n 2-Равнобедренный треугольник;");
				a = _getch();
				
				if ( a=='1')
					{
						printf("\n\n Введите высоту рисуемой фигуры:");
						scanf_s("%d", &h);
						int j(0), t(0), k(0); //счетчик рисунка
						for (t = 0; t <= h-1; t++)
							{
								for (k = 0; k <= j; k++)
									{
										printf("x");
									}
								j++;
								printf("\n");
							}	
					}
				else if (a =='2')
					{
						printf("\n\n Введите высоту рисуемой фигуры:");
						scanf_s("%d", &h);
						int j(0), t(0), k(0), m(0), s(0); //счетчик рисунка
						double l(0);
						l = h;
						for (t = 0; t <= h-1; t++)
							{
								for (m = 0; m <= l- 1; m++)
								{
									printf(" ");
								}
								l--;
								for (k = 0; k <= j+s; k++)
									{
										printf("x");
									}
								j++;
								s++;


								printf("\n");
							}	

					}
			}
		printf("\n\n Надеемся вам понравилось рисовать");
	}

void program()
	{

	printf("\n\n Меню программы: \n 0 - выход; \n 1 - играть; \n 2 - рисовать; \n\n Ваш выбор...?:");
	char ch('\0');
		ch = _getch();
		if (ch == '1')
			{
				game();
			}
		else if (ch == '2')
			{
				draw();
			}
		else
		{
			printf("\n\n\n\n\t\t\t Спасибо, что посмотрели мою программу.");
		}
	}
void body() {
	printf("\t\n\n Меню программы: \n 0 - выход; \n 1 - играть; \n 2-рисовать; \n\n Ваш выбор...?:");
	char ch('\0');
	ch = _getch();
	if (ch == '1')
	{
		game();
	}

	else if (ch == '2')
	{
		draw();
	}
	else
	{
		printf("\n\n\n\n\t\t\t Спасибо, что посмотрели мою программу.");
	}
	
}

int main()
{
	setlocale(LC_ALL, "RUS");
	//1. приветствие пользователя
	printf("\t Добро пожаловать в интерактвную программу");
	//2. общее меню
	char ch('\5');
	while (ch != '0') {
		printf("\t\n\n Меню программы: \n 0 - выход; \n 1 - играть; \n 2-рисовать; \n\n Ваш выбор...?:");
		ch = _getch();
		if (ch == '1')
		{
			game();
		}

		else if (ch == '2')
		{
			draw();
		}
		else
		{
			printf("\n\n\n\n\t\t\t Спасибо, что посмотрели мою программу.");
			ch = '0';
		}
	}
	_getch();
	return 0;
}

