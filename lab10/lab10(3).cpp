#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>



struct point {
	float x;
	float y;
	char name;
};

typedef struct point Point;\

void put_point(Point z);
float dist(Point z, Point w);
Point midle(Point z, Point w);
float quater(Point x);
float edit_ax(Point z);
float edit_ay(Point z);
float edit_bx(Point z);
float edit_by(Point z);


int main()
{
	int v=-1;
	float m1, m2;
	Point b,a;
	b.x = 5;
	b.y = -3;
	a.x = 9;
	a.y = 2;
	b.name = 'B';
	setlocale(LC_ALL, "rus");
	while (v != 0)
	{
	
		printf("\n�������� ��������:\n1.) ������� ���������� � ������ � � b\n2.) ������� ��������� ����� ������� a � b\n3.) ������� �����, ������� �������� ��������� ������� ab\n4.) ������� � ����� ��������� ����������� �����\n5.) �������� �������� ����� a � b\n0.) ���������� ������ � ����������\n");
		scanf("%d", &v);
		switch (v)
		{
		case 1:
			put_point(a);
			put_point(b);
			break;
		case 2:
			printf("��������� ����� ������� = %f\n", dist(b, a));
			break;
		case 3:
			printf("����� �������� ������� ab = (%.2f, %.2f)\n", midle(b, a),);
			break;
		case 4:
			printf("\n ����� a ����������� � %.0f ��������\n", quater(a));
			printf("\n ����� b ����������� � %.0f ��������\n", quater(b));
			break;
		case 5:
			printf("\n%.2f\n", a.x = edit_ax(a));
			printf("\n%.2f\n", a.y = edit_ay(a));
			printf("\n%.2f\n", b.x = edit_bx(b));
			printf("\n%.2f\n", b.y = edit_by(b));
			break;
		case 0:
			v = 0;
			break;
		default:
			printf("\n������\n");
		}
	}
	
	
	
	

}

void put_point(Point z) 
{
	 printf("point %c (%.1f, %.1f)", z.name, z.x, z.y);
}

float dist(Point z, Point w) 
{
	return fabs(pow((pow(z.x - w.x, 2) + (pow(z.y - w.y, 2))), 1. / 2));
}

Point midle(Point z, Point w)
{
	Point b;
	b.x = (z.x + w.x) / 2.;
	b.y = (z.y + w.y) / 2;
	return b;

}
float quater(Point z)
{
	if (z.x > 0 && z.y > 0) return 1;
	if (z.x < 0 && z.y > 0) return 2;
	if (z.x < 0 && z.y < 0) return 3;
	if (z.x > 0 && z.y < 0) return 4;
}

float edit_ax(Point z)
{
	printf("������� ����� �������� �.x:\n");
	scanf("%f", &z.x);
	return z.x;
}
float edit_ay(Point z)
{
	printf("������� ����� �������� a.y:\n");
	scanf("%f", &z.y);
	return z.y;
}
float edit_bx(Point z)
{
	printf("������� ����� �������� b.x:\n");
	scanf("%f", &z.x);
	return z.x;
}
float edit_by(Point z)
{
	printf("������� ����� �������� b.y:\n");
	scanf("%f", &z.y);
	return z.y;
}