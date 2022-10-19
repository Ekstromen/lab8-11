#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

double fa(double x);
double fb(double x);

void main()
{
	double x;
	setlocale(LC_ALL, "rus");
	printf("Введите x\n");
	scanf("%lf", &x);
	printf("произведение функций = %lf; разность квадратов функций = %lf; удвоенная сумма функций = %lf", fa(x) * fb(x), pow(fa(x), 2) - pow(fb(x), 2), 2 * (fa(x) + fb(x)));

}

double fa(double x)
{
	if (x <= 3) {
		return (pow(x, 2) - (3 * x) + 9);
	}
	else {
		return (1 / (pow(x, 3) + 3));
	}
}

double fb(double x)
{
	return (x * exp(sin(pow(x, 2))));
}
