#include<stdio.h>
int main()
{
	char a[9];
	int i=0,s=0;
	for(i=0;i<9;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='a'||a[i]=='A')
		{
			s++;
		}
		else
		{
			s=s;
		}
	}
	printf("%d",s); 
	return 0;
}
