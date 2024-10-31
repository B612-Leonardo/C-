#include<stdio.h>
int main()
{
	int m,s;
	double c,t;
	scanf("%d %d",&m,&s);
	t=m+s/60.0;
	if(t>=0&&t<=10)
	{
		c=100-5.0*t;
	}
	else if(t>10&&t<=30)
	{
		c=50-(t-10.0);
	}
	else if(t>30&&t<=50)
	{
		c=30-(t-30)/2.0;
	}
	else if(t>50)
	{
		c=20.0;
	}
	printf("%.1f",c);
	return 0;
 } 
