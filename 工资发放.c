#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d",&a);
	b=a/100;
	a=a%100;
	c=a/50;
	a=a%50;
	d=a/20;
	a=a%20;
	e=a/10;
	a=a%10;
	f=a/5;
	a=a%5;
	printf("%d %d %d %d %d %d",b,c,d,e,f,a);
	return 0;
}
