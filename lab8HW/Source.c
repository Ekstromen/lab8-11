#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	float i,a = 0.2;
	setlocale(LC_ALL, "rus");
	i = (1 + sin(0.1));
	for (; a < 10; a += 0.1) i = (i + (1 * sin(a)));
	printf("%f",i);
}