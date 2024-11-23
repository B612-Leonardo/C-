#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[30],num=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-2;i++)
	{
		if(a[i]==3&&a[i+1]==5&&a[i+2]==7)
		{
			num++;
		}
	}
	printf("%d",num);
	return 0;
}
