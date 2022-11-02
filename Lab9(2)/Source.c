#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	int x, c, ch, z = 2, w;


	while (1)
	{
		setlocale(LC_ALL, "rus");
		printf("Введите число:\n");
		scanf("%d", &x);
		char v;
		

		while (x / 10 != 0)
		{
			c = x % 10;
			ch = c;
			x = x / 10;
			if (x % 10 == c)
			{
				printf("Рядом расположенные одинаковые цифры: %d\n", ch);

			}

		}
			
		printf("Хотите продолжить работу алгоритма?\n Любая клавиша = да, n = нет.\n");
		scanf("%c", &v);
		if (v = getchar() == 'n') break;


	}
}
