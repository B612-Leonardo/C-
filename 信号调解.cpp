#include<stdio.h>
#include<math.h>
int main()
{
	int n,b;
	scanf("%d",&n);
	int a[40],dis1,dis2;
	int i=1;
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&a[2*i-1],&a[2*i-2]);
		dis1=pow(a[2*i-1]-4,2)+pow(a[2*i-2]-4,2);
		dis2=pow(a[2*i-1]+4,2)+pow(a[2*i-2]+4,2);
		if(dis1>dis2)
		{
			b=2;
		}
		else
		{
			b=1;
		}
		printf("%d ",b);
	}
	return 0;
} 
