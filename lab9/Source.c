#define _CRT_SECURE_NO_DEPRECATE
#define M_PI 3.14159265358979323846
#define ROW 9
#define COL 9
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(void)
{
	int row,col;
	
	for (row = 1; row <= ROW; ++row)
	{
		for (col = 1; col <= COL; ++col)
		{
			printf("%d + %d = %d",col, row, col+row);
			printf("\t");
		}
		printf("\n");
	}

}
