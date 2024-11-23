#include<stdio.h>
int main()
{
	int n,p1=0,p2=0,p3=0,p4=0,p5=0,p6=0;
	double av,sum;
	scanf("%d",&n);
	int a[100],i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
		if(a[i]>=0&&a[i]<=50)
		{
			p1++;
		}
		if(a[i]>=51&&a[i]<=100)
		{
			p2++;
		}
		if(a[i]>=101&&a[i]<=150)
		{
			p3++;
		}
		if(a[i]>=151&&a[i]<=200)
		{
			p4++;
		}
		if(a[i]>=201&&a[i]<=300)
		{
			p5++;
		}
		if(a[i]>300)
		{
			p6++;
		}
	}
	av=sum/n;
	printf("%.2f\n%d %d %d %d %d %d",av,p1,p2,p3,p4,p5,p6);
	return 0;
}
