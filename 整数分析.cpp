#include<stdio.h>
void swap(int* a,int*b)
{
	int i=*a;
	if(*a<*b)
	{
		i=*a;
		*a=*b;
		*b=i;
	}
}
int main()
{
	int n,w=0,i=0,max,min;
	scanf("%d",&n);
	max=n%10;
	min=n/10%10;
	swap(&max,&min);
	for(;n>0;n=n/10)
	{
		int c=n%10;
		swap(&max,&c);
		swap(&c,&min);
		w++;
	}
	printf("%d %d %d",w,max,min);
	return 0;
}
