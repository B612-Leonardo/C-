#include<stdio.h>
int main()
{
	char a,b;
	scanf("%c",&a);
	if(a>='a'&&a<='w')
	{
		b=a+3;
	}
	else if(a>='x'&&a<='z')
	{
		b=a-23;
	}
	else if(a>='C'&&a<='Z')
	{
		b=a-2;
	}
	else if(a=='A'||a=='B')
	{
		b=a+24;
	}
	else if(a>='0'&&a<='9')
	{
		b='9'-a+'0';
	}
	else if(a==' ')
	{
		b='*';
	}
	else
	{
		b='#';
	}
	printf("%c %c",a,b);
	return 0;
 } 
