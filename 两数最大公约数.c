#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int c = a < b ? a : b;
	if (a == 1 || b == 1)
	{
		c = 1;
	}
	else
	{
		while (c > 1)
		{
			if (a % c == 0 && b % c == 0)
			{
				break;
			}
			else
			{
				c--;
			}
		}
	}
	printf("最大公约数是%d", c);
	return 0;
}
