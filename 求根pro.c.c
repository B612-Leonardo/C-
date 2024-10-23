#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	double a, b, c,z, x1, x2,p,q;
	scanf("%lf %lf %lf", &a, &b, &c);
	z = b * b - 4 * a * c;
	if (a == 0)
	{
		x1 = -1.0 * a / b;
		printf("the only one root is %.3f.\n", x1);
	}
	else
	{
		if (a < 0)
		{
			a = -a;
			b = -b;
			c = -c;
		}
		if (z > 0)
		{
			x1 = (-b + sqrt(z)) / (2 * a);
			x2 = (-b - sqrt(z)) / (2 * a);
			printf("the two real roots are %.3f and %.3f.\n", x1, x2);
		}
		else if (z == 0)
		{
			x1 = x2 = -b / (2 * a);
			printf("the two roots are both %.3f.\n", x1);
		}
		else
		{
			p = -b / (2 * a);
			q = sqrt(-z) / (2 * a);
			printf("the two imaginary roots are %.3f+%.3fi and %.3f-%.3fi.",p,q,p,q);
		}
	}
	return 0;
}