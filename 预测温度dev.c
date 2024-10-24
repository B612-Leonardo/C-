#include<stdio.h>
#include<math.h>
int main()
{
	int h,m;
	double T,H;
	scanf("%d %d",&h,&m);
	H=h+m/60.0;
	T=4*pow(H,2)/(H+2)-20.0;
	printf("%.2f",T);
	return 0;
 } 
