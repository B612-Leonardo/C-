#include<stdio.h>
int main()
{
	float m,n;
	double s,a;
	scanf("%f %f",&m,&n);
	if(m==1&&n>=500&&n<=5000)
	{
		s=n*0.8;
	}
	else if(m==1&&n>=350&&n<500)
	{
		s=n*0.85;
	}
	else if(m==1&&n>=200&&n<350)
	{
		s=n*0.9;
	}
	else if(m==0&&n>=500&&n<=5000)
	{
		s=n*0.9;
	}
	else if(m==0&&n>=350&&n<500)
	{
		s=0.95*n;
	}
	else if((m==1&&n>0&&n<200)||(m==0&&n>0&&n<350))
	{
		s=n*1.0;
	}
	else
	{
	}
	a=n-s;
	if(m==1)
	{
		printf("yes %.1f %.1f %.1f",n,s,a);
	}
	else if(m==0)
	{
		printf("no %.1f %.1f %.1f",n,s,a);
	}
	return 0;
 } 
