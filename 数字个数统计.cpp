#include<stdio.h>
int main()
{
	int n,a=0,b=0,c=0,s1=0;
	scanf("%d",&n);
	for(int i=n;i<=n*n;i++)
	{
		if(i%2!=0)
		{
			a++;
		}
		else
		{
			b++;
		}
		if(i%4==0&&i%3!=0)
		{
			c++;
		}
	}
	int max=a>b?(a>c?a:c):(b>c?b:c);
	int max2=a>b?(a<c?a:(b>c?b:c)):(b<c?b:(a>c?a:c));
	s1=max+max2;
	printf("%d %d %d\n%d",a,b,c,s1);
	return 0;
}
