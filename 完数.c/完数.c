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
			printf("����");
		}
		else
		{
			printf("������");
		}
	}
	else if (n == 4)
	{
		printf("������");
	}
	else
	{
		printf("�����ʽ����");
	}
	return 0;
}
