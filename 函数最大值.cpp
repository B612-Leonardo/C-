#include<stdio.h>
#include<math.h> 
int main()
{
	double a;
	scanf("%lf",&a);
	double f,max=0.0;
	for(double i=0;i<=10.0;i=i+0.0001)
	{
		f=-pow(i,3)+a*pow(i,2);
		if(max<f)
		{
			max=f;
		}
	}
	printf("%.2lf",max);
	return 0;
}
