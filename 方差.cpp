#include<stdio.h>
#include<math.h>
int main() 
{
	int n;
	double av,p,sum1=0,sum2=0;
	scanf("%d",&n);
	int a[30];
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum1+=a[i];
		sum2+=pow(a[i],2);
	}
	av=sum1/n;
	p=sum2/n-pow(av,2);
	printf("%.f",p);
	return 0;
}
