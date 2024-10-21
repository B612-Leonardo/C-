#include<stdio.h>
int main()
{
	int n = 0,a=2,s=1 ;
	scanf("%d", &n);
	if (n >= 1 && n <= 10000 && n != 4)
	{
		while (a < n / 2)
		{
			if (n % a == 0)
			{
				s = s + (n / a) + a;
			}
			a++;
		}
		if (n == s)
		{
			printf("完数");
		}
		else
		{
			printf("非完数");
		}
	}
	else if (n == 4)
	{
		printf("非完数");
	}
	else
	{
		printf("输入格式错误");
	}
	return 0;
}
