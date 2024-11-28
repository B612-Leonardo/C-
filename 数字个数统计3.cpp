#include<stdio.h>
int main()
{
	int A,B,n1=0,n2=0,n3=0,max;
	scanf("%d %d",&A,&B);
	if(A>B)
	{
		int z=A;
		A=B;
		B=z;
	 } 
	for(int i=A;i<=B;i++)
	{
		if(i%3==0)
		{
			n1++;
		}
		if(i%4==0)
		{
			n2++;
		}
		if(i%5==0&&i%2!=0)
		{
			n3++;
		}
	}
	max=n1>n2?(n1<n3?n1:(n2>n3?n2:n3)):(n2<n3?n2:(n1>n3?n1:n3));
	printf("%d %d %d\n%d",n1,n2,n3,max);
	return 0;
 } 
