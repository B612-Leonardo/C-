#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	double a, b, c;
	double z;
	double x1, x2;
	scanf("%lf %lf %lf", &a, &b, &c);
	z = b * b - 4 * a * c;
	if (z > 0)
	{
		x1 = (-b + sqrt(z)) / (2 * a);
		x2 = (-b - sqrt(z))/ (2 * a);
		printf("x1=%lf,x2=%lf", x1, x2);
	}
	else if (z == 0)
	{
		x1 = x2 = -b / (2 * a);
		printf("the only one real root is %lf", x1);
	}
	else
	{
		printf("there is no root");
	}
	return 0;
}