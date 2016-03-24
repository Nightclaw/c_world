// laba4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
bool next()
	{
		const char key0 = '0', key1 = '1';
		int loop(1);  //������� ������� �����
		char cb('0'); //���������� ��� �������� ����� ������������
		printf ("\n\n ���� ����:");
		printf ("\n\n 0 - �����; \n 1 - ������; \n\n ��� �����...?:");
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
	printf("\n\t ���-�� �������...: %ln", total);
	printf("\n\t ���-�� ���������...: %ln %6.2 lf %% \n", count, p);
}

void game() 
	{
		const unsigned n = 9, m = 2;
		unsigned all(0), cht(0); //all - ������� �������,cht - ������� ���������
		unsigned u(0), v(0); //���������� ������
		unsigned x(0), y(0); //���������� ������������
		srand((unsigned)time(0)); 
		while (next()) 
			{
				u = rand() % (n - m + 1);
				v = rand() % (n - m + 1);
				printf("\n%d", u);
				printf("\n%d", v);
				printf("\n\n ������� ���������� �����:\n ");
				scanf_s("%d %d", &x, &y);
				all++;

				if (((x >= u)&&(x <= (u +2)))&&((y >= v)&&(y <= (v + 2))))
					{
						printf("\n �����\n");
						cht++;
					}
				else
					{
						printf("\n ������\n");
					}
				show_result(all, cht);
			}
	//	show_result(all, cht);
		//printf("%s %d", "\n\n �� ������� �����. \n ��� ���������:\n ����� �������:", (double)all);
		//printf("%s %d", "\n ����� ���������:", (double)cht);
	}

bool menu()
	{
		const char key2 = '0', key3 = '1', key4 = '2';
		int loop(1);  //������� ������� �����
		char ck('0'); //���������� ��� �������� ����� ������������
		printf("\n\n ���� ���������:");
		printf("\n\n 0 - �����; \n 1 - ���������; \n\n ��� �����...?:");
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
		
		int h(0); //������ ������
		while (menu())
			{	
				char a('0');
				printf("\n\n �������� �������� ������: \n 1-������������� �����������; \n 2-�������������� �����������;");
				a = _getch();
				
				if ( a=='1')
					{
						printf("\n\n ������� ������ �������� ������:");
						scanf_s("%d", &h);
						int j(0), t(0), k(0); //������� �������
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
						printf("\n\n ������� ������ �������� ������:");
						scanf_s("%d", &h);
						int j(0), t(0), k(0), m(0), s(0); //������� �������
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
		printf("\n\n �������� ��� ����������� ��������");
	}

void program()
	{

	printf("\n\n ���� ���������: \n 0 - �����; \n 1 - ������; \n 2 - ��������; \n\n ��� �����...?:");
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
			printf("\n\n\n\n\t\t\t �������, ��� ���������� ��� ���������.");
		}
	}
void body() {
	printf("\t\n\n ���� ���������: \n 0 - �����; \n 1 - ������; \n 2-��������; \n\n ��� �����...?:");
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
		printf("\n\n\n\n\t\t\t �������, ��� ���������� ��� ���������.");
	}
	
}

int main()
{
	setlocale(LC_ALL, "RUS");
	//1. ����������� ������������
	printf("\t ����� ���������� � ������������ ���������");
	//2. ����� ����
	char ch('\5');
	while (ch != '0') {
		printf("\t\n\n ���� ���������: \n 0 - �����; \n 1 - ������; \n 2-��������; \n\n ��� �����...?:");
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
			printf("\n\n\n\n\t\t\t �������, ��� ���������� ��� ���������.");
			ch = '0';
		}
	}
	_getch();
	return 0;
}

