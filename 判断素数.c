#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, i=2;
	scanf("%d", &n);
	if (n <= 1)
	{
		printf("wrong");
	}
	else
	{
		while (i <=n )
		{
			if (n % i == 0)
			{
				break;
			}
			else
			{
				i++;
			}
		}
		if (i == n||i==n+1)
		{
			printf("%d is prime.\n", n);
		}
		else
		{
			printf("%d is not prime.\n", n);
		}
	}
	return 0;
}