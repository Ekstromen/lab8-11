#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int figure(int x, int y, int r);

void main()
{
	int x, y, X, Y,b,a,r;
	setlocale(LC_ALL, "rus");
	printf("Введите радиус: \n");
	scanf("%d", &r);
	printf("Введите малую сторону: \n");
	scanf("%d", &a);

	X = r * 2;
	Y = r * 2;
 	b = sqrt(pow(2*r,2) - pow(a,2));

	for (y = -(Y / 2); y <= Y / 2; ++y)
	{
		for (x = -(X / 2); x <= X / 2; ++x)
		{
			if (figure(x, y, r) > figure(x,y,r-2)) printf("x ");
			else printf("  ");
		}
		printf("\n");
	}


}

int figure(int x, int y, int r)
{
	if ((y > ((x - r) / 2)) && (y < -((x - r) / 2)) && (y < x + r) && (y > -(x + r))) return 1;
	else return 0;


}		
