#include<stdio.h>
int main()
{
	int num,a;
	scanf("%d",&num);
	int t=num;
	if(t%10==0)
	{
		do
		{
			t/=10;
		}
		while(t%10==0);
	}
		a=t*t-t;
		if(a%10==0)
		{
			printf("%d 1",num);
		}
		else
		{
			printf("%d 0",num);
		}
	return 0;
 } 
