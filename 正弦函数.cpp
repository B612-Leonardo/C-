#include<stdio.h>
#include<math.h>
int c(int a)
{
	int i=1,b=1;
	for(i=1;i<=a;i++)
	{
		b*=i;
	}
	return b;
}
int main()
{
	int n;
	double x,sin;
	scanf("%d %lf",&n,&x);
	double q=1;
	for(q=1;q<=n;q++)
	{
		
		sin+=pow(x,2*q-1)/c(2*q-1)*pow(-1,q+1);
	}
	printf("%.4f",sin);
	return 0;
}
