#include<stdio.h>
int main()
{
	double dis;
	int min;
	scanf("%lf %d",&dis,&min); 
	double s1,s2,sum;
	s2=(min/5)*2.0;
	if(dis>0&&dis<=3)
	{
		s1=10;
	}
	if(dis>3&&dis<=10)
	{
		s1=10+(dis-3)*2;
	}
	if(dis>10)
	{
		s1=24+(dis-10)*3;
	}
	sum=s1+s2;
	printf("%.1f",sum);
	return 0;
}
