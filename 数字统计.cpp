#include<stdio.h>
int main()
{
	int m,k,n1=0,n2=0,n3=0;
	scanf("%d %d",&m,&k);
	int a[200];
	for(int i=0;i<k;i++)
	{
		a[0]=2;
		a[1]=3;
		if(i>1)
		{
			a[i]=i*i+3*(i-1)+1;
		}
	}
	for(int i=0;i<k;i++)
	{
		if(a[i]%m==0)
		{
			n1++;
		}
		if(a[i]%m==1)
		{
			n2++;
		}
		if(a[i]%m>1)
		{
			n3++;
		}
	}
	printf("%d %d %d",n1,n2,n3);
	return 0;
 } 
