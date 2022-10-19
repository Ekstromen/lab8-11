#define _CRT_SECURE_NO_DEPRECATE
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <locale.h>
#include <math.h>

double ryad(double x, int n);

void main(void)
{
	int eps;
	double x;
	setlocale(LC_ALL, "rus");
	printf("¬ведите x:\n");
	scanf("%lf", &x);
	printf("¬ведите точность определени€:\n");
	scanf("%d", &eps);
	printf(" arcctg = %f", (M_PI/2) + ryad(x,eps));
}

double ryad(double x, int eps)
{
	double z = 0;
	int n = 0;
	for (; n < eps && fabs(x) <= 1; n++)
	{
		z = z + ((pow(-1, n + 1) * pow(x, 2 * n + 1)) / (2 * n + 1));
	}
	return z;
}