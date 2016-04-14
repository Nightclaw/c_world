// laba_8_dinam_massiv.cpp: определ€ет точку входа дл€ консольного приложени€.
//


/*
«адание 1: дан одномерный целочисленный динамический массив заполненный случайными числами 
Ќадо написать программу, котора€ после каждого четного исходного элемента массива будет добавл€ть новый элемент =0
¬ывести в консоль исходный и преобразованный массивы

*/
#include "stdafx.h"
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	setlocale(LC_ALL, "RUS");
	int n(0);
	int *p(NULL);
	int *w(NULL);
	int k[1];
	int t(0);
	int i(0), j(0), l(0), s(0);
	printf ("\n\n\t ”кажите кол - во эл.массива?: ");
	scanf_s("%d", &n);
	p = (int*)malloc(n*sizeof(int));
	if (!p) {
		printf("\n\t Ќедостаточно пам€ти");
		_getch();
			return 1;
	}
	//инициализируем массив
	srand(unsigned(time(NULL)));
	for (i = 0; i < n; i++) {
		p[i] = rand() % 100;
	}
	for (i = 0; i < n; i++) {
		printf("%d;", p[i]);
	}
	//ищем кол-во четных элементов
	for (i = 0; i < n; i++) {
		if (p[i]%2 == 0) {
			j++;
		}
	}
	//printf("=%d", j);
	//задаем новый размер динамического массива с учетом четных эл
	s = n + j;
	w = (int*)malloc(s*sizeof(int));
	/*for (i = 0; i < n; i++) {
		w[i] = p[i];
	}
	*/
	w=p; //здесь значиени одно забиваетс€ другим??????? 
	//free((void*)p);
	for (i = 0; i < n; i++) {
		if (w[i] % 2 == 0) {
			for (t = n; t=i; t--) {
				 k[1]=w[t];
				w[t++] = k[1];
			}
			w[i++] = 0;
			n = n + 1;
			i = i + 2;
		}
	}
	printf("\n");
	for (i = 0; i < s; i++) {
		printf("n%d;", w[i]);
	}


	_getch();
	return 0;
}

