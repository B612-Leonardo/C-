#include<stdio.h>
int main()
{
	int m,n,q,r;
	scanf("%d %d %d %d",&m,&n,&q,&r);
	if(m<-100000||m>100000||n<-100000||n>100000||q<-100000||q>100000||r<-100000||r>100000)
	{
		printf("wrong number");
	}
	else
	{
		if(q==m/n&&r==m%n)
		{
			printf("yes");
		}
		else
		{
			q=m/n;
			r=m%n;
			printf("%d %d",q,r);
		}
	}
	return 0;
 } 
